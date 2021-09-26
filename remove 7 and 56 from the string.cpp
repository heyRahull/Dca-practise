#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100] = "abh7ide56ipq";
    int n = strlen(c);
    for(int i=0;i<n;i++)
    {
        if(c[i]=='7')
        c[i]='\0';
        else if(c[i]=='5'&&c[i+1]=='6')
        {
            c[i]='\0';
            c[i+1]='\0';
        }
    }        
    for(int i=0;i<n;i++)
    cout<<c[i];
}
