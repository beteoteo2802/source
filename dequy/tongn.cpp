#include<bits/stdc++.h>
using namespace std;
long long n;
long long sum(long long x)
{
    if(x==1) return 1;
    return sum(x-1)+x;
}
int main()
{
    freopen("tongn.inp","r",stdin);
    freopen("tongn.out","w",stdout);
    cin>>n;
    cout<<sum(n);
    return 0;
}
