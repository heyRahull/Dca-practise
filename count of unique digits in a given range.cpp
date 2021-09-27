/*
Write a program to find the count of numbers that consists of unique digits.
Input:
Input consists of two Integer lower and upper value of a range
Output:
The output consists of a single line, print the count of unique digits in a given range. Else Print”No Unique Number“
Solution:
Input –
10
15
Explanation : 10 11 12 13 14 15 = 5
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l = 10;
    int r = 15;
    int count =0;

    for(int i=l;i<=r;i++)
    {
        int num =i;
        bool visited[10]={false};

        while(num)
        {
            if(visited[num%10])
            break;

            visited[num%10]=true;
            num =num/10;
        }
        if(num == 0)
        count++;
        
    }
    if(count>0)
    cout<<count;
    else
    cout<<"No Unique Number";
    
    
}
