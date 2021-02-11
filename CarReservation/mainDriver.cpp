#include "carHeader.h"
#include <iostream>
#include <string>

using namespace Car;

int main()
{
	LinkedList carList;

	carList.getNewCar(carList);

	carList.printList();

	return 0;
}