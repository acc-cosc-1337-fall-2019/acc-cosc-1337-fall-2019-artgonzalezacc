#include<string>
#include<iostream>
#include "for_ranged.h"

int main() 
{
	std::string s1 = "hello";
	std::string s2 = "hello2";
	loop_string_w_auto(s1, s2);

	std::cout << s1 << "\n";
	std::cout << s2 << "\n";

	return 0;
}