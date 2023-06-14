#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define sz 1000000+1000

string s1 ,s2;
ll lps[sz] ,t;
void lpscalc( string &pat){
   int i=1, len=0;
   lps[0]=0;
   while(i<pat.size()){
     if(pat[i]==pat[len]){
        lps[i]=len+1;
        len++;
        i++;
     }
     else{
        if(len) len=lps[len-1];
        else lps[i]=0,i++;
     }
   }
}
int kmp(string &str,string  &pat ){

  int i=0 , j=0 ;
  while(i<str.size() and j<pat.size() ){

    if(str[i]==pat[j]) i++,j++;
    else{
        if(j) j=lps[j-1];
        else i++;
    }
  }
  return j;
}
int main()
{
    cin>>t;
   while( t-- ){
      cin>>s1;
      s2=s1;
      reverse(s2.begin() , s2.end() );
     lpscalc(s2);
     int r=kmp(s1,s2);
    /// cout<<r<<": : : : : : : : : : : : :  :" <<endl;
     printf("%d",s1.size()+ s1.size()-r  );
    // for(int i=r; i<s2.size(); i++) printf("%c",s2[i]);
     printf("\n");
   }
}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
