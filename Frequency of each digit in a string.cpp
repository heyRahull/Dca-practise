/*
Given a string, consisting of alphabets and digits, find the frequency of each digit in the given string.
Input Format
The first line contains a string, which is the given number.
Constraints
All the elements are made of English alphabets and digits.
Output Format
Print ten space-separated integers in a single line denoting the frequency of each digit .
Sample Input 
a11472o5t6
Sample Output 
0 2 1 0 1 1 1 1 0 0
Explanation : 
0 appears 0 times, 1 appears 2 times, 2 appears 1 times, 3 appears 0 times, 4 appears 0 times, 5 appears 1 times
6 appears 1 times, 7 appears 1 times, 8 appears 0 times, 9 appears 0 times
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100] = "a11472o5t6";
    int n =strlen(c);
    int count = 0;
    char ch = '0';

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[j]==ch)
            count++;
        }
        cout<<count;
        ch++;
        count = 0;
    }
}
