#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){


    ll a,b;
    cin>>a>>b;
    if(a==b || b>a) {

         cout<<40+(b*2)<<endl;
         return 0;
    }
    ll c= (b*2)+40;
    ll d=40 + 40 + (a-40)*2 ;
    cout<<max(c,d) <<"\n";
    return 0;
}
