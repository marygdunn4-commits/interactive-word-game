#ifndef QUESTIONDATASET_HPP
#define QUESTIONDATASET_HPP

#include <vector>
#include "SynonymQuestion.hpp"

class QuestionDataset {
private:
    //a vector representing all questions in this dataset
    std::vector<SynonymQuestion> questions;
    //a vector with indices corresponding to the one above, each boolean representative 
    //of whether or not the corresponding question has been used
    std::vector<bool> used;
    //the number of sessions played so far in this game
    int sessions_played;

public:
    QuestionDataset();
    //returns a vector representing 10 random, unused questions for the next session 
    std::vector<SynonymQuestion> next_session();
};

#endif
