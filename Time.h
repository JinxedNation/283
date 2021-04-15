#pragma once
#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time
{
public:
    Time();
    Time(int temp_Hour, int temp_Minute);
    ~Time();

        /******************************************************************************************************************************************************************************************************************************************************
         *@brief get_The_Hour
         *
         * Purpose : gets the current hour
         *
         *@return  : m_Current_Hour (int)
         ******************************************************************************************************************************************************************************************************************************************************/

    int  get_The_Hour() const;



        /******************************************************************************************************************************************************************************************************************************************************
         *@brief set_The_Hour
         *
         * Purpose : sets the current hour
         *
         * @param  : int temp_Hour
         * 
         *@return  : void
         ******************************************************************************************************************************************************************************************************************************************************/

    void set_The_Hour(int temp_Hour);



        /******************************************************************************************************************************************************************************************************************************************************
         *@brief get_The_Minute
         *
         * Purpose : gets the current minute
         *
         * @param  :
         *
         *@return  : m_Current_Minute (int)
         ******************************************************************************************************************************************************************************************************************************************************/

    int  get_The_Minute() const;



        /******************************************************************************************************************************************************************************************************************************************************
         *@brief set_The_Minute
         *
         * Purpose : sets the current minute
         *
         * @param  : temp_Minute (int)
         *
         *@return  : void
         ******************************************************************************************************************************************************************************************************************************************************/

    void set_The_Minute(int temp_Minute);


        /***************************************************************************************************************************************************************************************
        * @brief   : Time::operator Overload the assignment opperator with const time
        * @purpose : Sets the time to the current time if the previous time is not the current time
        * 
        * @param   : const Time&
        *
        * @return  : current object
        *********************************************************************************************************************************************************************************/

    const Time& operator = (const Time&);



private:

    int m_Current_Minute;
    int m_Current_Hour;

};


    /********************************************************************************************************************************************************************************************************************************************************
     * @brief std::ostream operator
     *
     * @Purpose : overloads ostream operator to write / read Time objects
     *
     * @param   : std::ostream& output_s, const Time& current_Time
     * 
     * @return  : output_s
     *********************************************************************************************************************************************************************************************************************************************************/


std::ostream& operator <<(std::ostream& output_s, const Time& current_Time);



    /********************************************************************************************************************************************************************************************************************************************************
     * @brief istream operator
     *
     * @Purpose :    overloads the istream operator to read / write Time objects
     *
     * @param   : std::istream& input, Time& current_Time
     *
     * @return  : input
     ********************************************************************************************************************************************************************************************************************************************************/

std::istream& operator >>(std::istream& input, Time& current_Time);



#endif // TIME_H