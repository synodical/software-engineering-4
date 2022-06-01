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
    // seller ?‘ê·¼
    // seller.getProductList ->sllerê°€ ?ë§¤ì¤‘ì¸ ?í’ˆ?¤ì´ vectorë¡?.
    // cout << "there's no product name like " << productName << endl; // ê°„í˜¹ ????
    return nullptr;
}