#include "carHeader.h"
#include <string>

using namespace Car;

Car::carReserve::carReserve()
{
	headPtr = nullptr;
	tailPtr = nullptr;
}

Car::carReserve::~carReserve()
{

}

void Car::carReserve::prependList(carModel newCar)
{
	carLink* prependNode = new carLink(newCar);

	if (headPtr == nullptr)
	{
		headPtr = prependNode;
		tailPtr = prependNode;
	}
	else
	{
		prependNode->nextPtr = headPtr;
		headPtr = prependNode;
	}
}

void Car::carReserve::remove(std::string VIN)
{

}