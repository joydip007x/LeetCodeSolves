///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
/*
     If opportunity doesn't knock, build a door.
    Success is how high you bounce when you hit bottom.
*/
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

#define  sz                         100000
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

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

int sdivide(string a  , ll b)
{
    bool cas=false;
    if(  (a[0]=='-'  && b>0) || (a[0]!='-'  && b<0) )  {cas=true;}

    ////////https://stackoverflow.com/questions/11720656/modulo-operation-with-negative-numbers
    //////////////
//    jokhon nisesse bibajjo na tokon >>>
//    1243%15=13;
//    1243%-15=-2;
//    -1243%-15=-13;
//    -1243%15=2;
//    i  first made all of  abs(a) (if - exist)  and abs(b) to clearly find VAGSES 0 ki na ..that what i need :O
    /////////////
     b=abs(b);
   if ( a[0]=='-' && b<0)
   {
       reverse(all(a)); a[a.size()-1]='\0'; reverse(all(a));
       //////////LIght oj doesnot support STRING_pop_ back faeture ;;its noy C++11.0.2
       b=abs(b);
   }
    ll ten=1, modd=b,ans=0,i=a.size()-1;
    for ( ;   i>=0  &&( a[i]>=48 && a[i]<=57) ; i--)
    {
        ans=ans+((a [i] -'0'  )*ten)%b;
        ten= (ten*10)%b;//////////////protibar ekok dosok kore bartese .. so lets fuck it up :) and it also supports same
        /////fuking theory  if i am doing (x*ten)%b in 2 line abobe then its== >>ten=(  ten%b ) same ;;watch 75 line:::::::
        //////((a [i] -'0'  )*ten)%b  ekahne ten* mara hosse abar %b kora hosse so oi back2 back   ten= (ten*10)%b; korai better ete 10^1000 face korte hobe strlen 1000
        /////holeo and modular law o manlo
    }
    ans=ans%b;
    if(cas) {ans=-ans;}
    ans=(ans+b)%b;
    return ans;
}
int main()
{
        ll t;
        o(t);
        LOOP(i,0,t)
        {
            string s; ll b;
            cin>>s;
            o(b);
            printf("Case %lld: ",i+1);
            ll V=sdivide ( s , b);
            if(V==0) printf("divisible\n");
            else printf("not divisible\n");
        }
}

