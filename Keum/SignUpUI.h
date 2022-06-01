#pragma once
#include "Member.h"

class SignUp;
class File;

class SignUpUI
{
public:
	SignUpUI();

	void StartInterface();
	void SelectSignUp(SignUp* signUp, File* file);

private:
	SignUp* signUp;
};