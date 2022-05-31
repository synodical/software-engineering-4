#pragma once

class ListSoldProduct;
class File;

class ListSoldProductUI
{
public:
	ListSoldProductUI();

	void StartInterface();
	void SelectShowList(ListSoldProduct* listSoldProduct, File* file);
};