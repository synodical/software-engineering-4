//
//  searchProductInfoUI.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef SearchProductInfoUI_hpp
#define SearchProductInfoUI_hpp

#include <stdio.h>

class SearchProductInfo;
class Product;

class SearchProductInfoUI { // 선언
public:
    SearchProductInfoUI();
    Product* SearchProduct(SearchProductInfo * searchProductInfo);
    void StartInterface();
};
#endif /* searchProductInfoUI_hpp */
