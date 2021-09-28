/*
//cyclically rotate an array

Given an array Arr[] of N integers and a positive integer K. The task is to cyclically rotate the array 
clockwise by K. 


Example 1 
INPUT :
N = 5 
Arr[] = {10, 20, 30, 40, 50} 
K = 2 
OUTPUT : 40 50 10 20 30 

Explanation : 
Arr[] = {10, 20, 30, 40, 50} and K = 2 (Two cyclical rotations) 
After 1st rotation = {10, 50, 20, 30, 40} 
After 2nd rotation = {10, 40, 50, 20, 30}


Example 2 
INPUT :
N = 4 
Arr[] = {10, 20, 30, 40}  
K = 1  
OUTPUT : 40 10 20 30

Explanation :  
Arr[] = {10, 20, 30, 40} and K=1 (One cyclical rotation) 
After 1st rotation = {10, 40, 20, 30}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotateby(int arr[],int n)
{
    int x =arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}

void rotate(int arr[],int n,int k)
{
    for(int i=0;i<k;i++)
    rotateby(arr,n);
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{
   int arr[]= {10,20,30,40,50};
   int k=2;
   int n = sizeof(arr)/sizeof(arr[0]);

    rotate(arr,n,k);
    printarray(arr,n);
    
    
}

