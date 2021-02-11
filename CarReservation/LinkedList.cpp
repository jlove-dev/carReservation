#include "carHeader.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace Car;

void LinkedList::prependList(LinkedList::carModel newCar)
{
	//create new node out of passed in object
	carLink* prependNode = new carLink(newCar);

	//check if list is empty
	if (headPtr == nullptr)
	{
		//list is empty, set head and tail to the new node
		headPtr = prependNode;
		tailPtr = prependNode;
	}
	else //list is not empty
	{
		prependNode->nextPtr = headPtr; //assign next pointer of new node as the current head
		headPtr = prependNode; //assign current head to the new pointer
	}
}

void LinkedList::printList()
{
	LinkedList::carLink* currentPtr = headPtr;

	while (currentPtr != nullptr)
	{
		std::cout << "| " << currentPtr->newCar.manuf << ": ";
		std::cout << currentPtr->newCar.color << " ";
		std::cout << currentPtr->newCar.model << " from ";
		std::cout << currentPtr->newCar.year << " with VIN: ";
		std::cout << currentPtr->newCar.VIN << std::flush;

		std::cout << std::endl;

		currentPtr = currentPtr->nextPtr;
	}

}

void LinkedList::toCSV()
{
	LinkedList::carLink* currentPtr = headPtr;

	std::ofstream newFile("car_save_data.csv", std::ios::out, std::ios::trunc);

	if (newFile)
	{
		while (currentPtr != nullptr) {

			newFile << "Manufacturer, color, model, year, VIN\n";
			newFile << currentPtr->newCar.manuf << ",";
			newFile << currentPtr->newCar.color << ",";
			newFile << currentPtr->newCar.model << ",";
			newFile << currentPtr->newCar.year << ",";
			newFile << currentPtr->newCar.VIN << ",\n";

			currentPtr = currentPtr->nextPtr;
		}

		std::cout << "Data saved successfully!\n";
		std::cout << std::endl;

	}
	else
	{
		std::cerr << "Error opening file, returning to menu!";
		return;
	}
}
