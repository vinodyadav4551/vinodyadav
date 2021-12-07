#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char name[20];
    char password[10];
    cout<<"enter user name\n";
    cin>>name;
    cout<<"enter password\n";
    cin>>password;
    if(strcmp(name,"Admin")== 0  && strcmp(password,"pas")==0 )
    {
        
    cout<<" \n welcome ";
    }
    else{
    cout<<"\nthank u";
    }

    return 0;
}
