#include "Time.h"


///default constructor for time
Time::Time() {}


/// constructor for time
Time::Time(int temp_Hour, int temp_Minute)
{

    m_Current_Minute = temp_Minute;
    m_Current_Hour   = temp_Hour;
}



Time::~Time()
{
    //destructor to clear time
}


 int Time::get_The_Minute() const { return m_Current_Minute; }
void Time::set_The_Minute(int temp_Minute) { m_Current_Minute = temp_Minute; }



 int Time::get_The_Hour() const { return m_Current_Hour; }
void Time::set_The_Hour(int temp_Hour) { m_Current_Hour = temp_Hour; }



const Time& Time::operator = (const Time& previous_Time)
{
    if (this != &previous_Time)
    {
        m_Current_Hour   = previous_Time.get_The_Hour();


        m_Current_Minute = previous_Time.get_The_Minute();
    }

    return *this;
}




std::istream& operator >>(std::istream& input, Time& current_Time)
{

    int temp_Hour;
    input >> temp_Hour;
    current_Time.set_The_Minute(temp_Hour);


    int temp_Minute;
    input >> temp_Minute;
    current_Time.set_The_Minute(temp_Minute);
}




ostream& operator <<(ostream& output_s, const Time& current_Time)
{
    output_s << current_Time.get_The_Hour() << " : ";
    output_s << current_Time.get_The_Minute();


    return output_s;
}