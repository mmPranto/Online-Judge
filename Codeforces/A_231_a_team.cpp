#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int y=0,z=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
           y=y+arr[i][j];
        }
        if(y>=2)
        {
            z=z+1;
        }
        y=0;
    }
    cout<<z;
}
