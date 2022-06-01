//
//  database.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef DataBase_hpp
#define DataBase_hpp

#include <stdio.h>
#include <vector>

class Member;
class Seller;
class Buyer;

class DataBase
{
public:
   DataBase();

   std::vector<Member*> GetMemberList() { return memberList; }
   std::vector<Seller*> GetSellerList() { return sellerList; }
   std::vector<Buyer*> GetBuyerList() { return buyerList; }
   int GetLogInIndex() { return logInIndex; }

   void SetLogInIndex(int index) { logInIndex = index; }// For Test
   void AddMember(Member* member) { memberList.emplace_back(member); }// For Test
   void AddSeller(Seller* seller) { sellerList.emplace_back(seller); }// For Test
   void AddBuyer(Buyer* buyer) { buyerList.emplace_back(buyer); }// For Test

private:
   std::vector<Member*> memberList;
   std::vector<Seller*> sellerList;
   std::vector<Buyer*> buyerList;

   int logInIndex;
};

#endif /* database_hpp */
