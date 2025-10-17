#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
             
        }
        ch--;
        for(int j=1;j<=i-1;j++)
        {
            
            cout<<--ch;
        }
        cout<<endl;
    }
}