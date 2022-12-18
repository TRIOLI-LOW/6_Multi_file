#pragma once
#include <iostream>
#include <Windows.h>
int sum(int, int);
int subs(int, int);
int mult(int, int);
int dev(int, int); 
int exp(int, int);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num1(0);
	int num2(0);
	int oper(0);

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "\nВведите второе число: ";
	std::cin >> num2;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> oper;
	if (oper == 1) {
		std::cout << "Сумма чисел " << num1 << " и " << num2 << " равна: " << sum(num1, num2) << std::endl;
	}
	else if (oper == 2) {
		std::cout << "Вычитание " << num2 << " из " << num1 << " равно : " << subs(num1, num2) << std::endl;
	}
	else if (oper == 3) {
		std::cout << "Умножение " << num1 << " и " << num2 << " равно : " << mult(num1, num2) << std::endl;
	}
	else if (oper == 4) {
		std::cout << "Деление " << num1 << " на " << num2 << " равно : " << dev(num1, num2) << std::endl;
	}
	else if (oper == 5) {
		std::cout<< num1 << " в степени " << num2 << " равно: " << exp(num1, num2) << std::endl;
	}
	else {
		std::cout << "Ошибка, некорректный ввод!" <<  std::endl;
	}
}
