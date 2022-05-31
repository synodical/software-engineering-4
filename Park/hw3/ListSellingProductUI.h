#pragma once

class ListSellingProduct;
class File;

class ListSellingProductUI
{
public:
	ListSellingProductUI();

	void StartInterface();
	void SelectShowList(ListSellingProduct* listSellingProduct, File* file);
};