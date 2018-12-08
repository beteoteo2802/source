#include<bits/stdc++.h>
using namespace std;
int k;
int n,S;
int a[1000001];
bool s(int x,int Su)
{
    if(x<0) return false;
    if(Su==0) return  true;
    bool y=s(x-1,Su-a[x]);
    bool z=s(x-1,Su);
    return(z||y);
}
int main()
{
    freopen("tongs.inp","r",stdin);
    freopen("tongs.out","w",stdout);
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>n>>S;
        for(int j=1;j<=n;j++) cin>>a[j];
        cout<<int(s(n,S))<<endl;
    }
    return 0;
}
