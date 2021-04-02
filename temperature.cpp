#include <iostream>
using namespace std;

int main() 

{

    double tempf;
    double tempc;

    //Ask the user
    std::cout <<"Enter the temperature in farenheit:\n";
    std::cin >> tempf;

    tempc = (tempf - 32) / 1.8;
    

    std::cout << "The temp is" << tempc << "degress Celsius.\n";

}