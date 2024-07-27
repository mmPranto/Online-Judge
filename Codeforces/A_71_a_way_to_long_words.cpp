#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;

    for(int i=0;i<x;i++)
    {
        cin>>s;

        if(s.length()>10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }


}
