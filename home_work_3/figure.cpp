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
		std::cout << "Правильная" << std::endl;
	}
	else {
		std::cout << "Неправильная" << std::endl;
	}

	std::cout << "Колличество сторон: " << sides << std::endl << std::endl;
}