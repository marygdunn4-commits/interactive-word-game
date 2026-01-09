#ifndef SYNONYMSESSION_HPP
#define SYNONYMSESSION_HPP

#include <map>
#include <vector>
#include <iostream>
#include "SynonymQuestion.hpp"

class SynonymSession {
private:
    //10 questions in this game session
    std::vector<SynonymQuestion> questions;
    std::map<std::string, int> miss_counts;  

    //score of this game session
    int score;

public:
    //creates a game session with the given collection of questions
    SynonymSession(const std::vector<SynonymQuestion>& questions);
    //plays game with in /outstreams
    void play(std::istream& in, std::ostream& out);
    //retrieves final score of game
    int final_score() const;
};

#endif
