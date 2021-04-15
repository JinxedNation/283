#include "Result.h"

Unit   test_A_Unit;
Date   test_A_Date;
Result test_A_Result;

void print_unitTest_of_Result_Class()
{
	std::cout
		<< "Unit Name :  " << test_A_Result.get_Unit()   << '\n'
		<< "Result    :  " << test_A_Result.get_Result() << '\n'
		<< "Date      :  " << test_A_Result.get_Date()   << '\n' << std::endl;
}


void main()
{
	std::cout << "producing a clean test of Result class " << std::endl;
	test_A_Result.Clear();
	print_unitTest_of_Result_Class();


	std::cout << "Creation of a result test utilizing required date and unit classes " << std::endl;
		
	test_A_Unit = Unit("Blizzard", "Entertainment", 6);
		test_A_Result = Result(test_A_Unit, 90, test_A_Date);
		test_A_Date = Date(1, "June", 2022);
	print_unitTest_of_Result_Class();



	std::cout << "adjusting our test date variable" << std::endl;
		test_A_Result.set_Unit(test_A_Unit);
		test_A_Result.set_Result(85);
		test_A_Result.set_Date(test_A_Date);
	print_unitTest_of_Result_Class();




	std::ifstream test_Infile("unitTest_Result_Class_Input.txt");
	if (!test_Infile)
	{
		std::cout << "Error occured ";
	}
	test_Infile >> test_A_Result;



	std::ofstream test_Output("unitTest_Result_Class_Output.txt");
	test_Output << test_A_Result;


	std::cout << "A test has been performed for the Result object reading from unitTest_Result_Class_Input to unitTest_Result_Class_Output" << std::endl;


	return;
}
