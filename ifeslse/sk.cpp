#include<iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout<<"enter value";
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"a is greater";

        }
        else{
            cout<<"c us greater";
        }

    }
    else{
        if (b>c)
        {
            cout<<"b is grater";

        }
        else{
            cout<<"c is grater";
        }
        
    }
return 0;
}