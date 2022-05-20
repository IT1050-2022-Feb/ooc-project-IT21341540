#pragma once

class Registered_User
{
protected:
	int reguser_id;
	char reguser_username[20];
	char reguser_Password[10];
public:
	Registered_User();
	Registered_User(int Reg_id, char Reg_username[20], char Reg_Password[10]);
	void Adduserdetails(int Reg_id, char Reg_username[20], char Reg_Password[10]);
	void Deleteuserdetails();
	void Updateuserdetails(int Reg_id, char Reg_username[20], char Reg_Password[10]);
	void displayDetails();
	~Registered_User(); //This is Destructor

};

