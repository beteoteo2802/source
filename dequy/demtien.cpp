#include<bits/stdc++.h>
#define db(x) cerr << #x << " : " << x << endl;
using namespace std;
int n,k,x;
int a[1000001],b[1000001];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]=1;
    }
    for(int i=1;i<=k;i++){
        x=999999;
        for(int j=1;j<=n;j++){
            if(i-a[j]<0) continue;
            if(b[i-a[j]]>0) x=min(x,b[i-a[j]]);
        }
        if(x!=999999 && b[i]!=1) b[i]=x+1;
        //db(i);
        //db(x);
    }
    cout<<b[k];
    return 0;
}
