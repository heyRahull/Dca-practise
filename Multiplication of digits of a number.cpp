/*
Write a program to find multiplication of a given number
	1) Input = 1234
    Ouput = 24 ( Logic : 1*2*3*4)
	2) Input = 352
    Ouput = 30 ( Logic : 3*5*2)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 352;
    int mul=1;

while(n>0)
{
    int r = n%10;
    mul = mul * r;
    n = n/10;
}     
cout<<mul;
}
