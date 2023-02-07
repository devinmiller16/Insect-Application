#pragma once
#include"Insect.h"

class Butterfly : public Insect { //Uses the base class insect to set the size and order. Prints out the eat function.
public:
	//Default constructor
	Butterfly(std::string order, double size) {
		std::cout << "Invoking the Butterfly constructor." << std::endl;
		setOrder(order); //Sets the order.
		setSize(size); //Sets the size.
	}

	void eat() { //Function that outputs the order, size, and type of Insect.
		std::cout << "My order is " << getOrder() << ", and I am " << getSize() << " millimeters long. ";
		std::cout << "As a butterfly, I eat nectar." << std::endl;
	}

	//Destructor
	~Butterfly() {
		std::cout << "Invoking the Butterfly destructor." << std::endl;
	}
};