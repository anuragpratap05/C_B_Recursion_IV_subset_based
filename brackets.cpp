#include<bits/stdc++.h>
using namespace std;

void brackets(int n,int i, int open , int close, char op[])
{
    if(i==2*n)
    {
        op[i]='\0';
        cout<<op<<endl;
        return;
    }
    
    if(open<n)
    {
        op[i]='(';
        brackets(n,i+1,open+1,close,op);
    }
    
    if(close<open)
    {
        op[i]=')';
        brackets(n,i+1,open,close+1,op);
    }
    return;
}
    
    


int main()
{
    int n;
    cin>>n;
    char op[100];
    brackets(n,0,0,0,op);
}
