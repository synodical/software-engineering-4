//
//  main.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/05/30.
//

#include <iostream>
#include <vector>

#include "Product.hpp"
#include "DataBase.hpp"
#include "Member.hpp"
#include "Seller.hpp"
#include "Buyer.hpp"

#include "SearchProductInfo.hpp" // 4 1
#include "SearchProductInfoUI.hpp"

#include "BuyProduct.hpp" // 4 2
#include "BuyProductUI.hpp"

#include "CheckPurchaseList.hpp" // 4 3
#include "CheckPurchaseListUI.hpp"

#include "EvaluateSatisfaction.hpp" // 4 4
#include "EvaluateSatisfactionUI.hpp"

using namespace std;
vector<Product *> products(100); // db에 있는 구매자가 접근 가능한 product 집합

// 동작 방식
// 2 2 하면 new 해서 control class 만듦
// 그 control class가 boundary를 만든다
// 그 boundary가 뒷부분 id, pwd를 읽는다. 그리고 그 정보를 control에 넘긴다.

int main() {
    Product * curProduct;
    
    DataBase* database = new DataBase(); // database dynamic 생성
    Buyer * buyer1 = new Buyer();
    Seller * seller1 = new Seller();
    
    database->SetLogInIndex(0);
    database->AddBuyer(buyer1);
    database->AddSeller(seller1);
    database->GetBuyerList()[database->GetLogInIndex()]->GetProductList(); // login 한 buyer의 정보
    
    // 임의로 판매 중인 상품을 등록해줌. line 46-51 
    Product * p1 = new Product("yeeun", "hat", "samsung", 10000, 100, 3.5, 100, 1, 3.5, true);
    Product * p2 = new Product("yeeun", "scarf", "stussy", 20000, 50, 4.5, 200, 1, 4.5, true);
    database->GetSellerList()[0]->CreateSellingProduct(p1);
    database->GetSellerList()[0]->CreateSellingProduct(p2);
    
    while (1) {
        int menuLevel1, menuLevel2;
        cin >> menuLevel1 >> menuLevel2;
        switch (menuLevel1) {
            case 2:
            {
                string id;
                cin >> id;
                break;
            }
            case 4:
            {
                switch (menuLevel2) {
                    case 1: // 4 1, 상품 검색
                    {
                        SearchProductInfo *searchProductInfo = new SearchProductInfo(database); //1
                        
                        SearchProductInfoUI *searchProductInfoUI = new SearchProductInfoUI();
                        curProduct = searchProductInfoUI->SearchProduct(searchProductInfo); // 2
                        
                        curProduct->GetProductDetails();
                        break;
                    }
                    case 2: // 4 2, 상품 구매
                    {
                        BuyProduct *buyProduct = new BuyProduct(database); // start itf
                    
                        BuyProductUI *buyProductUI = new BuyProductUI;
                        buyProductUI->SelectBuy(buyProduct, curProduct); //
                        break;
                    }
                    case 3: // 4 3, 나의 구매 내역 조회
                    {
                        CheckPurchaseList * checkPurchaseList = new CheckPurchaseList(database);
                        CheckPurchaseListUI * checkPurchaseListUI = new CheckPurchaseListUI();
                        checkPurchaseListUI->SelectPurchaseList(checkPurchaseList);
                        break;
                    }
                    case 4: // 4 3, 나의 구매 내역 조회
                    {
                        EvaluateSatisfaction * evaluateSatisfaction = new EvaluateSatisfaction(database);
                        EvaluateSatisfactionUI * evaluateSatisfactionUI = new EvaluateSatisfactionUI();
                        evaluateSatisfactionUI->EnterSatisfactionInfo(evaluateSatisfaction);
                        break;
                    }
                    default:
                        break;
                }
            }
            case 6:
                break;
            default:
                break;
        }
        
    }
    
    
    return 0;
}
