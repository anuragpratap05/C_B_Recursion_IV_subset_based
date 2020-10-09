# C_B_Recursion_IV_subset_based
#include<bits/stdc++.h>
using namespace std;


int profit(int n, int c, int wt[], int price[])
{
    if(n==0 or c==0)
    {
        return 0;
    }
    
    int ans=0;
    int inc=0;
    int exc=0;
    
    if(wt[n-1]<=c)
    inc=price[n-1]+profit(n-1,c-wt[n-1],wt,price);
    
    exc=profit(n-1,c,wt,price);
    
    ans=max(inc,exc);
    return ans;
    
}
    


int main()
{
   int wt[]={1,2,3,5};
   int price[]={40,20,30,100};
   int n=4;
   int c=7;
   int x=profit(n,c,wt,price);
   cout<<x;
}
