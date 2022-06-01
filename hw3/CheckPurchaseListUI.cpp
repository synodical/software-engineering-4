//
//  checkPurchaseListUI.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "CheckPurchaseListUI.hpp"
#include <iostream>

CheckPurchaseListUI::CheckPurchaseListUI() {}

void CheckPurchaseListUI::StartInterface() {
   // std::cout << "start purchase list ui" << std::endl;
}
void CheckPurchaseListUI::SelectPurchaseList(CheckPurchaseList * checkPurchaseList) {
  //  std::cout << "select purchase list" << std::endl;
    
    for (auto purchasedProduct : checkPurchaseList->ShowPurchaseList()) {
        purchasedProduct->GetProductDetails();
    }
    // file 쓰기가 진행됨
    // "{ [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도] }*
}
