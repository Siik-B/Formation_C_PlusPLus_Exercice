#pragma once

#include <iostream>

class Tree
{
public:
	Tree() = default;
	Tree(unsigned int height);
	Tree(std::string name);
	~Tree();

	void print(std::ostream& stream) const;
private:
	unsigned int _height = 0;
	std::string _name = "";
};

