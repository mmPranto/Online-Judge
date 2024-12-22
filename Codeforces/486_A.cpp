#include<bits/stdc++.h>
using namespace std;
int main()
{

     long long n;
     cin>>n;
     long long even_sum=(n/2)*((n/2)+1);
     long long odd_count=(n+1)/2;
     long long odd_sum=odd_count*odd_count;
     long long sum=even_sum-odd_sum;

     
     cout<<sum;

    return 0;
}