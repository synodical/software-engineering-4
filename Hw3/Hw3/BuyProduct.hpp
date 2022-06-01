//
//  buyProduct.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef BuyProduct_hpp
#define BuyProduct_hpp

#include <stdio.h>
#include "DataBase.hpp"
#include "Product.hpp"

class BuyProduct { // declare
private:
    DataBase * database;
public:
    BuyProduct();
    BuyProduct(DataBase* database);
    void sendBuyRequest(Product * curProduct);
};
#endif /* buyProduct_hpp */
