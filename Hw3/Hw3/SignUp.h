#pragma once
#include <iostream>

class DataBase;
class SignUpUI;

class SignUp
{
public:
	SignUp();
	SignUp(DataBase* dataBase);

	SignUpUI* GetSignUpUI() { return signUpUI; }

	bool AddNewMember(std::string name, std::string ssn, std::string id, std::string password);

private:
	DataBase* dataBase;
	SignUpUI* signUpUI;
};

