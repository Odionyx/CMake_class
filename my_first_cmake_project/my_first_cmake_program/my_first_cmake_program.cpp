// my_first_cmake_program.cpp: определяет точку входа для приложения.
//

#include "my_first_cmake_program.h"
#include <Windows.h>
#include <iostream>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru_RU");
	SetConsoleCP(1251);

	std::string str;
	std::cout << "Введите имя: ";
	std::cin >> str;

	std::cout << "Здравствуйте, " << str << "!" << std::endl;
	return 0;
}