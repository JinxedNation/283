#include "Registration.h"


Registration::Registration()
{
	count = 0;
}

/******************************************************************************

//      * Registration Constructor	 *

*******************************************************************************/


Registration::Registration(long temp_Student_Number, unsigned temp_Semester, Result temp_Result[], unsigned temp_Count)
{

	m_Student_Number            = temp_Student_Number;
	m_Current_Semester          = temp_Semester;
	//m_Unit_Results[MAX_RESULTS] = temp_Result[MAX_RESULTS];
	count                       = temp_Count;
}




unsigned Registration::GetCount() const { return count; }
void     Registration::setCount(unsigned temp_Count) { count = temp_Count; }





unsigned Registration::GetCredits() const
{
	unsigned sum = 0;


	for (unsigned i = 0; i < count; i++)
	{
		sum += m_Unit_Results[i].get_Unit().GetCredits();
	}

	return sum;
}


//void Registration::setCredits(unsigned temp_Sum) { sum = temp_Sum; }



long  Registration::get_Student_Number() const { return m_Student_Number; }
void  Registration::set_Student_Number(long temp_Student_Number) { m_Student_Number = temp_Student_Number; }



unsigned Registration::get_Semester() const { return m_Current_Semester; }
void     Registration::set_Semester(unsigned temp_Semester) { m_Current_Semester = temp_Semester; }



const Result& Registration::get_Results(unsigned result_Counter) const { return m_Unit_Results[result_Counter]; }
void          Registration::set_Results(Result temp_Result, unsigned result_Counter) { m_Unit_Results[result_Counter] = temp_Result; }



std::istream& operator >> (std::istream& input, Registration& R)
{
	long temporary_Student_Num;
	input >> temporary_Student_Num;
	R.set_Student_Number(temporary_Student_Num);
	input.ignore(1);


	unsigned temp_Semester;
	input >> temp_Semester;
	R.set_Semester(temp_Semester);



	Result temp_Result;
	for (unsigned result_Count = 0; result_Count < R.GetCount(); result_Count++)
	{
		input >> temp_Result;
		R.set_Results(temp_Result, result_Count);
	}

	return input;
}


std::ostream& operator <<(std::ostream& output_s, const Registration& R)
{
	output_s
		<< "Student ID    : " << R.get_Student_Number() << '\n'
		<< "Semester      : " << R.get_Semester() << '\n';


	for (unsigned result_Count = 0; result_Count < R.GetCount(); result_Count++)
	{
		output_s << R.get_Results(result_Count) << '\n';
	}

	return output_s;
}

//-------------------------------------------------------------------------------------
/* End of class */
//-------------------------------------------------------------------------------------