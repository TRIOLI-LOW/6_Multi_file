#pragma once
#include "triange.h"
triange :: triange (int a, int b, int c, int A, int B, int C, std::string name) {
	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;

	this->name = name;
}
	triange :: triange () : triange(10, 20, 30, 50, 60, 70, "�����������"){}
bool triange::chek() {
	g = A + B + C;
	if (name == "������������� �����������") {
		if ((C == 90) && (g == 180)) {
			return true;
		}
		else return false;
	}
	else if (name == "�������������� �����������") {
		if ((a == b == c) && (A == B == C == 60)) {
			return true;
		}
		else return false;
	}
	else if (name == "�������������� �����������") {
		if ((A == C) && (a == c)) {
			return true;
		}
		else return false;
	}
	else if (name == "�����������") {
		if ((A + B + C == 180) && (sides == 3)) {
			return true;
		}
		else return false;
	}
}
void triange::get_print() {
	std::cout << name << ": " << std::endl;
	if (chek() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		std::cout << "������������" << std::endl;
	}

	std::cout << "�������:  a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "����:  A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;

}
