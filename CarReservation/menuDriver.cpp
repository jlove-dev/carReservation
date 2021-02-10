#include <string>
#include <iostream>
#include <string>
#include "carHeader.h"

using namespace Car;

void LinkedList::welcomeMessage()
{
	//ASCII art credit: https://www.patorjk.com/software/taag/#p=display&f=Big&t=Welcome
	std::cout << "  __          __  _                            " << std::endl;
	std::cout << "  \\ \\        / / | |                           " << std::endl;
	std::cout << "   \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___   " << std::endl;
	std::cout << "    \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\  " << std::endl;
	std::cout << "     \\  /\\  /  __/ | (_| (_) | | | | | |  __/  " << std::endl;
	std::cout << "      \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|  " << std::endl;
	std::cout << "                                               " << std::endl;
}

void LinkedList::menuSelection(LinkedList linkedList)
{
	std::cout << "_________New Age Car Rental Agency________" << std::endl;
	std::cout << std::endl;
	std::cout << "Please select from the following menu: " << std::endl;
	std::cout << "1. Add new cars" << std::endl;
	std::cout << "2. Delete a car" << std::endl;
	std::cout << "3. Print list of all cars" << std::endl;
	std::cout << std::endl;

	std::string userChoice;

	std::getline(std::cin, userChoice);

	char userChar = userChoice.at(0);

	switch (userChar) {
		case '1':
			LinkedList::getNewCar(linkedList);
			break;
		case '2':
			std::cout << "This feature to come!" << std::endl;
			break;
		case '3':
			linkedList.printList();
			break;
		default:
			std::cout << std::endl;
			std::cout << "Please select from the menu!" << std::endl;
			std::cout << std::endl;
			LinkedList::menuSelection(linkedList);
	}
}

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