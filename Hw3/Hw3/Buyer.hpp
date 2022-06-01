//
//  buyer.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef Buyer_hpp
#define Buyer_hpp

#include <stdio.h>
#include <vector>
#include "Member.hpp"
class Product;

class Buyer : public Member
{
public:
    Buyer();

   void CreatePurchaseProduct(Product* newProduct);
   std::vector<Product*> GetProductList() { return productsList; }

private:
   std::vector<Product*> productsList;
};

#endif /* buyer_hpp */
