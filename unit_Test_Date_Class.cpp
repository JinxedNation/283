#include "Date.h"


Date test_Date;

void print_unitTest_of_Date_Class()
{
	std::cout
		<< test_Date.get_Day()   << " \  "
		<< test_Date.get_Month() << " \  "
		<< test_Date.get_Year()  << '  ' << std::endl;
}


void main()
{
	std::cout << "Testing The Date Class " << std::endl;
	test_Date.Clear();
	print_unitTest_of_Date_Class();



	std::cout << "Creating a test date 7 July 2021 " << std::endl;
		test_Date = Date(7, "July", 2021);
	print_unitTest_of_Date_Class();



	std::cout << "adjusting our test date variable" << std::endl;
		test_Date.set_Day(8);
		test_Date.set_Month_Name("April");
		test_Date.set_Year(2021);
	print_unitTest_of_Date_Class();





	std::ifstream test_Infile("unitTest_Date_Class_Input.txt");
	if (!test_Infile)
	{
		std::cout << "Error occured ";
	}
	test_Infile >> test_Date;



	std::ofstream test_Output("unitTest_Date_Class_Output.txt");
	test_Output << test_Date;


	std::cout << "A test has been performed for a Date object reading from unitTest_Date_Class_Input to unitTest_Date_Class_Output" << std::endl;

	return;
}
