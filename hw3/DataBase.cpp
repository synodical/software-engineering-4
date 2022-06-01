//
//  database.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "DataBase.hpp"
#include "Member.hpp"
#include "Seller.hpp"
#include "Buyer.hpp"
DataBase::DataBase()
{
   memberList.clear();
   sellerList.clear();
   buyerList.clear();
}
