#include<bits/stdc++.h>
using namespace std;
string s;
int k;
int xau(int x,int y)
{
    if(s[x]!=s[y]){
        return 0;
    }
    if((x==y || x==y-1) && s[x]==s[y]) return 1;
    if(s[x]==s[y]){
        xau(x+1,y-1);
    }
    //if((x==y || x==y-1) && s[x]==s[y]) return 1;
}
int main()
{
    freopen("ispalin.inp","r",stdin);
    freopen("ispalin.out","w",stdout);
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>s;
        int n=s.length();
        cout<<xau(0,n-1)<<endl;
    }
    return 0;
}
