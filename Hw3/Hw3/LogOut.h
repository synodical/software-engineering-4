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

	bool TryLogOut(std::string id);
private:
	DataBase* dataBase;
	LogOutUI* logOutUI;
};

