#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    while(q--)
    {
        int l=0;
        int r=n-1;
        int val;
        cin>>val;
        int flag=0;
        while(l<=r)//that condition the loop is running
        {
            int mid=(l+r)/2;
            if(a[mid]==val)
            {
                flag=1;
                break;
            }
            else if(a[mid]>val)
            {
                r=mid-1;
            }
            else //if(a[mid]<val)
            {
                l=mid+1;
            }


        }

        if(flag==1)
        {
            cout<<"found\n";
        }
        else
        {
            cout<<"not found\n";
        }

    }


    return 0;
}