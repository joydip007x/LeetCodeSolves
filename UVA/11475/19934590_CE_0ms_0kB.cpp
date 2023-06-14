#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 100000+1000

char s1[sz] ,s2[sz] ;
ll lps[sz] ;
void lpscalc( char pat[]){

   int i=1, len=0;
   lps[0]=0;
   while(i<strlen(pat)){
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
int kmp(char str[] , char pat[] ){

  int i=0 , j=0 ;
  while(i<strlen(str) and j<strlen(pat)){

    if(str[i]==pat[j]) i++,j++;
    else{
        if(j) j=lps[j-1];
        else i++;
    }
    if(j==strlen(pat)) return j;
  }
  return j;

}
int main()
{
   while(scanf("%s",&s1)){
     strcpy(s2,s1);
     strrev(s2);
    /// cout<<"Here String= "<<s1<<" AND Pattern-> "<<s2<<endl;
     lpscalc(s2);
     int r=kmp(s1,s2);
     printf("%s",s1);
     for(int i=r; i<strlen(s2); i++) printf("%c",s2[i]);
     printf("\n");
   }
}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
