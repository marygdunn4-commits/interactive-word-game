#include <iostream>
#include <stdexcept>
#include "SynonymGame.hpp"

int main() {
    try {
      //tries playing game and catches errors if needed
      SynonymGame game;
      game.play();
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Configuration error: " << e.what() << std::endl;
        return 1;
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Game error: " << e.what() << std::endl;
        return 2;
    }
}

