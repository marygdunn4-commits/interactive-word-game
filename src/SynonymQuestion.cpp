#include "SynonymQuestion.hpp"

#include <cctype>   
#include <algorithm>


namespace {
    //converts string to lowercase
    std::string to_lowercase(const std::string& s) {
        std::string result = s;
        std::transform(result.begin(), result.end(), result.begin(),
        [](unsigned char ch) {
            return static_cast<char>(std::tolower(ch));
        });
    return result;
    }

    //returns copy of sentence with middle word replaced with __
    std::string blank_middle(const std::string& sentence, const std::string& middle) {
        if (middle.empty()) {
            return sentence;
        }

        std::string result = sentence;
        std::string lowercase_sentence = to_lowercase(sentence);
        std::string lowercase_middle = to_lowercase(middle);

        std::size_t pos = 0;
        while (true) {
            pos = lowercase_sentence.find(lowercase_middle, pos);
            if (pos == std::string::npos) {
                break;
            }

            for (std::size_t i = 0; i < middle.size() && pos + i < result.size(); ++i) {
                result[pos + i] = '_';
                lowercase_sentence[pos + i] = '_';
            }

            pos += middle.size();
        }

        return result;
    }
} 

//constructor initializes words, sentences, and points 
SynonymQuestion::SynonymQuestion(const std::string& left, const std::string& middle,
                                 const std::string& right, const std::string& lsentence,
                                 const std::string& rsentence, int value) : 
      left_word(left),
      middle_word(middle),
      right_word(right),
      left_sentence(lsentence),
      right_sentence(rsentence),
      points(value) {
        if (value < 1 || value > 5) {
            throw std::invalid_argument("Point value must be between 1 and 5.");
        }
         if (middle.empty()) {
            throw std::invalid_argument("Middle word cannot be empty.");
        }
}

//prints [left word] : __  : [right word] ([points]) to outstream
void SynonymQuestion::show_question(std::ostream& out) const {
    out << left_word << " : __ : " << right_word
        << " (" << points << " pt)" << std::endl;
}

//shows a hint, with given integer of 1 corresponding to left sentence and 2 to right
void SynonymQuestion::show_hint(int hint_num, std::ostream& out) const {
    if (hint_num == 1) {
        out << "Hint 1: " << blank_middle(left_sentence, middle_word) << std::endl;
    } else if (hint_num == 2) {
        out << "Hint 2: " << blank_middle(right_sentence, middle_word) << std::endl;
    } else {
        out << "No more hints available for this question." << std::endl;
    }
}

//shows full correct answer and both sentences (with the correct middle word)
void SynonymQuestion::show_answer(std::ostream& out) const {
    out << "The correct answer is: "
        << left_word << " : " << middle_word << " : " << right_word << std::endl;

    out << left_sentence << std::endl;
    out << right_sentence << std::endl;
}

//checks if the guess matches middle word
bool SynonymQuestion::correct_guess(const std::string& guess) const {
    return to_lowercase(guess) == to_lowercase(middle_word);
}

//returns the point value (difficulty) of this question
int SynonymQuestion::get_points() const {
    return points;
}

std::string SynonymQuestion::get_middle_word() const {
    return middle_word;
}
