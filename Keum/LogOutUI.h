#pragma once
#include "Member.h"

class LogOut;
class File;

class LogOutUI
{
public:
	LogOutUI();

	void StartInterface();
	void SelectLogOut(LogOut* logOut, File* file);
private:
	LogOut* logOut;
};


