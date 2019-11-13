//main
#include <iostream>
#include<memory>
#include<vector>
#include "shapes.h"
#include "lines.h"
#include "circles.h"

int main() 
{
	//Shape s_abtract; can't create instance; pure virtual
	//function makes it an abstract class

	SShape* line = new LLine();//creates dynamic memory (heap)
	line->draw();
	delete line;

	std::vector < SShape *> shapes{ new LLine(), new CCircle() };
	//using a reference operator
	for (auto & shape : shapes)
	{
		shape->draw();
	}
	std::cout << std::endl;
	for (auto * shape : shapes)
	{
		shape->draw();
	}
	   	  	
	std::unique_ptr < SShape > line2 = std::make_unique< LLine >();
	line2->draw();

	std::vector <std::unique_ptr < SShape >> shapes2;
	shapes2.push_back(std::make_unique< LLine >());
	shapes2.push_back(std::make_unique< CCircle >());
	
	for (auto & shape : shapes2)
	{
		shape->draw();
	}

	return 0;
}