/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define LOOP(i,L,U) for(long long int i=(long long int)L;i<U;i++)
#define LOOPeq(i,L,U) for(long long int i=(long long int)L;i<=U;i++)
#define preflag long long  int flag=0,i=0,j,k=0

#define pb push_back
#define pii pair<int , int >
#define msi map< long long int,string>
#define vi vector<int >

#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define until0(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

int main()
{
  msi m;
  msi::iterator it;
  string s;
    preflag;
    i(k);
    LOOP(i,0,k)
    {
        long long int g,h;
        cin>>g>>h;
        g=(g*10)+h;
        cin>>s;
       /// m.insert(s);
        m[g]=s;
    }
    i(j);
    LOOP(i,0,j)
{
   long long int g,h,swag=0;
        cin>>g>>h;
        g=(g*10)+h;
    for(it=m.begin();it!=m.end();it++)
    {

       /// if(swag-1==j) break;
        if(it->first==g) {cout<<it->second;swag++;cout<<endl; break;}
    }

}
}


