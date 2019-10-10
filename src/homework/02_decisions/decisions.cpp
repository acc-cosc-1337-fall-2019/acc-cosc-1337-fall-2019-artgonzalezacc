#include "decisions.h"
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_points < 1) 
	{
		return -1;
	}

	return credit_points / credit_hours;
}

/*
Write code that accepts a number int and returns a string representing letter grade
Table conversion
90 100 A
80  89 B
70  79 C
60  69 D
00  59 F

*/
std::string get_letter_grade_using_if(int grade) 
{
	if (grade > 89 && grade <= 100) 
	{
		return "A";
	}
	else if (grade > 79 && grade < 90)
	{
		return "B";
	}
	else if (grade > 69 && grade < 80)
	{
		return "C";
	}
	else if (grade > 59 && grade < 70)
	{
		return "D";
	}
	else if (grade >= 0 && grade < 60)
	{
		return "F";
	}
	else 
	{
		return "Invalid";
	}
}

/*
Write code that accepts a number int and returns a string representing letter grade
Table conversion
90 100 A
80  89 B
70  79 C
60  69 D
00  59 F

*/
std::string get_letter_grade_using_switch(int grade) 
{
	switch (grade / 10) 
	{
	case 10:
		if (grade > 100) 
		{
			return "Invalid";
		}
	case  9:
		return "A";
	case  8:
		return "B";
	case  7:
		return "C";
	case  6:
		return "D";
	case  5:
	case  4:
	case  3:
	case  2:
	case  1:
	case  0:
		if (grade < 0) 
		{
			return "Invalid";
		}
		return "F";
	default:
		return "Invalid";
	}
}