#include "LoLCha.h"
LoL::LoL(int N1, int N2, float a, float b, float x0, float dx, int m)
    : N1(N1), N2(N2), a(a), b(b), x0(x0), dx(dx), m(m) {

}
void LoL::f0(string ss) {
	dd.open(ss, ios::binary | ios::out);
	dd.write((char*)&N1, sizeof(int));
	dd.write((char*)&N2, sizeof(int));
	dd.write((char*)&a, sizeof(float));
	dd.write((char*)&b, sizeof(float));
	dd.write((char*)&x0, sizeof(float));
	dd.write((char*)&dx, sizeof(float));
	dd.write((char*)&m, sizeof(int));
}
int* LoL:: f1() {
    int* result = new int[N2 - N1 + 1];
    for (int i = N1; i <= N2; i++) {
        result[i - N1] = 0;
        for (int j = 0; j <= i; j++) {
            result[i - N1] += j;
        }
    }
    return result;
}


float* LoL:: f2() {
    float* result = new float[m];
    float x = x0;
    for (int i = 0; i < m; i++) {
        result[i] = a * x + b;
        x += dx;
    }
    return result;
}

void LoL:: f3(string filename) {
    ofstream dd(filename, ios::binary | ios::out);

    dd.write((char*)(&N1), sizeof(N1));
    dd.write((char*)(&N2), sizeof(N2));
    dd.write((char*)(&a), sizeof(a));
    dd.write((char*)(&b), sizeof(b));
    dd.write((char*)(&x0), sizeof(x0));
    dd.write((char*)(&dx), sizeof(dx));
    dd.write((char*)(&m), sizeof(m));

    f1Result = f1();
    for (int i = 0; i < N2 - N1 + 1; i++) {
        dd.write((char*)(&f1Result[i]), sizeof(int));
    }

    f2Result = f2();
    for (int i = 0; i < m; i++) {
        dd.write((char*)(&f2Result[i]), sizeof(float));
    }

    dd.close();
}


LoL::~LoL() {
    delete[] f1Result;
    delete[] f2Result;
}



