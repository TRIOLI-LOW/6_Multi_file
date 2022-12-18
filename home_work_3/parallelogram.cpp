#pragma once
#include "parallelogram.h"
parallelogram ::parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;

	this->name = name;
}

parallelogram::parallelogram() : parallelogram(10, 10, 10, 10, 70, 110, 70, 110, "��������������") {  };

bool parallelogram :: chek() {
	if (name == "�������������") {
		if ((a = c) && (b = d) && (A = B = C = D = 90)) {
			return true;
		}
		else return false;
	}

	else if (name == "����") {
		if ((a = b = c = d) && (A = C) && (B = D)) {
			return true;
		}
		else return false;
	}
	else if (name == "�������") {
		if ((A = B = C = D = 90) && (a = b = c = d)) {
			return true;
		}
		else return false;
	}
	else if (name == "��������������") {
		if ((a == c) && (b == d) && (A == C) && (B == D)) {
			return true;
		}
		else return true;
	}
};
void parallelogram :: get_print() {
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