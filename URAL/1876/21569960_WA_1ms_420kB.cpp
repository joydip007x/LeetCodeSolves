#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){


    ll a,b;
    cin>>a>>b;
    if(a==b) {

         cout<<40+(b*2)<<endl;
         return 0;
    }
    if(b>a){

          cout<<40+(b*2)<<endl;
          return 0;
    }
    cout<<40+((a-40))+40<<"\n";
}
