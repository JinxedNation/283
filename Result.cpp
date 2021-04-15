#include "Result.h"


Result::Result() {}


Result::Result(Unit temp_Unit, float temp_Mark, Date temp_Date)
{
	m_One_Unit    = temp_Unit;
	m_Mark        = temp_Mark;
	m_Marked_Date = temp_Date;
}



void Result::Clear() 
{
	m_One_Unit.Clear();
	m_Mark    = 0;
	m_Marked_Date.Clear();
}


const Unit& Result::get_Unit() const { return m_One_Unit; }
void        Result::set_Unit(Unit temp_Unit) { m_One_Unit = temp_Unit; }


float       Result::get_Result() const { return m_Mark; }
void        Result::set_Result(float temp_Mark) { m_Mark = temp_Mark; }


const Date& Result::get_Date() const { return m_Marked_Date; }
void        Result::set_Date(Date temp_Date) { m_Marked_Date = temp_Date; }



std::istream& operator >>(std::istream& input, Result& result_Achieved)
{
	Unit temp_Unit;
	input >> temp_Unit;
	result_Achieved.set_Unit(temp_Unit);
	input.ignore(1);


	float temp_Mark;
	input >> temp_Mark;
	result_Achieved.set_Result(temp_Mark);



	Date temp_Date;
	input >> temp_Date;
	result_Achieved.set_Date(temp_Date);


	return input;
}





std::ostream& operator <<(std::ostream& output_s, const Result& result_Achieved)
{
	output_s << result_Achieved.get_Unit() << '\n';

	output_s << "Achieved Result for the unit is : " << result_Achieved.get_Result() << '\n';

	output_s << result_Achieved.get_Date() << '\n';


	return output_s;
}

//-------------------------------------------------------------------------------------
/* End of class */
//-------------------------------------------------------------------------------------