#include "File.h"
#include <iostream>

File::File()
{
	// 파일 입출력을 위한 초기화
	ifs.open("C:\\Users\\pgt01\\Desktop\\규라기\\공부방\\대학교\\전공\\4-1\\소프트웨어공학\\과제3\\Hw3\\input.txt", std::ios::in);
	if (ifs.fail())
	{
		std::cerr << "ifs Error!" << std::endl;
	}
	ofs.open("C:\\Users\\pgt01\\Desktop\\규라기\\공부방\\대학교\\전공\\4-1\\소프트웨어공학\\과제3\\Hw3\\output.txt", std::ios::out | std::ios::app);
	if (ofs.fail())
	{
		std::cerr << "ofs Error!" << std::endl;
	}
}