#pragma once
#ifndef Registration_H
#define Registration_H


#include "Result.h"
#include "Unit.h"


#include <string>
#include <fstream>
#include <iostream>

using namespace std;
const unsigned  MAX_RESULTS = 6;


/*******************************************************************************************************
* @class Registration.h
*
* @brief Contains the following date information
*
* @purpose to read registration information from a file and write it to another
*
*
* @variables
*		m_Student_Number    long const
*		m_Current_Semester  unsigned const
*	    count               unsigned
*		Result              unit_Results


*		Registration contains Result, Unit information and date
* @author William Halling 32233703
* @date   March 2021
* @date   Semester 1
*
* @updated April
*******************************************************************************************************/

class Registration
{
public:

	Registration();
	Registration(long temp_Student_Number, unsigned temp_Semester, Result temp_Result[], unsigned temp_Count);



		/*********************************************************************************************************************************************************************************************************************************************************
		 *@brief Clear
		 *
		 * Purpose: Sets all the Registration Variable values to 0, 0, default object, 0, 0
		 *
		 *@return void
		 ******************************************************************************************************************************************************************************************************************************************************/

	void Clear();



		/**********************************************************************************************************************************************************************************************************************************************************
		* @brief GetCount
		*
		* @Purpose: This is used to get Result Count for Registration Object
		*
		* @return  (unsigned const )
		************************************************************************************************************************************************************************************************************************************************************/

	unsigned GetCount() const;




		/*************************************************************************************************************************************************************************************************************************************************************
		* @brief setCount
		*
		* @Purpose: This is used to set Result Count for Registration Object, read from input file
		*
		* @return  : void
		************************************************************************************************************************************************************************************************************************************************************/

	void setCount(unsigned temp_Count);



		/*************************************************************************************************************************************************************************************************************************************************************
		* @brief GetCredits
		*
		* @Purpose: This is used to get the total credit points pf registration obj
		*
		* @return   m_Credits (unsigned const)
		********************************************************************************************************************************************************************************************************************************************************/

	unsigned GetCredits() const;



		/********************************************************************************************************************************************************************************************************************************************************
		* @brief setCredits
		*
		* @Purpose: This is used to set the credits with unsigned temp_Total_Credits
		*
		* @return  : void
		*********************************************************************************************************************************************************************************************************************************************************/

	void setCredits(unsigned temp_Total_Credits);





		/************************************************************************************************************************************************************************************************************************************************************
		* @brief get_Student_Number
		*
		* @Purpose: This is used to get a student number as a long
		*
		* @return Unit m_Student_Number (long const)
		************************************************************************************************************************************************************************************************************************************************************/

	long  get_Student_Number() const;



		/*******************************************************************************************************************************************************************************************************************************************************
		* @brief set_Student_Number
		*
		* @Purpose : This is used to set a student number with a long temp_Student_Number
		*
		* @param   : long temp_Student_Number
		*
		* @return  : void
		********************************************************************************************************************************************************************************************************************************************************/

	void  set_Student_Number(long temp_Student_Number);



		/***********************************************************************************************************************************************************************************************************************************************************
		* @brief get_Semester
		*
		* @Purpose : This is used to get the current semester
		*
		* @param   :
		*
		* @return m_Current_Semester (unsigned const)
		************************************************************************************************************************************************************************************************************************************************************/

	unsigned get_Semester() const;



		/***********************************************************************************************************************************************************************************************************************************************************
		* @brief set_Semester
		*
		* @Purpose : This is used to set the m_Current_Semester variable with unsigned temp_Semester
		*
		* @param   : unsigned temp_Semester
		*
		* @return  : void
		*********************************************************************************************************************************************************************************************************************************************************/

	void set_Semester(unsigned temp_Semester);





		/*********************************************************************************************************************************************************************************************************************************************************
		* @brief get_Results
		*
		* @Purpose : This is used to set the m_Current_Semester variable with unsigned temp_Semester
		*
		* @param   : result_Counter   (unsigned)    for counting the number of results
		*
		* @return Result m_Get_Result (Result const)
		**********************************************************************************************************************************************************************************************************************************************************/

	const Result& get_Results(unsigned result_Counter) const;




		/************************************************************************************************************************************************************************************************************************************************************
		* @brief set_Results
		* 
		* @Purpose : This is used to set the m_Current_Semester variable with unsigned temp_Semester
		*
		* @param   : Result temp_Result, int result_Counter
		*
		* @return  : void
		************************************************************************************************************************************************************************************************************************************************************/

	void  set_Results(Result temp_Result, unsigned result_Counter);




	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	/*			 variables			                 */
	//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

private:
		///student number as a long as student numbers are eight integers long 
	long m_Student_Number;


		///unsigned current_Semester as semesters are only positive
	unsigned m_Current_Semester;

		/// unsigned m_Count for unit counter and unit count can only be positive
	unsigned count;

		///creates a unit_Results of type result object
	Result m_Unit_Results[MAX_RESULTS];
};


	/************************************************************************************************************************************************************************************************************************************************************
	 * @brief ostream operator
	 *
	 * @Purpose : overloads the ostream operator to write Registration object information to file
	 *
	 * @param   :
	 *
	 * @return  : output_s
	 ***********************************************************************************************************************************************************************************************************************************************************/

std::ostream& operator <<(std::ostream& output_s, const Registration& R);




	/*************************************************************************************************************************************************************************************************************************************************************
	 * @brief istream operator
	 *
	 * @Purpose :  overloads the istream operator to read Registration object information from file
	 *
	 * @parame  :
	 *
	 * @return  : input
	 ***********************************************************************************************************************************************************************************************************************************************************/

std::istream& operator >>(std::istream& input, Registration& R);

#endif 

