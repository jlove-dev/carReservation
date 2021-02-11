#include <string>
#include <iostream>
#include "carHeader.h"

using namespace Car;

void LinkedList::getNewCar(LinkedList linkedList)
{
	unsigned int i = 0;

	std::cout << "How many cars do you wish you enter?" << std::endl;

	std::cin >> i;

	std::cin.ignore();

	for (unsigned int j = 0; j < i; j++) 
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

		LinkedList::prependList(newCar);
	}

}