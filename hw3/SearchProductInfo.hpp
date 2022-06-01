//
//  searchProductInfo.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef SearchProductInfo_hpp
#define SearchProductInfo_hpp

#include <stdio.h>
#include "DataBase.hpp"
#include "Product.hpp"
#include <string>

class SearchProductInfo { // 선언
private:
    DataBase * database;
public:
    SearchProductInfo();
    SearchProductInfo(DataBase* database);
    Product* ShowProductDetails(string productName);
};

#endif /* searchProductInfo_hpp */
