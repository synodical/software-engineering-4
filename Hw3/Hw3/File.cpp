#include "File.h"
#include <iostream>

File::File()
{
	// ���� ������� ���� �ʱ�ȭ
	ifs.open("C:\\Users\\pgt01\\Desktop\\�Զ��\\���ι�\\���б�\\����\\4-1\\����Ʈ�������\\����3\\Hw3\\input.txt", std::ios::in);
	if (ifs.fail())
	{
		std::cerr << "ifs Error!" << std::endl;
	}
	ofs.open("C:\\Users\\pgt01\\Desktop\\�Զ��\\���ι�\\���б�\\����\\4-1\\����Ʈ�������\\����3\\Hw3\\output.txt", std::ios::out | std::ios::app);
	if (ofs.fail())
	{
		std::cerr << "ofs Error!" << std::endl;
	}
}