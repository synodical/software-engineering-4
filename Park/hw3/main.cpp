#include "File.h"
#include "DataBase.h"
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

	Member* member = new Member();// For Test
	Seller* seller = new Seller();// For Test
	Buyer* buyer = new Buyer(); // For Test
	dataBase->AddMember(member);// For Test
	dataBase->AddSeller(seller);// For Test
	dataBase->AddBuyer(buyer); // For Test
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
				break;
			}
			case 2:
			{
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
				break;
			}
			case 2:
			{
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
	file->ifs.close();
	file->ofs.close();
}