#include "SignUpUI.h"
#include "SignUp.h"
#include "Member.h"
#include "File.h"

SignUpUI::SignUpUI()
{

}

void SignUpUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void SignUpUI::SelectSignUp(SignUp* signUp, File* file)
{
	// ���� �Է� �ޱ�
	std::string name = "";
	std::string ssn = "";
	std::string id = "";
	std::string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> name >> ssn >> id >> password;
	file->readed = file->ifs.tellg();

	if (signUp->AddNewMember(name, ssn, id, password)) {
		file->ofs << "1.1. ȸ������" << '\n';
		file->ofs << "> " << name << " " << ssn << " " << id << " " << password << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.1. ȸ������" << '\n';
		file->ofs << "> ȸ������ ����" << '\n' << '\n';
	}


}