#include <iostream>  
using namespace std;  
 class Animal {  
   public:  
 void eat() {  
     int n;
    cout<<"Eating..."<<endl;   
    cin >> n;
     
 }    
   };  
   class Dog: public Animal    
   {    
       public:  
     void bark(){  
    cout<<"Barking...";   
     }    
   };   
int main(void) {  
    Dog d1;  
    d1.eat();  
    d1.bark();  
    return 0;  
} 
