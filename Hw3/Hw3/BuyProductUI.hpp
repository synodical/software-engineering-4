//
//  buyProductUI.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef BuyProductUI_hpp
#define BuyProductUI_hpp

#include <stdio.h>
class Product;
class BuyProduct;

class BuyProductUI {
public:
    void SelectBuy(BuyProduct* buyProduct, Product * curProduct);
    void StartInterface();
};
#endif /* buyProductUI_hpp */
