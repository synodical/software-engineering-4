#pragma once
#include <iostream>

class CheckPurchaseList;
class File;

class CheckPurchaseListUI {
public:
    CheckPurchaseListUI();
    void SelectPurchaseList(CheckPurchaseList * checkPurchaseList, File* file);
    void StartInterface();
};