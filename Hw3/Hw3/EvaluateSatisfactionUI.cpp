#include "EvaluateSatisfactionUI.hpp"
#include "EvaluateSatisfaction.hpp"
#include "File.h"
#include "Product.h"

EvaluateSatisfactionUI::EvaluateSatisfactionUI() 
{

}

void EvaluateSatisfactionUI::EnterSatisfactionInfo(EvaluateSatisfaction * evaluateSatisfaction, File* file) 
{
    float score;
    std::string productName;
    file->ifs.seekg(file->readed);
    file->ifs >> productName >> score;
    file->readed = file->ifs.tellg();

    Product* product = evaluateSatisfaction->UpdateSatisfactionInfo(productName, score);
    file->ofs << "4.4. 상품 구매만족도 평가" << '\n';
    file->ofs << "> " << product->GetSellerID() << " " << productName << " " << score << '\n' << '\n';
}

void EvaluateSatisfactionUI::StartInterface() 
{
}
