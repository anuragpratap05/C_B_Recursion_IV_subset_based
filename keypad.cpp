# C_B_Recursion_IV_subset_based
#include<bits/stdc++.h>
using namespace std;

char phone[][10]={"","", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(char in[],char out[], int i, int j )
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    
    int digit=in[i]-'0';
    if(digit==1 or digit==0)
    {
        keypad(in,out,i+1,j);
    }
    for(int k=0;phone[digit][k]!='\0';k++)
    {
        out[j]=phone[digit][k];
        keypad(in,out,i+1,j+1);
    }
    return;
}


    


int main()
{
    char in[100];
    cin>>in;
    char out[100];
    keypad(in,out,0,0);
  
}
