#include<iostream>
#pragma once
#include "figure.h"
//figure::figure() { };
 bool figure::chek() {
	if (sides == 0) {
		return true;
	}
	else return false;
};
 void figure::get_print() {
	std::cout << name << ": " << std::endl;
	if (chek() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		std::cout << "������������" << std::endl;
	}

	std::cout << "����������� ������: " << sides << std::endl << std::endl;
}