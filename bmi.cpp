#include <iostream>

int main()

{

    double height, weight, bmi;

    // Ask user for their height

    std::cout << "Type in your height (m): ";
    std::cin >> height;

    // Now ask the user for weight and calculate BMI

    std::cout <<"Type in your weight (kg): ";
    std::cin >> weight;

    bmi = weight / (height * height )

    std::cout << "Your bmi is:" << bmi << "\n";

    return 0;

}