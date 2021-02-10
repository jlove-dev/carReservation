#include "carHeader.h"
#include <iostream>
#include <string>

using namespace Car;

int main()
{
	LinkedList carList;

	carList.welcomeMessage();

	carList.menuSelection(carList);

	return 0;
}