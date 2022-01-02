#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            for(int j=2;j<=2*i;j+=2)
            cout<<j;   
        }
        else{
            for(int j=1;j<=2*i;j+=2)
            cout<<j;
        }
        cout<<endl;
    }
}