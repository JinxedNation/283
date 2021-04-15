#include "Time.h"
Time test_Time;


void print_Unit_Test_Time_Class(Time current_Time)
{
    std::cout
        << "Time " << test_Time.get_The_Hour() << " : "
        << test_Time.get_The_Minute() << std::endl;
}


void main()
{
    std::cout << "running a unit test of time class " << std::endl;
    test_Time = Time(6, 30);
    std::cout << "The current time is set to 6.30 " << std::endl;
    print_Unit_Test_Time_Class(test_Time);

    test_Time.set_The_Hour(4);
    test_Time.set_The_Minute(30);
    std::cout << "Time should now be 4.30" << std::endl;
    print_Unit_Test_Time_Class(test_Time);

}
