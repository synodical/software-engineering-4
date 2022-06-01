#include "BuyProduct.hpp"
#include "Seller.h"
#include "Buyer.h"
#include "BuyProductUI.hpp"
#include "DataBase.h"
#include "Product.h"

BuyProduct::BuyProduct() {
    this->database = nullptr;
    BuyProductUI buyProductUI;
    buyProductUI.StartInterface();
}

BuyProduct::BuyProduct(DataBase* database) {
    this->database = database;
    BuyProductUI buyProductUI;
    buyProductUI.StartInterface();
}

void BuyProduct::SendBuyRequest(Product * curProduct) {
    for (auto seller : database->GetSellerList()) {
        for (auto product : seller->GetProductList()) {
            if (curProduct->GetProductName() == product->GetProductName()) {
                product->SetProductDetails();
                database->GetBuyerList()[database->GetLogInIndex()]->CreatePurchaseProduct(product);
                return;
            }
        }
    }
};
