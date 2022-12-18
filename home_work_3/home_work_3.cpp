#include<iostream>
#include<Windows.h>
#pragma once
#include "figure.h"
#include "triange.h"
#include "rt_triange.h"
#include "rvst_triange.h"
#include "rbd_triange.h"

#include "quadrilateral.h"
#include "parallelogram.h"
#include "romb.h"
#include "quadr.h"
#include "prm_quadre.h"
#include "print_info.h"








int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	figure* f = new figure;
	print_info(f);
	figure* t = new triange;
	print_info(t);
	figure* r_t = new rt_triange;
	print_info(r_t);
	figure* rvb_t = new rbd_triange;
	print_info(rvb_t);
	figure* rvst_ = new rvst_triange;
	print_info(rvst_);

	figure* q = new quadrilateral;
	print_info(q);
	figure* q_pr = new prm_quadre;
	print_info(q_pr);
	figure* q_kv = new quadr;
	print_info(q_kv);
	figure* q_r = new romb;
	print_info(q_r);
	figure* q_pa = new parallelogram;
	print_info(q_pa);

	delete f;
	delete t;
	delete r_t;
	delete rvb_t;
	delete rvst_;
	delete q;
	delete q_pr;
	delete q_kv;
	delete q_r;
	delete q_pa;
}
