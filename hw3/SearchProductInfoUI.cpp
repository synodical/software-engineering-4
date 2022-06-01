//
//  searchProductInfoUI.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "SearchProductInfoUI.hpp"
#include "Product.hpp"
#include "SearchProductInfo.hpp"
#include <iostream>
using namespace std;

//class SearchProductInfo;
//class Product;

SearchProductInfoUI::SearchProductInfoUI() {}
Product* SearchProductInfoUI::SearchProduct(SearchProductInfo * searchProductInfo) {
    string productName;
    cin >> productName;
    
    Product* product = searchProductInfo->ShowProductDetails(productName);
    // 파일쓰기를 진행한다. boundary class이므로.
    // product->getProductName (or detail)
    // [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도]
    return product; // main 함수의 curProduct에 현재 검색한 상품을 기억하기 위해 반환함.
}

void SearchProductInfoUI::StartInterface() {
    //cout << "enter product name" << endl;
};

