#include <iostream>
#include "store2.h"
using namespace std;
int main() {
	store A, B;
	A = store(4, 3, 3, 800, 1000, 800);
	B = store(3, 3, 4, 1000, 1200, 1000);
	A *= 2;
	
	cout << A.total() << " " << B.total() << endl;
	cout << A.apple.many <<" "<< B.apple.many << endl;

	cout << A.pear.many << " "<<B.pear.many << endl;

	cout << A.peach.many <<" "<< B.peach.many << endl;

	return 123;
}
