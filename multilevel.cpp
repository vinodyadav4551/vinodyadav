#include<iostream>
using namespace std;
class variable{
     public:
     int l;
      int w;
     int h;
 };
 class volum: public variable{
     public:
     int v(){
         int vo;
         vo=l*w*h;
         cout << "volume is =" << vo << endl;
         return vo;
     }
 };
 class area: public volum{
   public:
   int a(){
       int ar;
       ar=2*(w*h+h*l+l*w);
         cout << "area is =" << ar << endl;
       return ar;
       
   }
 };
 int main()
 {
      area v1;
 
     cout <<"enter the length\n";
     cin >> v1.l;
     cout<<"enter the width\n";
       cin>> v1.w;
      cout<<"enter the hight\n";
   cin>> v1.h;
    v1.v();
    v1.a();
    return 0;
 }
