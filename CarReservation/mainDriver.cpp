#include "carHeader.h"
#include <iostream>
#include <string>

using namespace Car;

int main()
{
	LinkedList carList;

	LinkedList::carModel newCar;

	newCar = carList.getNewCar();

	carList.prependList(newCar);

	carList.printList();

	return 0;
}