#pragma once
#include <iostream>

class Product;
class BuyProduct;
class File;

class BuyProductUI {
public:
    BuyProductUI();
    void SelectBuy(BuyProduct* buyProduct, Product * curProduct, File* file);
    void StartInterface();
};