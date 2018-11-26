/*in():in cac so le tu 1->n
s():tong cac so le tu 1->n
*/
#include<bits/stdc++.h>
using namespace std;
int n;
void in(int x)
{
    if(x==1){
        cout<<1<<endl;
    }else{
        if(x==0){
            return;
        }
        if(x%2==1){
            in(x-2);
            cout<<x<<endl;
        }else{
            in(x-2);
            cout<<x-1<<endl;
        }
    }
}
int s(int x)
{
    if(x==1) return 1;
    if(x==0) return 0;
    if(x%2==1) return s(x-2)+x;
    else return s(x-2)+x-1;
}
int main()
{
    cin>>n;
    in(n);
    cout<<s(n);
    return 0;
}
