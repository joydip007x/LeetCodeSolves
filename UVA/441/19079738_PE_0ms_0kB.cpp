#include<bits/stdc++.h>
using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         1000000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9
#define  inf                     0x7fffffff

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
vector<int>v,s;
int n,k,t,vis[1000],x;
ll callmedad( ll len, int  st){

    if(s.size()==6)
    {
        for(vector<int>::iterator it=s.begin() ; it!=s.end() ; it++){
            if(it!=s.begin() )cout<<" ";
            cout<<*it;
        }
        cout<<"\n";
        ret 1;
    }
   for( int a=st ; a<v.size() ; a++){

        if(vis[a]) continue;
        vis[a]=1;
        s.push_back( v[a] );
        callmedad(len-1,a+1);
        s.pop_back();
        vis[a]=0;
   }
   ret 1;
}
int main()
{
   while(cin>>n and n){
    v.clear();    s.clear(); v.pb(-1);
    for(ll i=1 ; i<=n ; i++) cin>>x, v.pb(x);
    memset(vis,0,sizeof vis);
    callmedad(n,1);
    cout<<"\n";
    //cout<<"\n";
   }
//8  1  2  3  5  8  13  21  34

}
