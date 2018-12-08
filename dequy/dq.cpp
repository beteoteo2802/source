#include<bits/stdc++.h>
using namespace std;
int n,k;
int dt(int x,int t)
{
    if(x==k+1) return 1;
    int j=0;
    for(int i=t-1;i>0;i--){
        j+=dt(x+1,i);
    }
    return j;
}
int main()
{
    cin>>n>>k;
    cout<<dt(1,n+1);
    return 0;
}
