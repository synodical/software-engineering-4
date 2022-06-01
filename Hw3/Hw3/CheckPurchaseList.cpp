//
//  checkPurchaseList.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "CheckPurchaseList.hpp"
#include "CheckPurchaseListUI.hpp"
#include "Buyer.hpp"

class CheckPurChaseListUI;

CheckPurchaseList::CheckPurchaseList() {
    CheckPurchaseListUI listUI;
    listUI.StartInterface();
}

CheckPurchaseList::CheckPurchaseList(DataBase * database) {
    this->database = database;
    CheckPurchaseListUI listUI;
    listUI.StartInterface();
}

vector<Product*> CheckPurchaseList::ShowPurchaseList() {
    return database->GetBuyerList()[database->GetLogInIndex()]->GetProductList();
}
