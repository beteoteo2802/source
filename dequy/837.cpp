#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000001];
int tc(int x)
{
    if(x==1) return a[1];
    if(x%2==0) return tc(x-1)-a[x];
    else return tc(x-1)+a[x];
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<tc(n);
    return 0;
}
