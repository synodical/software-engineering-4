#include "File.h"
#include "DataBase.h"
#include "SignUp.h"
#include "SignUpUI.h"
#include "Withdrawal.h"
#include "WithdrawalUI.h"
#include "LogIn.h"
#include "LogInUI.h"
#include "LogOut.h"
#include "LogOutUI.h"
/*
#include "CreateProduct.h"
#include "CreateProductUI.h"
#include "ListSellingProduct.h"
#include "ListSellingProductUI.h"
#include "ListSoldProduct.h"
#include "ListSoldProductUI.h"
#include "ShowSalesSatistics.h"
#include "ShowSalesSatisticsUI.h"

#include "Seller.h" // For Test
#include "Buyer.h"	// For Test
*/
void doTask();
void program_exit(File* file);

int main()
{
	doTask();
	return 0;
}

void doTask()
{
	File* file = new File();
	DataBase* dataBase = new DataBase();

	dataBase->SetLogInIndex(0);// For Test


	int menu_level_1 = 0, menu_level_2 = 0; int is_program_exit = 0;
	while (!is_program_exit)
	{
		file->ifs >> menu_level_1 >> menu_level_2;
		file->readed = file->ifs.tellg();

		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				SignUp* signUp = new SignUp(dataBase);
				signUp->GetSignUpUI()->SelectSignUp(signUp, file);
				break;
			}
			case 2:
			{
				Withdrawal* withdrawal = new Withdrawal(dataBase);
				withdrawal->GetWithdrawalUI()->SelectWithdrawal(withdrawal, file);
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				LogIn* logIn = new LogIn(dataBase);
				logIn->GetLogInUI()->SelectLogIn(logIn, file);
				break;
			}
			case 2:
			{
				LogOut* logOut = new LogOut(dataBase);
				logOut->GetLogOutUI()->SelectLogOut(logOut, file);
				break;
			}
			}
			break;
		}
		case 3:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				program_exit(file);
				is_program_exit = 1;
				exit(1);
				break;
			}
			}
			break;
		}
		}
	}
	return;
}

void program_exit(File* file)
{
	file->ofs << "6.1. ����" << '\n';
	file->ifs.close();
	file->ofs.close();
}