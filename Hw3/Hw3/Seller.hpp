//
//  seller.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef Seller_hpp
#define Seller_hpp

#include <stdio.h>
#include <vector>
#include "Member.hpp"
class Product;

class Seller : public Member
{
public:
   Seller();

   void CreateSellingProduct(Product* newProduct);
   std::vector<Product*> GetProductList() { return productsList; }

private:
   std::vector<Product*> productsList;
};

#endif /* seller_hpp */
