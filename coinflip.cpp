#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

    //create a number that's 0 or 1

    srand (time(NULL));
    int coin = rand() % 2;

    //if number is 0: Heads
    //if number is not 0: Tails

    if (coin == 0) {

        std::cout << "Heads\n";

    }
    else {

        std::cout << "Tails\n";
        
    }
}