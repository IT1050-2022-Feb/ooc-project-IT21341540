#include "Registered_User.h"
#include<cstring>

Registered_User::Registered_User()
{
	reguser_id = 0;
	strcpy(reguser_username, "");
	strcpy(reguser_Password, "");

}
Registered_User::Registered_User(int Reg_id, char Reg_username[20], char Reg_Password[10])
{
	reguser_id = Reg_id;
	strcpy(reguser_username, "Reg_username");
	strcpy(reguser_Password, "Reg_Password");

}

void Registered_User::Adduserdetails(int Reg_id, char Reg_username[20], char Reg_Password[10])
{

};
void Registered_User::Deleteuserdetails()
{

};
void Registered_User::Updateuserdetails(int Reg_id, char Reg_username[20], char Reg_Password[10])
{

};
void Registered_User::displayDetails()
{

};
Registered_User::~Registered_User()
{
	//This is Destructor 
}


