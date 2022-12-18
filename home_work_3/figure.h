#pragma once
#include <iostream>
class figure {
private:
	int sides = 0;
	std::string name = "Фигура";
public:
	figure() { };
	virtual bool chek() ;
	virtual void get_print() ;



};


