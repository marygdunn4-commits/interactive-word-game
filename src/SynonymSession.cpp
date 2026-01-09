#include "SynonymSession.hpp"
#include <string>
#include <iomanip>

SynonymSession::SynonymSession(const std::vector<SynonymQuestion>& questions)
    : questions(questions), score(0)
{}

namespace {
    void print_question_stats(const int stats[][3], std::ostream& out) {
        out << "Game Summary:\n";
        out << std::left << std::setw(4)  << "Q#" << std::setw(8)  << "Points" << std::setw(8)  << "Hints"
        << std::setw(9)  << "Correct?" << "\n";
        for (int i = 0; i < 10; ++i) {
            out << std::left
            //presets with so the grid is aligned
            << std::setw(4)  << (i + 1)
            << std::setw(8)  << stats[i][0]
            << std::setw(8)  << stats[i][1]
            << std::setw(9)  << (stats[i][2] ? "Y" : "N")
            << "\n";
        }
        out << "\n";
    }
}

// Plays one full 10-question game session
void SynonymSession::play(std::istream& in, std::ostream& out) {
    out << "You will be given 10 questions.\n";
    out << "Type your guess or type 'hint' to get a hint (-1 point).\n";
    out << "Each question allows up to 2 hints.\n\n";

    //2D built-in array representing questions and their point value, # hints used, & 1 if correct/0 if incorrect
    int stats[10][3] = {0};  

    //traverses through eeach question in subset
    for (std::size_t i = 0; i < questions.size(); ++i) {
        out << "--------------------------------------------\n";
        out << "Question " << (i + 1) << ":\n";
        out << "Current Score: " << score << "\n";

        questions[i].show_question(out);

        int hints_used = 0;
        bool answered = false;

        //record points for this question
        stats[i][0] = questions[i].get_points();
        stats[i][1] = 0; 
        stats[i][2] = 0; 

        while (!answered) {
            out << "Enter your guess (or 'hint'): ";
            std::string input;
            in >> input;
            if (input == "hint" || input == "Hint") {
                if (hints_used < 2) {
                    hints_used++;
                    //record hint in array
                    stats[i][1] = hints_used;
                    //decrement 1 point for the use of a hint
                    score -= 1;   
                    questions[i].show_hint(hints_used, out);
                    out << "(-1 point for hint)\n";
                } 
                else {
                    //if both hints have been used
                    out << "No more hints available for this question.\n";
                }
            } 
            else {
                //if correct, increment score
                if (questions[i].correct_guess(input)) {
                    score += questions[i].get_points();
                    stats[i][2] = 1;
                    out << "Correct!\n";
                } 
                else {
                    out << "Incorrect.\n";
                    //update that this word was missed 1x
                    std::string middle = questions[i].get_middle_word();
                    miss_counts[middle]++; 
                }

                questions[i].show_answer(out);
                answered = true;
            }
        }
    }
    out << "\n===== Game Over =====\n";
    out << "Final Score: " << score << "\n\n";

    print_question_stats(stats, out);

    //prints words lost
    if (!miss_counts.empty()) {
    out << "Words you missed this game:\n";
    for (const auto& entry : miss_counts) {
        out << "  " << entry.first << ": "
            << entry.second << " miss(es)\n";
    }
} else {
        out << "Congrats! No missed words!" << "\n\n";
}
}

//returns final score after game is over
int SynonymSession::final_score() const {
    return score;
}
