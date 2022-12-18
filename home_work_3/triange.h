#pragma once
#include "figure.h"

class triange : public figure {
private:
	int a = 0;
	int b = 0;
	int c = 0;

	int A = 0;
	int B = 0;
	int C = 0;
	int g = 0;

	int sides = 3;

	std::string name = " ";
protected:
	triange(int a, int b, int c, int A, int B, int C, std::string name);

public:
	triange();
	bool chek() override;
	void  get_print() override;

};
