#pragma once
#ifndef WEATHER_DATA_READER_H
#define WEATHER_DATA_READER_H

#include "Date.h"
#include "Time.h"
#include "Vector.h"

#include <stdlib.h>
#include <string>

#include <iostream>
#include <fstream>
#include <sstream>

/********************************************************************************************************************************************************************************************************************************************************
* @class weather_Data_Reader.h
*
* @brief Contains the required information to record weather 
*		 A date from the date class
*		 A time from the time class
*		 And speed as a float
*
* @purpose 
*
*
* @variables
*		the_Date (Date object)
*	    the_Time (Time object)
*		speed    (float)
*
*
* @author William Halling 32233703
* @date    Semester 1 March 2021
*
* @updated April 2021
********************************************************************************************************************************************************************************************************************************************************/

class weather_Data_Reader
{
	weather_Data_Reader();
	~weather_Data_Reader();
};
#endif // !WEATHER_DATA_READER_H

