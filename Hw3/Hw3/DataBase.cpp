#include "DataBase.h"
#include "Member.h"
#include "Seller.h"
#include "Buyer.h"

DataBase::DataBase()
{
	logInIndex = -1;
	memberList.clear();
	sellerList.clear();
	buyerList.clear();
}