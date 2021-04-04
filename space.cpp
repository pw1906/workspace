#include <iostream>
using namespace std;

int main() {
  
  double compWeight, earthWeight;
  int planet;
  std::cout<< "For Mercury press 1, for Venus press 2, for Mars press 3, for\n";
  std::cout<< "Jupiter press 4, for Saturn press 5, Uranus is 6, Neptune - 7\n";
  //Asking about earth weight
  std::cout << "Enter your weight here (kg):\n";
  std::cin >> earthWeight;
  //Asking to enter a number for the planet
  std::cout << "Enter the number of the planet (1-7):\n";
  std::cin >> planet;
  if (planet > 7 || planet < 1 ) {
      std::cout << "Wrong number fella\n";
  }
  //Computing his weight on the destination planet
    switch(planet) {
        case 1:
        compWeight = earthWeight * 0.38;
        std::cout << "Your weight on Mercury will be:" << compWeight << "kg\n";
        break;
        case 2:
        compWeight = earthWeight * 0.91;
        std::cout << "Your weight on Venus will be:" << compWeight << "kg\n";
        break;
        case 3:
        compWeight = earthWeight * 0.38;
        std::cout << "Your weight on Mars will be:" << compWeight << "kg\n";
        break;
        case 4:
        compWeight = earthWeight * 2.34;
        std::cout << "Your weight on Jupiter will be:" << compWeight << "kg\n";
        break;
        case 5:
        compWeight = earthWeight * 1.06;
        std::cout << "Your weight on Saturn will be:" << compWeight << "kg\n";
        break;
        case 6:
        compWeight = earthWeight * 0.92;
        std::cout << "Your weight on Uranus will be:" << compWeight << "kg\n";
        break;
        case 7:
        compWeight = earthWeight * 1.19;
        std::cout << "Your weight on Neptune will be:" << compWeight << "kg\n";
        break;
    }
    
}

  

/*  Mercury = weight * 0.38;
  Venus = weight * 0.91;
  Mars = weight * 0.38;
  Jupiter = weight * 2.34;  
  Saturn = weight * 1.06;  
  Uranus = weight * 0.92;
  Neptune = weight * 1.19;

, Mercury, Venus, Mars, Jupiter, Saturn, Uranus, Neptune

*/





  
