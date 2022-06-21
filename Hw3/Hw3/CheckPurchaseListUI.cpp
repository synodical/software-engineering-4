#include "CheckPurchaseListUI.hpp"
#include "CheckPurchaseList.hpp"
#include "File.h"

CheckPurchaseListUI::CheckPurchaseListUI() 
{
}

void CheckPurchaseListUI::StartInterface()
{

}

void CheckPurchaseListUI::SelectPurchaseList(CheckPurchaseList * checkPurchaseList, File* file)
{
    file->ofs << "4.3. 상품 구매 내역 조회" << '\n';
    for (auto purchasedProduct : checkPurchaseList->ShowPurchaseList())
    {
        file->ofs << "> " << purchasedProduct->GetSellerID() << " " << purchasedProduct->GetProductName() << " " << purchasedProduct->GetCompanyName() << " " << purchasedProduct->GetPrice() << " " << purchasedProduct->GetAmount() << " " << floor(purchasedProduct->GetAverageSatisfaction()+0.5) << '\n' << '\n';
    }
}
