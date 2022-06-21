#include "SearchProductInfoUI.hpp"
#include "SearchProductInfo.hpp"
#include "File.h"
#include "Product.h"

SearchProductInfoUI::SearchProductInfoUI() 
{

}

Product* SearchProductInfoUI::SearchProduct(SearchProductInfo * searchProductInfo, File* file) {
    std::string productName;
    
    file->ifs.seekg(file->readed);
    file->ifs >> productName;
    file->readed = file->ifs.tellg();
    
    Product* product = searchProductInfo->ShowProductDetails(productName);

    file->ofs << "4.1. 상품 정보 검색" << '\n';
    file->ofs << "> " << product->GetSellerID() << " " << productName << " " << product->GetCompanyName() << " " << product->GetPrice() << " " << product->GetAmount() << " " << floor(product->GetAverageSatisfaction()+0.5) << '\n' << '\n';
    return product;
}

void SearchProductInfoUI::StartInterface()
{
   
};

