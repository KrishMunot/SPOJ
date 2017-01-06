#include<bits/stdc++.h>
using namespace std;

int rev(int num)
{
    int temp=0;
    while(num)
    {
        temp=(temp*10)+(num%10);                 
        num/=10;
    }
    return temp;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num1,num2;
        cin>>num1>>num2;
        cout<<rev(rev(num1)+rev(num2))<<endl;
    }
    return 0;
}
