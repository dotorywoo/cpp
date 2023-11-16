#pragma once
#include <fstream>
using namespace std;
class LoL {
public:
	LoL() {};
	LoL(int N1, int N2, float a, float b, float x0, float dx, int m,string filename);
	int* f1Result;
	float* f2Result;
	int N1, N2, m;
	float a, b, x0, dx;
	string filename;
	int* aa;
	float* bb;
	ofstream dd;
	void f0(string);
	int* f1();
	float* f2();
	void f3(string filename);
	~LoL();

};
