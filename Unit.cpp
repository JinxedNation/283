#include "Unit.h"


Unit::Unit()
{
	m_Unit_Name = "NULL";
	m_Unit_Code = "NULL";
	unit_Credits = 0;
}



Unit::Unit(std::string temp_Name, std::string temp_Code, unsigned temp_Credits)
{
	m_Unit_Name = temp_Name;
	m_Unit_Code = temp_Code;
	unit_Credits = temp_Credits;
}


void Unit::Clear()
{
	m_Unit_Name = "";
	m_Unit_Code = "";
	unit_Credits = 0;
}




std::string Unit::get_Unit_Name() const { return m_Unit_Name; }
void        Unit::set_Unit_Name(std::string temp_Name) { m_Unit_Name = temp_Name; }



std::string Unit::get_Unit_Code() const { return m_Unit_Code; }
void        Unit::set_Unit_Code(std::string temp_Unit_Code) { m_Unit_Code = temp_Unit_Code; }



unsigned Unit::GetCredits() const { return unit_Credits; }
void     Unit::setCredits(unsigned temp_Credits) { unit_Credits = temp_Credits; }



std::istream& operator >>(std::istream& input, Unit unit_Information)
{
	unit_Information.Clear();

	std::string temp_Unit_Name;
	std::getline(input, temp_Unit_Name, ',');
	unit_Information.set_Unit_Name(temp_Unit_Name);
	input.ignore(1);



	std::string temp_Unit_Code;
	std::getline(input, temp_Unit_Code, ',');
	unit_Information.set_Unit_Code(temp_Unit_Code);
	input.ignore(1);



	int temp_Credits;
	input >> temp_Credits;
	unit_Information.setCredits(temp_Credits);
	input.ignore(1);


	return input;
}



std::ostream& operator <<(std::ostream& output_s, const Unit& unit_Information)
{
	output_s
		<< "Unit Name    : " << unit_Information.get_Unit_Name() << '\n'
		<< "Unit Code    : " << unit_Information.get_Unit_Code() << '\n'
		<< "Unit Credits : " << unit_Information.GetCredits() << '\n';


	return output_s;
}

//-------------------------------------------------------------------------------------
/* End of class */
//-------------------------------------------------------------------------------------