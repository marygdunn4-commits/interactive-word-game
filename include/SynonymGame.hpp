#ifndef GAMECONTROLLER_HPP
#define GAMECONTROLLER_HPP

#include "QuestionDataset.hpp"

//plays Synonym game with dataset
class SynonymGame {
private:
    QuestionDataset dataset;

public:
    void play();
};

#endif
