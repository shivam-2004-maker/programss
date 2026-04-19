#include<iostream>
using namespace std;
int main() {
int a =2;
int b = 6;

cout<< " a&b  "<<(a&b) <<endl;
cout<< "a|b "<<(a&b) << endl;
cout<< "~a "<< ~a << endl;
cout<< "a^b "<<(a^b) << endl;

cout<< (17>>1) << endl;
cout<< (17>>2) << endl;
cout<< (21<<1) << endl;
cout<< (21<<2) << endl;

int i = 7;
cout<<(++i) << endl;
// print 8 hoga aur i = 8
cout<<(i++) << endl;
// ab i =8 hai toh  print 8 hoga par i =9 hoga 
cout<<(i--) << endl;
// print 9 hoga par post decrment hai toh i=8 hoga 
cout<<(--i) << endl;
// print 7 aur i = 7 hoga 


}