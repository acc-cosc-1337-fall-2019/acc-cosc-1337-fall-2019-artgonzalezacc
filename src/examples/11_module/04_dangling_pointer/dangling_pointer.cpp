#include "dangling_pointer.h"
#include<iostream>

//

void dangling_pointer()
{
	int * ptr_num = new int(5);
	int * ptr = ptr_num;
	std::cout << *ptr;
	delete ptr_num;
	std::cout << *ptr;
	ptr_num = nullptr;
	
	//ptr points to invalid
	//address	
}
