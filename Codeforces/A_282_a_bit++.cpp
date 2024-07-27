#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,x=0;
    cin>>a;
    string s;
    for(int i=1;i<=a;i++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }
    cout<<x;
}
