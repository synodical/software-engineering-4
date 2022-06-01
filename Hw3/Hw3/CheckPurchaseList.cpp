#include "CheckPurchaseList.hpp"
#include "CheckPurchaseListUI.hpp"
#include "Buyer.h"

CheckPurchaseList::CheckPurchaseList() 
{
    CheckPurchaseListUI listUI;
    listUI.StartInterface();
}

CheckPurchaseList::CheckPurchaseList(DataBase * database) 
{
    this->database = database;
    CheckPurchaseListUI listUI;
    listUI.StartInterface();
}

std::vector<Product*> CheckPurchaseList::ShowPurchaseList()
{
    return database->GetBuyerList()[database->GetLogInIndex()]->GetProductList();
}
