/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;
#define pb push_back 
#define pf push_front

int main()
{
   int count1 = 0,count2 =0,ref=0,req ;
   double result ;
   string s1,s2 ;
   cin >> s1 >> s2 ;
   int length1 = s1.length() ;
   for(int i=0;i<length1;i++)
   {
   	   if(s1[i]=='+')
   	   {
   		  count1++ ;
   	   }
   	   else
   	   {
   		  count1-- ;
   	   }
   }
   for(int i=0;i<length1;i++)
   {
   	    if(s2[i]=='?')
   	    {
   		   ref++ ;
   	    }
   	    else if(s2[i]=='+')
   	    {
   		  count2++ ;
   	    }
   	    else
   	    {
   		   count2-- ;
   	    }
   }
   req = count1 -count2 ;
   if((req+ref)%2!=0 || ref<abs(req))
   {
   	result = 0 ;
   	cout << result ;
   	return 0 ;
   }
   else
   {
   	    int m = (ref+abs(req))/2 ; 
        int c = 1 ;
        for(int i=0;i<m;i++)
            c *= ref-i ;
        for(int i=2;i<=m;i++)
            c /= i ;
        result = (double)c/(1<<ref) ;
   }
    //cout << std::setprecision(12) << result ;
    printf("%0.12f\n",result);
  return 0 ;
}