#pragma once
#include<iostream>
#include<string>

class Insect { //Stores the insects size and order. Includes setters and getters and a virtual function.
public:
	//Default constructor
	Insect() {
		std::cout << "Invoking the default Insect constructor." << std::endl;
		size = 0;
	}

	//Constructor with parameters
	Insect(std::string o, double s) {
		std::cout << "Invoking the 2-argument Insect constructor." << std::endl;
		order = o;
		size = s;
	}

	//Virtual function
	virtual void eat() = 0;

	//Setters and getters for order.
	void setOrder(std::string o) {
		order = o;
	}
	std::string getOrder() {
		return order;
	}

	//Setters and getters for size.
	void setSize(double s) {
		size = s;
	}
	double getSize() {
		return size;
	}

	//Destructor
	~Insect() {
		std::cout << "Invoking the default Insect destructor." << std::endl;
	}

private:
	std::string order;
	double size;
};