#include <iostream>
using namespace std;

int main() {
   int a1, a2, a3, a4, b1, b2, b3, b4;
   int c1, c2, c3, c4;

   cout << "Introduceti primul interval de timp: " << endl;
   cout << "Ore: "; cin >> a1;
   cout << "Minute: "; cin >> a2;
   cout << "Secunde: "; cin >> a3;
   cout << "Zecimi de secunde: "; cin >> a4;
   cout << "Introduceti al doilea interval de timp: " << endl;
   cout << "Ore: "; cin >> b1;
   cout << "Minute: "; cin >> b2;
   cout << "Secunde: "; cin >> b3;
   cout << "Zecimi de secunde: "; cin >> b4;
   cout << "Suma celor doua intervale este: ";

   c4 = a4 + b4;
   c3 = a3 + b3;
   c2 = a2 + b2;
   c1 = a1 + b1;


   while (c4>=60) {
        c3++;
        c4-= 60; }


   while (c3>=60) {
        c2++;
        c3-= 60; }

   while (c2>=60) {
        c1++;
        c2-= 60; }

   cout << c1 << " ore, " << c2 << " minute, " << c3 << " secunde, " << c4 << " zecimi de secunde." << endl;

   return 0;
}