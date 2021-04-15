#include "Date.h"

Date::Date(){}

Date::Date(unsigned temp_Day, unsigned temp_Month, unsigned temp_Year)
{
    m_Day   = temp_Day;
    m_Month = temp_Month;
    m_Year  = temp_Year;
}


Date::Date(unsigned temp_Day, std::string temp_Month_Name, unsigned temp_Year)
{
    m_Day        = temp_Day;
    m_Month_Name = temp_Month_Name;
    m_Year       = temp_Year;
}


void Date::Clear()
{
    m_Day        = 0;
    m_Month      = 0;
    m_Month_Name = "";
    m_Year       = 0;
}



unsigned Date::get_Day() const { return m_Day; }
void     Date::set_Day(unsigned temp_Day) { m_Day = temp_Day; }



unsigned Date::get_Month() const { return m_Month; }
void     Date::set_Month(unsigned temp_Month) { m_Month = temp_Month; }



std::string Date::get_Month_Name() const { return m_Month_Name; }
void        Date::set_Month_Name(std::string temp_Month_Name) { m_Month_Name = temp_Month_Name; }



unsigned Date::get_Year() const { return m_Year; }
void     Date::set_Year(unsigned temp_Year) { m_Year = temp_Year; }



const Date& Date::operator = (const Date& temporary_Date)
{
    if (this != &temporary_Date)
    {
        m_Day        = temporary_Date.get_Day();
        m_Month      = temporary_Date.get_Month();
        m_Month_Name = temporary_Date.get_Month_Name();
        m_Year       = temporary_Date.get_Year();
    }
}



std::istream& operator >> (std::istream& input, Date& date_Marked)
{
    unsigned temp_Day;
    input >> temp_Day;
    date_Marked.set_Day(temp_Day);
    input.ignore(1);  //ignores the next char or int in the file allowing a space



    unsigned temp_Month;
    input >> temp_Month;
    date_Marked.set_Month(temp_Month);
    input.ignore(1); //ignores the next char or int in the file allowing a space


    unsigned temp_Year;
    input >> temp_Year;
    date_Marked.set_Year(temp_Year);


    return input;
}





std::ostream& operator << (std::ostream& output_s, const Date& date_Marked)
{
    output_s << date_Marked.get_Day()    << " / "
             << date_Marked.get_Month()  << " / "
             << date_Marked.get_Year()   << " / ";


    return output_s;
}

//-------------------------------------------------------------------------------------
/* End of class */
//-------------------------------------------------------------------------------------