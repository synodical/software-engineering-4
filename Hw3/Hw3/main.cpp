#include "File.h"
#include "DataBase.h"
#include "Product.h"

#include "SignUp.h"
#include "SignUpUI.h"
#include "Withdrawal.h"
#include "WithdrawalUI.h"
#include "LogIn.h"
#include "LogInUI.h"
#include "LogOut.h"
#include "LogOutUI.h"

#include "CreateProduct.h"
#include "CreateProductUI.h"
#include "ListSellingProduct.h"
#include "ListSellingProductUI.h"
#include "ListSoldProduct.h"
#include "ListSoldProductUI.h"
#include "ShowSalesSatistics.h"
#include "ShowSalesSatisticsUI.h"

#include "SearchProductInfo.hpp"
#include "SearchProductInfoUI.hpp"
#include "BuyProduct.hpp"
#include "BuyProductUI.hpp"
#include "CheckPurchaseList.hpp" 
#include "CheckPurchaseListUI.hpp"
#include "EvaluateSatisfaction.hpp" 
#include "EvaluateSatisfactionUI.hpp"

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
	Product* curProduct = nullptr;

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
				CreateProduct* createProduct = new CreateProduct(dataBase);
				createProduct->GetCreatProductUI()->GetProductForm(createProduct, file);
				break;
			}
			case 2:
			{
				ListSellingProduct* listSellingProduct = new ListSellingProduct(dataBase);
				listSellingProduct->GetListSellingProductUI()->SelectShowList(listSellingProduct, file);
				break;
			}
			case 3:
			{
				ListSoldProduct* listSoldProduct = new ListSoldProduct(dataBase);
				listSoldProduct->GetListSoldProductUI()->SelectShowList(listSoldProduct, file);
				break;
			}
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2) {
			case 1: // 4 1, 상품 검색
			{
				SearchProductInfo* searchProductInfo = new SearchProductInfo(dataBase); //1
				SearchProductInfoUI* searchProductInfoUI = new SearchProductInfoUI();
				curProduct = searchProductInfoUI->SearchProduct(searchProductInfo,file); // 2
				break;
			}
			case 2: // 4 2, 상품 구매
			{
				BuyProduct* buyProduct = new BuyProduct(dataBase); // start itf
				BuyProductUI* buyProductUI = new BuyProductUI();
				buyProductUI->SelectBuy(buyProduct, curProduct, file); //
				break;
			}
			case 3: // 4 3, 나의 구매 내역 조회
			{
				CheckPurchaseList* checkPurchaseList = new CheckPurchaseList(dataBase);
				CheckPurchaseListUI* checkPurchaseListUI = new CheckPurchaseListUI();
				checkPurchaseListUI->SelectPurchaseList(checkPurchaseList, file);
				break;
			}
			case 4: // 4 3, 나의 구매 내역 조회
			{
				EvaluateSatisfaction* evaluateSatisfaction = new EvaluateSatisfaction(dataBase);
				EvaluateSatisfactionUI* evaluateSatisfactionUI = new EvaluateSatisfactionUI();
				evaluateSatisfactionUI->EnterSatisfactionInfo(evaluateSatisfaction, file);
				break;
			}
			default:
				break;
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:
			{
				ShowSalesSatistics* showSalesSatistics = new ShowSalesSatistics(dataBase);
				showSalesSatistics->GetShowSalesSatisticsUI()->SelectShowSatistics(showSalesSatistics, file);
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
	file->ofs << "6.1 종료" << "\n";
	file->ifs.close();
	file->ofs.close();
}