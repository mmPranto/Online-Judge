#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;
     while(t--)
     {
        int a,b;
        cin>>a>>b;
        int count=0;
        if(a%b!=0)
        {
            int remainder=a%b;
            int increment=b-remainder;
            count+=increment;
            a+=increment;
        }

        cout<<count<<endl;
     }


    return 0;
}