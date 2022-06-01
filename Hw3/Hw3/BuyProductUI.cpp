#include "BuyProductUI.hpp"
#include "BuyProduct.hpp"
#include "Product.h"
#include "File.h"
#include <iostream>

BuyProductUI::BuyProductUI()
{

}

void BuyProductUI::SelectBuy(BuyProduct* buyProduct, Product * curProduct, File* file)
{    
    buyProduct->sendBuyRequest(curProduct);
    file->ofs << "4.2. 상품 구매" << '\n';
    file->ofs << "> " << curProduct->GetSellerID() << " " << curProduct->GetProductName() << '\n' << '\n'; 
};

void BuyProductUI::StartInterface() 
{

};