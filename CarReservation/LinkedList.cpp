#include "carHeader.h"
#include <string>
#include <iostream>

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
