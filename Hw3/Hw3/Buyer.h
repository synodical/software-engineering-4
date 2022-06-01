#pragma once

#include <stdio.h>
#include <vector>
#include "Member.h"

class Product;

class Buyer : public Member
{
public:
    Buyer();

    void CreatePurchaseProduct(Product* newProduct);
    std::vector<Product*> GetProductList() { return productsList; }

private:
    std::vector<Product*> productsList;
};