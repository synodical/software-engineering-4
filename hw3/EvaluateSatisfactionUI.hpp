//
//  evaluateSatisfactionUI.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef evaluateSatisfactionUI_hpp
#define evaluateSatisfactionUI_hpp

#include <stdio.h>
#include <string>
#include "EvaluateSatisfaction.hpp"
using namespace std;

class Product;
class EvaluateSatisfaction;

class EvaluateSatisfactionUI { // 선언
public:
    EvaluateSatisfactionUI();
    
    void EnterSatisfactionInfo(EvaluateSatisfaction * evaluateSatisfaction);
    void StartInterface();
};
#endif /* evaluateSatisfactionUI_hpp */


