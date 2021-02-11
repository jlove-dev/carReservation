#include <string>
#include <iostream>
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
	std::cout << "4. Save data" << std::endl;
	std::cout << "5. Load data" << std::endl;
	std::cout << "6. Exit program" << std::endl;
	std::cout << std::endl;

	std::string userChoice;

	std::getline(std::cin, userChoice);

	char userChar = userChoice.at(0);

	switch (userChar) {
	case '1':
		linkedList.getNewCar(linkedList);
		menuSelection(linkedList);
		break;
	case '2':
		std::cout << "This feature to come!" << std::endl;
		menuSelection(linkedList);
		break;
	case '3':
		linkedList.printList();
		menuSelection(linkedList);
		break;
	case '4':
		linkedList.toCSV();
		menuSelection(linkedList);
		break;
	case '5':
		linkedList.readCSV();
		menuSelection(linkedList);
	case '6':
		return;
	default:
		std::cout << std::endl;
		std::cout << "Please select from the menu!" << std::endl;
		std::cout << std::endl;
		LinkedList::menuSelection(linkedList);
	}
}

