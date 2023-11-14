#include <iostream>
using namespace std;
class fruit {
public:
   fruit() {
      price = 200;
      number = 2;
      day = 12;
   }
   fruit(int p, int n, int d) {
      price = p;
      number = n;
      day = d;
   }
   float price;
   int number;
   int day;

   float show() {
      return price * number;
   }
   void show_all() {
      cout << price << endl;
      cout << number << endl;
      cout << day << endl;
   }
};
int main() {
   fruit mango, apple, pear, peach;
   mango = fruit(700, 8, 12);
   mango.show_all();
   cout << mango.show() << endl;
   return 666;
}
