#include "LogOutUI.h"
#include "LogOut.h"
#include "Member.h"
#include "File.h"

LogOutUI::LogOutUI()
{
}

void LogOutUI::StartInterface()
{
    // GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void LogOutUI::SelectLogOut(LogOut* logOut, File* file)
{
    std::string blank = "";
    std::string result = logOut->TryLogOut();
    if (result == blank) {
        file->ofs << "2.2. 로그아웃" << '\n';
        file->ofs << '\n';
    }
    else {
        file->ofs << "2.2. 로그아웃" << '\n';
        file->ofs << "> " << result << " " << "\n" << "\n";
    }
}