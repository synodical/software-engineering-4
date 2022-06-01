#pragma once
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
	void SetLogInIndex(int index) { logInIndex = index; }

	void DeleteMember(int index) { memberList.erase(memberList.begin() + index); }
	void DeleteSeller(int index) { sellerList.erase(sellerList.begin() + index); }
	void DeleteBuyer(int index) { buyerList.erase(buyerList.begin() + index); }
	
	void AddMember(Member* member) { memberList.emplace_back(member); }
	void AddSeller(Seller* seller) { sellerList.emplace_back(seller); }
	void AddBuyer(Buyer* buyer) { buyerList.emplace_back(buyer); }

private:
	std::vector<Member*> memberList;
	std::vector<Seller*> sellerList;
	std::vector<Buyer*> buyerList;

	int logInIndex;
};