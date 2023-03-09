#include "tree.h"

#include <string>

Tree::Tree(unsigned int height) 
	: _height(height), _name("Redwood")
{
}

Tree::Tree(std::string name)
	: _name(name)
{
	std::cout << __func__ << " " + _name << std::endl;
}

Tree::~Tree()
{
	std::cout << __func__ << " " + _name << std::endl;
}

void Tree::print(std::ostream& stream) const
{
	stream << std::string("Height : ") + std::to_string(_height) << std::endl
		<< std::string("Name : ") + _name << std::endl;
}
