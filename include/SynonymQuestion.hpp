#ifndef SYNONYMQUESTION_HPP
#define SYNONYMQUESTION_HPP

#include <string>
#include <iostream>

//encapsulates data for a single Synonym question
class SynonymQuestion {
private:
    std::string left_word;
    std::string middle_word;
    std::string right_word;
    std::string left_sentence;
    std::string right_sentence;
    int points;

public:
    SynonymQuestion(const std::string& left, const std::string& middle, 
                    const std::string& right, const std::string& lsentence,
                    const std::string& rsentence, int value);

    //prints this question to outstream
    void show_question(std::ostream& out) const;
    //prints hint of given number to outstream
    void show_hint(int hint_num, std::ostream& out) const;
    //prints answer to this question to outstream
    void show_answer(std::ostream& out) const;
    //whether player input matches this question's correct answer
    bool correct_guess(const std::string& guess) const;
    //retrieves the number of points associated with this question
    int get_points() const;
    //retrieves middle word (correct answer)
    std::string get_middle_word() const;
};

#endif
