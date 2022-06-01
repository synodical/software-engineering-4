#include "LogInUI.h"
#include "LogIn.h"
#include "Member.h"
#include "File.h"

LogInUI::LogInUI()
{

}

void LogInUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LogInUI::SelectLogIn(LogIn* logIn, File* file)
{
	// ���� �Է� �ޱ�
	std::string id = "";
	std::string password = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id >> password;
	file->readed = file->ifs.tellg();

	logIn->TryLogIn(id, password);
	file->ofs << "2.1. �α���" << '\n';
	file->ofs << "> " << id << " " << password << " " << '\n' << '\n';
}