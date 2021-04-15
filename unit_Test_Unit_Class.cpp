#include "Unit.h"

Unit test_Unit;

void print_unitTest_Unit_Class()
{
	std::cout
		<< test_Unit.get_Unit_Name()
		<< test_Unit.get_Unit_Code()
		<< test_Unit.GetCredits() << '\n' << std::endl;
}



void main()
{
	std::cout << "Testing The Unit Class " << std::endl;
	test_Unit.Clear();
	print_unitTest_Unit_Class();



	std::cout << "Creating a unit with temporary data " << std::endl;
	test_Unit = Unit("Blizzard_Data_structures", "ICT666", 3);
	print_unitTest_Unit_Class();


	std::cout << "Modifying variable information with setters " << std::endl;
		test_Unit.set_Unit_Name("Blizzard_Internship");
		test_Unit.set_Unit_Code("BLIZRAD");
		test_Unit.setCredits(5);
	print_unitTest_Unit_Class();


	std::ifstream test_Infile("unitTest_Unit_Class_Input.txt");
	if (!test_Infile)
	{
		std::cout << "Error occured ";
	}
	test_Infile >> test_Unit;


	std::ofstream test_Output("unitTest_Unit_Class_Output.txt");
	test_Output << test_Unit;


	std::cout << "A test has been performed for a unit object reading from unitTest_Unit_Class_Input to unitTest_Unit_Class_Output" << std::endl;

	return;
}