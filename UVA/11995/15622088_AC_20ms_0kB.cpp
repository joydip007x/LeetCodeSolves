///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018	*///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag 	          long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb		                  push_back
#define  ppb                  	  pop_back()
#define  pii 		              pair<long long int , long long int >
#define  msi 	                  map< string,long long int>
#define  vi 		                  vector<long long int >
#define  iit                		  iterator it,it1,it2
#define  iip 	                  iterator ip,ip1,ip2

#define  sz 		                100000
#define  check(x) 	        cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c) 		            cin>>c
#define  o(c) 		            scanf("%lld",&c);
#define  mz(c,r)   	        long long r=c;while(c--)
#define  till(c)                 while(c--)

#define  fs                       first
#define  sc                      second
#define  pi 		                acos(-1.0)
#define  eps 		            1e-9

#define  gaira                 printf("::: pias abal :::::::::::::  \n")
#define notrue 		        false
#define ifnot 		            else
#define eee 		            cout<<endl
#define ll                        long long
#define l                          long

int main()
{
    l n;
    while( bool (cin>>n)!=false)
    {
        stack <l >Stk;
        queue<l >Que;
        priority_queue<l >Prior;
        bool xs, xq,xpq;
        xs=xq=xpq=true;
        till(n)
          {
              l x;
              cin>>x;
              switch(x)
              {
           case 1: l xx;cin>>xx;
                 if(xs)  {Stk.push(xx);}
                 if(xpq) {Prior.push(xx);}
                 if(xq){Que.push(xx);}
                break;
           case 2:
                      l yy;cin>>yy;
                  if(xs) {   if( !Stk.empty() && yy==Stk.top() ){ Stk.pop();}
                    else {xs=false;}
                  }
                 if(xpq) {      if (!Prior.empty() && yy==Prior.top()) {Prior.pop();      }
                    else {xpq=false;}
                 }
                 if(xq) {         if(!Que.empty() && yy==Que.front()){Que.pop();}
                    else {xq=false;}
                 }
                    break;
              }
          }  if( xs && !xq &&  !xpq )  cout<<"stack"<<endl;
             else if( !xs && xq && !xpq)  cout<<"queue"<<endl;
             else if(!xs && !xq && xpq)  cout<<"priority queue"<<endl;
             else if (  xs || xq|| xpq   ) cout<<"not sure"<<endl;
             else cout<<"impossible"<<endl;

    }
}
