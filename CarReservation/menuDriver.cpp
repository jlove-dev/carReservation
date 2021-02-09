#include <string>
#include <iostream>
#include "carHeader.h"

using namespace Car;

LinkedList::carModel LinkedList::getNewCar()
{
	//create car object
	LinkedList::carModel newCar;

	//prompt and input the model
	std::cout << "Enter car model: " << std::endl;
	std::getline(std::cin, newCar.model);
	
	//prompt and input the color
	std::cout << "Enter car color: " << std::endl;
	std::getline(std::cin, newCar.color);

	//prompt and input the manufacturer
	std::cout << "Enter car manufacturer: " << std::endl;
	std::getline(std::cin, newCar.manuf);

	//prompt and input the year
	std::cout << "Enter car year: " << std::endl;
	std::cin >> newCar.year;

	//prompt and input the VIN
	std::cout << "Enter car VIN: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, newCar.VIN);

	//returns the new car object
	return newCar;

}