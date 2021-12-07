#include <iostream>
using namespace std;
int  main()
{
    int a=10,b=20,t;
    cout << "befor swapping\n"; 
    cout << "a =" << a  <<" ,b=" << b << endl;
     t=a;
     a=b;
     b=t;
     
     cout << "after swapping"; 
    cout <<"a=" << a << ",b=" << b << endl;
    return 0;
}
