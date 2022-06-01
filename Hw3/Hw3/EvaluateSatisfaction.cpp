#include "EvaluateSatisfaction.hpp"
#include "EvaluateSatisfactionUI.hpp"
#include "DataBase.h"
#include "Seller.h"
#include "Product.h"

EvaluateSatisfaction::EvaluateSatisfaction() 
{
    EvaluateSatisfactionUI evaluateUI;
    evaluateUI.StartInterface();
}
EvaluateSatisfaction::EvaluateSatisfaction(DataBase * database) 
{
    this->database = database;
    EvaluateSatisfactionUI evaluateUI;
    evaluateUI.StartInterface();
}
Product* EvaluateSatisfaction::UpdateSatisfactionInfo(std::string productName, float score)
{
    for (auto seller : database->GetSellerList()) {
        for (auto product : seller->GetProductList()) {
            if (product->GetProductName() == productName) {
                product->SetProductDetails(score);
                return product;
            }
        }
    }
}
