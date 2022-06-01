#include <iostream>
#include "SearchProductInfo.hpp"
#include "SearchProductInfoUI.hpp"
#include "Seller.h"

SearchProductInfo::SearchProductInfo() {
    SearchProductInfoUI searchUI;
    searchUI.StartInterface();
}

SearchProductInfo::SearchProductInfo(DataBase* database) {
    this->database = database;
    SearchProductInfoUI searchUI;
    searchUI.StartInterface();
}

Product* SearchProductInfo::ShowProductDetails(std::string productName) {
    for (auto seller : database->GetSellerList()) {
        for (auto product : seller->GetProductList()) {
            if (product->GetProductName() == productName) {
               // product->getProductDetails();
                return product;
            }
        }
    }
    // seller ?�근
    // seller.getProductList ->sller가 ?�매중인 ?�품?�이 vector�?.
    // cout << "there's no product name like " << productName << endl; // 간혹 ????
    return nullptr;
}