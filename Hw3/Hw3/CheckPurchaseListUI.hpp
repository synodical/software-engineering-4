//
//  checkPurchaseListUI.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef CheckPurchaseListUI_hpp
#define CheckPurchaseListUI_hpp

#include <stdio.h>
#include "CheckPurchaseList.hpp"

class CheckPurchaseList;

class CheckPurchaseListUI {
public:
    CheckPurchaseListUI();
    void SelectPurchaseList(CheckPurchaseList * checkPurchaseList);
    void StartInterface();
};
#endif /* checkPurchaseListUI_hpp */
