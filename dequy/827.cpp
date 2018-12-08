#include<bits/stdc++.h>
using namespace std;
int k,n,m;
int dt(int x,int t)
{
    if(x==k+1) return 1;
    int res=0;
    for(int i=t;i<=n;i++){
        res=res+dt(x+1,i);
    }
    return res;
}
int main()
{
    cin>>k>>n>>m;
    cout<<dt(1,m);
    return 0;
}



