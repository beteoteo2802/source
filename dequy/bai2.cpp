/*cs:in cac chu so cua n tu cuoi len
tcs: tinh tong cac chu so cua n
dem: dem so cach tao day n so chi gom 0,1,2
*/

#include<bits/stdc++.h>
using namespace std;
int n,k;
void cs(int x)
{
    if(x<10){
        cout<<x<<endl;
    }else{
        cs(x/10);
        cout<<x%10<<endl;
    }
}
int tcs(int x)
{
    if(x<10) return x;
    return tcs(x/10)+x%10;
}
int dem(int x,int k)
{
    if(x==n+1) return 1;
    if(k==0 || k==1 || k==2) return dem(x+1,0)+dem(x+1,1)+dem(x+1,2);
}

int main()
{
    cin>>n;
    //cs(n);
    //cout<<tcs(n);
    cout<<dem(1,0);
    return 0;
}
