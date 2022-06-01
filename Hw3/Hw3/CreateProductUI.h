#pragma once

class CreateProduct;
class File;

class CreateProductUI
{
public:
	CreateProductUI();

	void StartInterface();

	void GetProductForm(CreateProduct* createProduct, File* file);
};