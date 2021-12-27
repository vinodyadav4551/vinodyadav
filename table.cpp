#include <iostream>
using namespace std;
class c{
    public:
    int a;
    int input()
    {
        cout << "enter the number :";
        cin >> a ;
        return 0;
    }
    void calution()
    {
        int i=0;
       for(i=1;i<=10;i++){      
       cout << "\n"<<(a*i);    
       
        }
     }
    
    
};
int main()
{
    c c1;
    int a;
    c1.input();
    c1.calution();
  
    return 0;
}





