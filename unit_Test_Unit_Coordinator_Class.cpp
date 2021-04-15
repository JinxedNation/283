#include "unit_Coordinator.h"

unit_Coordinator temp_Unit_Coordinator;

void print_Unit_Test_Unit_Coordinator_Class()
{
    std::cout
        << "Name : "         << temp_Unit_Coordinator.get_First_Name()
        <<  "  "             << temp_Unit_Coordinator.get_Last_Name()             << '\n'
        << "Room Number  : " << temp_Unit_Coordinator.get_Room_Number()           << '\n'
        << "Phone Number : " << temp_Unit_Coordinator.get_Contact_Email_Address() << '\n'
        << "Email Address: " << temp_Unit_Coordinator.get_Contact_Number()        << '\n';

}


void main()
{
    std::cout << "running a unit test of unit coordinator class " << std::endl;
    temp_Unit_Coordinator.clear();
    print_Unit_Test_Unit_Coordinator_Class();




    std::cout << "Creating a unit coordinator using the constructor " << std::endl;
        temp_Unit_Coordinator = unit_Coordinator("Morgan", "Freeman", "SC 1.018", "m.freeman@murdoch.edu.au", 93606091);
    print_Unit_Test_Unit_Coordinator_Class();



    std::cout << "Modifying variable information with setters " << std::endl;
    
        temp_Unit_Coordinator.set_First_Name("Shri");
        temp_Unit_Coordinator.set_Last_Name("Rai");
        temp_Unit_Coordinator.set_Room_Number("SC 1.017");
        temp_Unit_Coordinator.set_Contact_Email_Address("s.rai@murdoch.edu.au");
        temp_Unit_Coordinator.set_Contact_Number(93606090);

    print_Unit_Test_Unit_Coordinator_Class();



    std::ifstream test_Infile("unit_Test_Unit_Coordinator_Input.txt");
    if (!test_Infile)
    {
        std::cout << "Error occured " << std::endl;
    }
    test_Infile >> temp_Unit_Coordinator;



    std::ofstream test_Output("unit_Test_Unit_Coordinator_Output.txt");
    test_Output << temp_Unit_Coordinator;
    std::cout << "A test has been performed for a unit coordinator class reading from unit_Test_Unit_Coordinator_Input to unit_Test_Unit_Coordinator_Output" << std::endl;


    return;
}