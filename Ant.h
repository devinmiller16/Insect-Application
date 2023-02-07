#pragma once
#include"Insect.h"
class Ant : public Insect { //Uses the base class insect to set the size and order. Prints out the eat function.
public:
	//Default constructor
	Ant(std::string order, double size) {
		std::cout << "Invoking the Ant constructor." << std::endl;
		setOrder(order); //Sets the order.
		setSize(size); //Sets the size.
	}

	void eat() { //Function that outputs the order, size, and type of Insect.
		std::cout << "My order is " << getOrder() << ", and I am " << getSize() << " millimeters long. ";
		std::cout << "As an ant, I eat everything." << std::endl;
	}

	//Destructor
	~Ant() {
		std::cout << "Invoking the Ant destructor." << std::endl;
	}
};