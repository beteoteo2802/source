#include<bits/stdc++.h>
using namespace std;
int n;
int minn=1000000001;
int a[1000001];
int m(int x)
{
    if(x==1) return a[x];
    int k=m(x-1);
    return min(k,a[x]);
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("minarr.inp","r",stdin);
    freopen("minarr.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<m(n);
    return 0;
}
