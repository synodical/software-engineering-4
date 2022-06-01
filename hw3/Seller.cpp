//
//  seller.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "Seller.hpp"
#include "Product.hpp"

//#include "member.hpp"

Seller::Seller()
{

}

void Seller::CreateSellingProduct(Product* newProduct)
{
   productsList.push_back(newProduct);
}
