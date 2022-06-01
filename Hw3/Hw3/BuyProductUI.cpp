//
//  buyProductUI.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "BuyProductUI.hpp"
#include "BuyProduct.hpp"
#include "Product.hpp"
#include <iostream>
using namespace std;

void BuyProductUI::SelectBuy(BuyProduct* buyProduct, Product * curProduct) {
    //cout << "select buy" << endl;
    
    buyProduct->sendBuyRequest(curProduct);
    // file 쓰기가 진행됨
    // [판매자ID] [상품명]
    curProduct->GetProductName();
    
};
void BuyProductUI::StartInterface() {
    cout << "start buy ui" << endl;
};

