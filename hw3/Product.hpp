//
//  product.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef Product_hpp
#define Product_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Product {
    friend class SearchProductInfo; // or can make getProductName()
    friend class BuyProduct;
private:
    string sellerId;
    string productName; // is unique
    string companyName;
    int price;
    long long amount; // 남은 수량
    double averageSatisfaction;
    long long totalSales; // 판매된 수량
    int evaluateNum; // 평가 횟수
    double totalScore; // 총점
    bool isSelling;
    
public:
    Product();
    Product (string id, string name, string company, int p, long long a, double satis, long long totalSale, int evaluate, double totalSc, bool state);
        
    void GetProductDetails();
    void SetProductDetails();
    void SetProductDetails(double score);
    void EvaluateProduct();
    string GetProductName();
    string GetSellerId();
};



#endif /* product_hpp */
