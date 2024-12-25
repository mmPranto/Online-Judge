#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Calculate the maximum number of toasts each resource can support
    int total_drink = (k * l) / nl; // Total toasts possible from the drink
    int total_limes = c * d;        // Total toasts possible from lime slices
    int total_salt = p / np;        // Total toasts possible from salt

    // Determine the limiting factor (minimum of all resources)
    int total_toasts = min({total_drink, total_limes, total_salt});

    // Calculate the number of toasts each friend can have
    int toasts_per_friend = total_toasts / n;

    cout << toasts_per_friend << endl;


    return 0;
}