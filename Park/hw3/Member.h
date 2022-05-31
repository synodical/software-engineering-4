#pragma once
#include <iostream>

class Member
{
public:
	Member();

	void CheckMember();
	void CreateMember();
	void DeleteMember();
	void CheckLogInInfo();

	std::string GetID() { return id; }

private:
	std::string id;
	std::string password;
};

