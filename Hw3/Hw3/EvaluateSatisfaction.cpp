//
//  evaluateSatisfaction.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "EvaluateSatisfaction.hpp"

class EvaluateSatisfactionUI;
class Seller;

EvaluateSatisfaction::EvaluateSatisfaction() {
    EvaluateSatisfactionUI evaluateUI;
    evaluateUI.StartInterface();
}
EvaluateSatisfaction::EvaluateSatisfaction(DataBase * database) {
    this->database = database;
    EvaluateSatisfactionUI evaluateUI;
    evaluateUI.StartInterface();
}
void EvaluateSatisfaction::GetSatisfactionInfo(string productName, double score) {
    for (auto seller : database->GetSellerList()) {
        for (auto product : seller->GetProductList()) {
            if (product->GetProductName() == productName) {
                product->SetProductDetails(score);
                
                // product->getProductDetails(); // for debugging
            }
        }
    }
}
