#include<bits/stdc++.h>
using namespace std;
int n,k;
int x;
int a[1000001],b[1000001];

int main()
{
    cin>>n>>k;
    //for(int i=0;i<=1000001;i++) b[i]=99999;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=k;i++){
        x=999999;
        for(int j=1;j<=n;j++){
            if(i-a[j]<0){
                continue;
            }
            if(i==a[j]){
                b[i]=1;
                break;
            }
            if(b[i-a[j]>0) x=min(b[i-a[j]],x);
        }
        if(x!=999999) b[i]=x+1;
        else b[i]=0;
    }//1 3 4     3 6
    if(b[k]!=0) cout<<b[k]<<' ';
    //else cout<<-1;
    for(int i=1;i<=k;i++) cout<<b[i]<<' ';
    return 0;
}
