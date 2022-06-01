#pragma once
#include <iostream>

class EvaluateSatisfaction;
class File;

class EvaluateSatisfactionUI 
{
public:
    EvaluateSatisfactionUI();
    
    void EnterSatisfactionInfo(EvaluateSatisfaction * evaluateSatisfaction, File* file);
    void StartInterface();
};