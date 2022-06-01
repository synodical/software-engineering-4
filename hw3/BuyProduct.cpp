//
//  buyProduct.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "BuyProduct.hpp"
#include "Seller.hpp"
#include "Buyer.hpp"
#include "BuyProductUI.hpp"
class BuyProductUI;

BuyProduct::BuyProduct() {
    // control class의 constructer.
    // control class 생성과 동시에 BuyProductUI 생성, UI의 StartInterface 호출하여 interface 시작
    BuyProductUI buyProductUI;
    buyProductUI.StartInterface();
}

BuyProduct::BuyProduct(DataBase* database) {
    this->database = database;
    BuyProductUI buyProductUI;
    buyProductUI.StartInterface();
}

void BuyProduct::sendBuyRequest(Product * curProduct) {
    for (auto seller : database->GetSellerList()) {
        for (auto product : seller->GetProductList()) {
            if (curProduct->GetProductName() == product->GetProductName()) {
                product->SetProductDetails(); // product는 db에 실재하는 product이다.
                database->GetBuyerList()[database->GetLogInIndex()]->CreatePurchaseProduct(product);
                // 현재 구매한 product는 현재 login 한 index의 buyer가 갖고 있는 PurchaseProduct라는 배열에 담는다.
                return;
            }
        }
    }
};
