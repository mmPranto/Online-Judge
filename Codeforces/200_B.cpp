#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n;
     cin>>n;

     int sum=0;
     for(int i=1;i<=n;i++)
     {
        int x;
        cin>>x;
        sum+=x;
     }
     double count=(double)sum/100;

     double in_percent=(count/n)*100;

     cout<<in_percent<<endl;


    return 0;
}