//
//  searchProductInfo.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//
#include <iostream>
#include "SearchProductInfo.hpp"
#include "SearchProductInfoUI.hpp"
#include "Seller.hpp"
class SearchProductInfoUI;

SearchProductInfo::SearchProductInfo() {
    SearchProductInfoUI searchUI;
    searchUI.StartInterface();
}
SearchProductInfo::SearchProductInfo(DataBase* database) {
    this->database = database;
    SearchProductInfoUI searchUI;
    searchUI.StartInterface();
}
Product* SearchProductInfo::ShowProductDetails(string productName) {
    for (auto seller : database->GetSellerList()) {
        for (auto product : seller->GetProductList()) {
            if (product->GetProductName() == productName) {
               // product->getProductDetails();
                return product;
            }
        }
    }
    // seller 접근
    // seller.getProductList ->sller가 판매중인 상품들이 vector로..
    // cout << "there's no product name like " << productName << endl; // 간혹 안 됨?
    return nullptr;
}
