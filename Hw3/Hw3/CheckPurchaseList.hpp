//
//  checkPurchaseList.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef checkPurchaseList_hpp
#define checkPurchaseList_hpp

#include <stdio.h>
#include "DataBase.hpp"
#include "Product.hpp"

class CheckPurchaseList {
private:
    DataBase * database;
public:
    CheckPurchaseList();
    CheckPurchaseList(DataBase* database);
    vector<Product*> ShowPurchaseList();
};

#endif /* checkPurchaseList_hpp */
