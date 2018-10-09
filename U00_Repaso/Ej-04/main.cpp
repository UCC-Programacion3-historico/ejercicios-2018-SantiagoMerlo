#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b=0,c=0;
    cout<<"ingrese segundos"<<endl;
    cin>>a;
    b=a/60;
    a=a%60;
    c=b/60;
    b=b%60;
    cout<<c<<" hs"<<endl<<b<<" mn"<<endl<<a<<" seg";
    system ("pause");
    return(0);
}


