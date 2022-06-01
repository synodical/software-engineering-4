#pragma once
#include <iostream>

class Member
{
public:
	Member();
	Member(std::string name, std::string ssn, std::string id, std::string password);

	void CheckMember();
	void CreateMember();
	void DeleteMember();
	void CheckLogInInfo();

	std::string GetID() { return id; }

private:
	std::string name;
	std::string ssn;
	std::string id;
	std::string password;
};

