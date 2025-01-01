#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t;
     cin>>t;

     while(t--)
     {
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int check=0;
        
        int sited_in_row_1=min(a,m);
        int sited_in_row_2=min(b,m);

        int remain_sit_in_row_1=m-sited_in_row_1;
        int remain_sit_in_row_2=m-sited_in_row_2;

        int sited_for_c=min(c,remain_sit_in_row_1+remain_sit_in_row_2);

        long long total=sited_in_row_1+sited_in_row_2+sited_for_c;

        cout<<total<<endl;

        


     }


    return 0;
}