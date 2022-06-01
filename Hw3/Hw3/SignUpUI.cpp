#include "SignUpUI.h"
#include "SignUp.h"
#include "Member.h"
#include "File.h"

SignUpUI::SignUpUI()
{

}

void SignUpUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void SignUpUI::SelectSignUp(SignUp* signUp, File* file)
{
	// 파일 입력 받기
	std::string name = "";
	std::string ssn = "";
	std::string id = "";
	std::string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> name >> ssn >> id >> password;
	file->readed = file->ifs.tellg();

	if (signUp->AddNewMember(name, ssn, id, password)) {
		file->ofs << "1.1. 회원가입" << '\n';
		file->ofs << "> " << name << " " << ssn << " " << id << " " << password << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.1. 회원가입" << '\n';
		file->ofs << "> 회원가입 실패" << '\n' << '\n';
	}


}