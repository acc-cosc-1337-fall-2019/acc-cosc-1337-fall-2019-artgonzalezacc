#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/02_decisions/decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
	
}

TEST_CASE("Test get grade points") 
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
	REQUIRE(get_grade_points("G") == -1);
}

TEST_CASE("Test calculate gpa") 
{
	REQUIRE(calculate_gpa(12, 45) == 3.75);
	REQUIRE(calculate_gpa(120, 390) == 3.25);
	REQUIRE(calculate_gpa(90, 180) == 2);
	REQUIRE(calculate_gpa(12, -1) == -1);
}

TEST_CASE("Test get letter grade using if") 
{
	REQUIRE(get_letter_grade_using_if(101) == "Invalid");
	REQUIRE(get_letter_grade_using_if(90) == "A");
	REQUIRE(get_letter_grade_using_if(95) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(80) == "B");
	REQUIRE(get_letter_grade_using_if(75) == "C");
	REQUIRE(get_letter_grade_using_if(70) == "C");
	REQUIRE(get_letter_grade_using_if(65) == "D");
	REQUIRE(get_letter_grade_using_if(60) == "D");
	REQUIRE(get_letter_grade_using_if(59) == "F");
	REQUIRE(get_letter_grade_using_if(0) == "F");
	REQUIRE(get_letter_grade_using_if(-1) == "Invalid");
}

TEST_CASE("Test get letter grade using switch")
{
	REQUIRE(get_letter_grade_using_switch(101) == "Invalid");
	REQUIRE(get_letter_grade_using_switch(100) == "A");
	REQUIRE(get_letter_grade_using_switch(90) == "A");
	REQUIRE(get_letter_grade_using_switch(95) == "A");
	REQUIRE(get_letter_grade_using_switch(85) == "B");
	REQUIRE(get_letter_grade_using_switch(80) == "B");
	REQUIRE(get_letter_grade_using_switch(75) == "C");
	REQUIRE(get_letter_grade_using_switch(70) == "C");
	REQUIRE(get_letter_grade_using_switch(65) == "D");
	REQUIRE(get_letter_grade_using_switch(60) == "D");
	REQUIRE(get_letter_grade_using_switch(59) == "F");
	REQUIRE(get_letter_grade_using_switch(0) == "F");
	REQUIRE(get_letter_grade_using_switch(-1) == "Invalid");
}