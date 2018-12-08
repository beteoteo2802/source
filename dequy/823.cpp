#include<bits/stdc++.h>
using namespace std;
int n,m;
int dt(int t)
{
    int res=0;
    for(int i=t-1;i>=m;i--){
        res=res+dt(i);
    }
    return res + 1;
}
int main()
{
    cin>>n>>m;
    cout<<dt(n+1)-1;
    return 0;
}

