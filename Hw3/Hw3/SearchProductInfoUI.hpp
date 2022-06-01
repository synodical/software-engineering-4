#pragma once
#include <iostream>

class SearchProductInfo;
class File;
class Product;

class SearchProductInfoUI
{
public:
    SearchProductInfoUI();
    
    Product* SearchProduct(SearchProductInfo * searchProductInfo, File* file);
    void StartInterface();
};