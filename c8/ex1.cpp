#include <iostream>
using namespace std;
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; day = 12;  // default values
	}
	fruit(float p, int n) {
		price = p;
		many = n;
		day = 12;
	}
	fruit(float p, int n, int d) {
		price = p;
		many = n;
		day = d;
		
	}
	// member data
	int many;
	float price;
	int day;
	// member function
	float show() {
		return price * many;
	}
	void show_all() {
		cout << price << " " << many << " " << day;
	}
};

int main() {
	fruit apple, pear, peach,mango;
	pear = fruit(300, 5);
	peach = fruit(1000, 5);
	mango = fruit(700, 8);
	cout << apple.show() << endl;
	cout << pear.show() << endl;
	cout << peach.show() << endl;
	cout << " peach " << peach.price << endl;
	mango.show_all();
	return 123;
}
