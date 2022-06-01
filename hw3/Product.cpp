//
//  product.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "Product.hpp"
#include <string>
#include <iostream>
using namespace std;

Product::Product() {}
Product::Product (string id, string name, string company, int p, long long a, double satis, long long totalSale, int evaluate, double totalSc, bool state) { sellerId=id; productName=name; companyName=company; price=p; amount=a; averageSatisfaction=satis; totalSales=totalSale; evaluateNum=evaluate; totalScore=totalSc, isSelling=state; }
        
void Product::GetProductDetails() {
    // { [판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도] }*
    cout << this->sellerId << " " << this->productName << " " << this->companyName
    << " " << this->price << " " << this->amount << " " << this->averageSatisfaction << endl;
    return;
}
void Product::SetProductDetails() {
    this->amount -= 1;
    this->totalSales += 1;
}

void Product::SetProductDetails(double score) {
    this->totalScore += score;
    this->evaluateNum += 1;
    this->averageSatisfaction = this->totalScore / this->evaluateNum;
}

string Product::GetProductName() {
    return this->productName;
}
string Product::GetSellerId() {
    return this->sellerId;
}

