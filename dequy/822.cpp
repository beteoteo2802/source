#include<bits/stdc++.h>
using namespace std;
int k,n;
int dt(int x,int t)
{
    if(x==k+1) return 1;
    int m=0;
    for(int i=t-1;i>0;i--){
        m=m+dt(x+1,i);
    }
    return m;
}
int main()
{
    cin>>k>>n;
    cout<<dt(1,n+1);
    return 0;
}

