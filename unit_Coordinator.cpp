#include "unit_Coordinator.h"

unit_Coordinator::unit_Coordinator(){}

unit_Coordinator::unit_Coordinator(std::string temp_First_Name, std::string temp_Last_Name, std::string temp_Room_Number, std::string temp_Contact_Email, std::string temp_Contact_Number )
{
	
	m_First_Name            = temp_First_Name;
	m_Last_Name             = temp_Last_Name;
	m_Room_Number           = temp_Room_Number;
	m_Contact_Email_Address = temp_Contact_Email;
	m_Phone_Number          = temp_Contact_Number;
}



std::string unit_Coordinator::get_First_Name() const { return m_First_Name; }
void        unit_Coordinator::set_First_Name(std::string temp_First_Name) { m_First_Name = temp_First_Name; }


std::string unit_Coordinator::get_Last_Name() const { return m_Last_Name; }
void        unit_Coordinator::set_Last_Name(std::string temp_Last_Name) { m_Last_Name = temp_Last_Name; }



std::string unit_Coordinator::get_Room_Number() const { return m_Room_Number; }
void        unit_Coordinator::set_Room_Number(std::string temp_Room_Number) { m_Room_Number = temp_Room_Number; }



std::string unit_Coordinator::get_Contact_Email_Address() const { return m_Contact_Email_Address; }
void        unit_Coordinator::set_Contact_Email_Address(std::string temp_Contact_Email) { m_Contact_Email_Address = temp_Contact_Email; }



std::string unit_Coordinator::get_Contact_Number() const { return m_Phone_Number; }
void        unit_Coordinator::set_Contact_Number(std::string temp_Contact_Number) { m_Phone_Number = temp_Contact_Number; }



std::istream& operator >> (std::istream& input, unit_Coordinator& uc_Details)
{
	std::string temp_Temp_First_Name;
	std::getline(input, temp_Temp_First_Name, ' ');
	uc_Details.set_First_Name(temp_Temp_First_Name);



	std::string temp_Last_Name;
	std::getline(input, temp_Last_Name, ' ');
	uc_Details.set_Last_Name(temp_Last_Name);



	std::string temp_Room_Number;
	std::getline(input, temp_Room_Number, ' ');
	uc_Details.set_Room_Number(temp_Room_Number);



	std::string temp_Contact_Email;
	std::getline(input, temp_Contact_Email, ' ');
	uc_Details.set_Contact_Email_Address(temp_Contact_Email);



	std::string temp_Contact_Number;
	input >> temp_Contact_Number;
	uc_Details.set_Contact_Number(temp_Contact_Number);
}




std::ostream& operator << (std::ostream& output_s, const unit_Coordinator& uc_Details)
{
	output_s
		<< "Unit Coordinator Name  : " << uc_Details.get_First_Name() << " " << uc_Details.get_Last_Name() << '\n'
		<< "Room  Number           : " << uc_Details.get_Room_Number() << '\n'
		<< "Phone Number		   : " << uc_Details.get_Contact_Number() << '\n'
		<< "Email Address		   : " << uc_Details.get_Contact_Email_Address() << '\n';
}