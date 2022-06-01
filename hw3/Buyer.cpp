//
//  buyer.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "Buyer.hpp"
#include "Product.hpp"
Buyer::Buyer()
{

}

void Buyer::CreatePurchaseProduct(Product* newProduct)
{
   productsList.push_back(newProduct);
}

