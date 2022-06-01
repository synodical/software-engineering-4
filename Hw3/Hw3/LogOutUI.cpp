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
    std::string blank = "";
    std::string result = logOut->TryLogOut();
    if (result == blank) {
        file->ofs << "2.2. �α׾ƿ�" << '\n';
        file->ofs << '\n';
    }
    else {
        file->ofs << "2.2. �α׾ƿ�" << '\n';
        file->ofs << "> " << result << " " << "\n" << "\n";
    }
}