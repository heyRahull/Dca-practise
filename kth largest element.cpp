//kth largest element
#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    int arr[] ={10,20,30,40,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    priority_queue<int,vector<int>,greater<int>>minh;

    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        minh.pop();
    }
    cout<<minh.top();
   

}

