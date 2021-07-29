#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<endl;/* code */
        }
        else
        {
            cout<<c<<endl;
         }
        if (a>d)
        {
            cout<<a<<endl
        }/* code */
    }
    else if(b>d){
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(c>d)
    }
}