#include "LogOutUI.h"
#include "LogOut.h"
#include "Member.h"
#include "File.h"

LogOutUI::LogOutUI()
{

}

void LogOutUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void LogOutUI::SelectLogOut(LogOut* logOut, File* file)
{
	// ���� �Է� �ޱ�
	std::string id = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id;
	file->readed = file->ifs.tellg();

	if (logOut->TryLogOut(id)) {
		file->ofs << "2.2. �α׾ƿ�" << '\n';
		file->ofs << "> " << id << " " << '\n' << '\n';
	}
	else {
		file->ofs << "2.2. �α׾ƿ�" << '\n';
		file->ofs << "�α׾ƿ� ����" << '\n' << '\n';
	}


}