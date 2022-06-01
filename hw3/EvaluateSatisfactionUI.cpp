//
//  evaluateSatisfactionUI.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "EvaluateSatisfactionUI.hpp"
#include <iostream>

EvaluateSatisfactionUI::EvaluateSatisfactionUI() {}
void EvaluateSatisfactionUI::EnterSatisfactionInfo(EvaluateSatisfaction * evaluateSatisfaction) {
    double score; string productName;
    cin >> productName >> score;
    evaluateSatisfaction->GetSatisfactionInfo(productName, score);
    // file write
    // write "판매자 id, 상품명, 현재 평가한 구매만족도"
}
void EvaluateSatisfactionUI::StartInterface() {
   // std::cout << "enter product name and score" << std::endl;
}
