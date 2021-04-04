#include <iostream>
using namespace std;

int main () {
    int year;
    //Take a year as an input.
    std::cout << "Please enter a year(four digits).\n";
    std::cin >> year;
    //Check that is a four-digit number.
    if (year > 999 && year < 10000){
        ;
    }
    else {
        std::cout << "This is not four digit number.\n";
        return 0;
    }
    //Display that is leap year or not.
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        std::cout << "This is a leap year.\n";
    }
    else {
        std::cout << "It's not leap year.\n";
    }
}