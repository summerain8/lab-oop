#include <iostream>
#include <cmath>
#include "rectangle.h"

Rectangle::Rectangle() : Rectangle(0, 0)
{
}

Rectangle::Rectangle(int32_t a, int32_t b) : side_a(a), side_b(b)
{
	
}

Rectangle::Rectangle(std::istream &is)
{
	std::cout << "Enter side_a a: ";
	is >> side_a;
	std::cout << "Enter side b: ";
	is >> side_b;
	
	if (side_a < 0|| side_b < 0) {
		std::cerr << "Error: sides should be > 0." << std::endl;
	}
	
}

Rectangle::Rectangle(const Rectangle& orig)
{
	side_a = orig.side_a;
	side_b = orig.side_b;
}

double Rectangle::Square()
{
	return (double)(side_a * side_b);
}

void Rectangle::Print()
{
	std::cout << "Side a = " << side_a << ", b = " << side_b << ", type: rectangle" << std::endl;
}

Rectangle::~Rectangle()
{
}

std::ostream& operator <<(std::ostream &os, const Rectangle &obj)
{
	os << "(" << obj.side_a << " " << obj.side_b << ")," << "type: rectangle" << std::endl;
	return os;
}

std::istream& operator >>(std::istream &is, Rectangle &obj)
{
	std::cout << "Enter side_a: ";
	is >> obj.side_a;
	std::cout << "Enter side b: ";
	is >> obj.side_b;
	return is;
}

bool Rectangle::operator ==(const Rectangle &obj) const
{
	return side_b == obj.side_b && side_a == obj.side_a;
}


Rectangle& Rectangle::operator =(const Rectangle &obj)
{
	if (&obj == this) {
		return *this;
	}

	side_b = obj.side_b;
	side_a = obj.side_a;

	return *this;
}
