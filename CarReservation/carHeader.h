#pragma once
#include <string>

namespace Car {

	class carReserve {

	private:
		//struct to hold the car model information
		struct carModel 
		{
			std::string model;
			std::string color;
			std::string manuf;
			std::string VIN;
			int year;
		};

		//struct to build the linked list
		struct carLink
		{
			carModel newCar;
			carLink* nextPtr; //pointer to next car

			//default constructor
			carLink()
			{
				nextPtr = nullptr; //next pointer defaulted to null
			}

			carLink(carReserve::carModel newCar) : carLink() //default constructor comes first
			{
				this->newCar = newCar; //sets local car to passed in car
			}
		};

		carReserve::carLink* headPtr;
		carReserve::carLink* tailPtr;

	public:
		carReserve();
		virtual ~carReserve();
		void prependList(carReserve::carModel);
		void remove(std::string VIN);
		void displayMenu();
		
	};
}
