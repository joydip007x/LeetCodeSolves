///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
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

#define  sz                         1000006
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                     unsigned   long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
 long double   g[1000000+5];
 int main()
{
   /* http://shahidul-brur.blogspot.com/2017/05/lightoj-1045-digits-of-factorial.html */
  ///  fast;
    unsigned long long ans=0;
    g[1]=0;
    for( unsigned long long  p=2 ; p<=1000000 ; p++)
    {
        g[p]=log10(p)+g[p-1];
     ///   ans=g[p];
    }
    ll tcas;
    cin>>tcas;
    LOOP(i,0,tcas)
    {
        long long x,y;
       /// cin>>x>>y;
       scanf("%lld %lld",&x,&y);
        ///
        long long z=(  g[x]/(log10(y))  )+1;
      ///  cout<<" g [ zx ] "<<g[x]<<"       " <<log10(y)<<"      "<<endl;
     ///   cout<<"Case "<<i+1<<": ";
        printf("Case %d: %lld\n",i+1,z);
    }
    ////cout<<g[1000000];
}
