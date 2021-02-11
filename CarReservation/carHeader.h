#pragma once
#include <string>

namespace Car {

	class carReserve {

	public:
		//struct to hold the car model information
		struct carModel
		{
			std::string model;
			std::string color;
			std::string manuf;
			std::string VIN;
			int year;
		};
		
	};

	class LinkedList : public carReserve
	{

	private:
		//struct to build the linked list
		struct carLink
		{
			carReserve::carModel newCar;
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


		carLink* headPtr;
		carLink* tailPtr;
	public:
		//default constructor for pointers
		LinkedList()
		{
			headPtr = nullptr;
			tailPtr = nullptr;
		}

		//destructor
		~LinkedList()
		{

		}
		void prependList(carModel newCar);
		void removeEntry();
		void getNewCar(LinkedList linkedList);
		void printList();
		void toCSV();
	};
}
