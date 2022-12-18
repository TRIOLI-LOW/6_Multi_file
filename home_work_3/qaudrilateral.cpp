#pragma once
#include "quadrilateral.h"
quadrilateral::quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;


	this->name = name;
};
quadrilateral::quadrilateral() : quadrilateral(10, 20, 30, 40, 50, 60, 70, 80, "���������������") { };

bool quadrilateral :: chek (){
		if (name == "���������������") {
			if ((A + B + C + D == 360) && (sides == 4)) {
				return true;
			}
			else return false;
		}
	}
void quadrilateral :: get_print() {
	std::cout << name << ": " << std::endl;
	if (chek() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		std::cout << "������������" << std::endl;
	}
	std::cout << "�������:  a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
	std::cout << "����:  A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
	std::cout << std::endl;
}
