//
//  evaluateSatisfaction.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef evaluateSatisfaction_hpp
#define evaluateSatisfaction_hpp

#include <stdio.h>
#include "DataBase.hpp"
#include "Product.hpp"
#include "EvaluateSatisfactionUI.hpp"
#include "Seller.hpp"

class EvaluateSatisfaction { // 선언
private:
    DataBase * database;
public:
    EvaluateSatisfaction();
    EvaluateSatisfaction(DataBase* database);
   // Product* ShowProductDetails(string product_name);
    void GetSatisfactionInfo(string productName, double score);
};
#endif /* evaluateSatisfaction_hpp */
