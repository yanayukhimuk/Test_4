#include <Windows.h>
#include <exception>
#include<iostream>
class Bad_area {};
int area(int &length, int &width, int sq)
	{
		if (length <= 0 || width <= 0) throw Bad_area();
		sq = length * width;
		return sq; 
	}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int width;
	int length; 
	int sq;
	std::cout << "Введите ширину: ";
	std::cin >> width;
	std::cout << "Введите длину: ";
	std::cin >> length;
	try {
		sq = length * width;
	}
	catch (Bad_area) {
		std::cout << "Oop! bad arguments to area()\n";
	}
	area(length, width, sq); 
	std::cout << "Площадь равна: " << sq;
	return 0; 
}
