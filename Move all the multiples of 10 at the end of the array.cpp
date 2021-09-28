#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 12, 5, 40, 30, 7, 50, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        if(arr[i]%10!=0)
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10==0)
        cout<<arr[i]<<" ";
    }
}
