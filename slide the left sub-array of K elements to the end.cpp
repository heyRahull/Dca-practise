/*
Given an array Arr[N] of N integers and a positive integer K. The task is to divide the array into two 
sub-arrays from right after the Kth position and slide the left sub-array of K elements to the end. 


Example 1 :
N=5
INPUT : Arr[] = {10, 20, 30, 40, 50}  
K = 2
OUTPUT : 30 40 50 10 20 

Explanation : 
Arr[] = {10,20,30,40,50} and K=2 
Divide array from after 2nd position and add left sub-array {10,20} to the end. 
So the output is 30 40 50 10 20 

Example 2 :
N=4
INPUT : Arr[] = {10, 20, 30, 40}  
K = 1
OUTPUT : 20 30 40 10 

Example 3 : 
N=4
INPUT : Arr[] = {10, 20, 30, 40}  
K = 3
OUTPUT : 40 10 20 30 

Explanation of example 3 :
10, 20, 30 ,40
After 1 rotation 20,30,40,10
After 2 rotation 30,40,10,20
After 3 rotation 40,10,20,30
/*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateby(int arr[],int n)
{
    int x = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = x;
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
    int arr[] = {10, 20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;

    rotate(arr,n,k);
    printarray(arr,n);
    
}
