#include "SynonymGame.hpp"
#include "SynonymSession.hpp"

#include <iostream>
#include <string>
#include <vector>

void SynonymGame::play() {
    std::cout << "=========================================\n";
    std::cout << "      Welcome to Synonym Sandwich!\n";
    std::cout << "=========================================\n\n";

    bool keep_playing = true;

    while (keep_playing) {
        //retrieves new set of questions and throws runtime error if this is not possible
        std::vector<SynonymQuestion> sessionQuestions = dataset.next_session();

        SynonymSession session(sessionQuestions);
        session.play(std::cin, std::cout);

        //asks the user if they want to play another game
        std::cout << "Would you like to play another game with new questions? (y/n): ";
        std::string answer;
        std::cin >> answer;

        //if user doesn't type "Y," stop the game
        if (answer != "y" && answer != "Y") {
            keep_playing = false;
        }
        std::cout << "\n";
    }
    std::cout << "Thanks for playing Synonym Sandwich! Goodbye.\n";
}
