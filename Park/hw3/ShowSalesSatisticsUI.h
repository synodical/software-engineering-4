#pragma once

class ShowSalesSatistics;
class File;

class ShowSalesSatisticsUI
{
public:
	ShowSalesSatisticsUI();

	void StartInterface();
	void SelectShowSatistics(ShowSalesSatistics* showSalesSatistics, File* file);
};

