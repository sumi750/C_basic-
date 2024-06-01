#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1,  i, c,  num;
    cout<<"the value of num";
    cin>>num;
    cout<<a<<" "<<b<<" ";
    for (int i = 2; num > i; i++)
    {
      c = a + b;
      cout<<c<<" ";
      a = b;
      b = c;

    }
    
return 0;
}