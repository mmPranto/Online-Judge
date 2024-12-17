#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;
     cin.ignore();
     while(n--)
     {
        
        string s;
        getline(cin,s);
        string a="abc";
        int count=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=a[i])
            {
                count+=1; 
            }
        }

        if(count>2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

        

        
        
     }


    return 0;
}