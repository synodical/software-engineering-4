#pragma once
#include <iostream>

class DataBase;
class LogOutUI;

class LogOut
{
public:
	LogOut();
	LogOut(DataBase* dataBase);

	LogOutUI* GetLogOutUI() { return logOutUI; }

	std::string TryLogOut();
private:
	DataBase* dataBase;
	LogOutUI* logOutUI;
};