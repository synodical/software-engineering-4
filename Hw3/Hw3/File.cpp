#include "File.h"
#include <iostream>

File::File()
{
	// ���� ������� ���� �ʱ�ȭ
	ifs.open("input.txt", std::ios::in);
	if (ifs.fail())
	{
		std::cerr << "ifs Error!" << std::endl;
	}
	ofs.open("output.txt", std::ios::out);
	if (ofs.fail())
	{
		std::cerr << "ofs Error!" << std::endl;
	}
}