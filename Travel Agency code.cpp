/*
Q.) For hiring a car, a travel agency charges R1 rupees per hour for the first N hours and then R2 rupees 
per hour. Given the total time of travel in minutes is X. The task is to find the total traveling cost in rupees. 
Note: While converting minutes into hours, ceiling value should be considered as the total number of 
hours. 
For example: If the total travelling time is 90 minutes, 
i.e. 1.5 hours, it must be considered as 2 hours. 

Example 1 : 
INPUT
R1 = 20
N = 4 (hours) 
R2 = 40 
X = 300 (minutes) 

OUTPUT : 120 

Explanation : 
Total travelling hours = 300/60 = 5 hours 
Rupees 20/hours for first 4 hours = 20 * 4 = 80 rupees 
Rupees 40/hours in 5th hour = 40 * 1 = 40 rupees 
Hence, the total travelling cost = 80 + 40 = 120 rupees 

Example 2 :
INPUT
R1 = 30
N = 5 (hours) 
R2 = 35 
X = 500 (minutes) 

OUTPUT : 290 

Explanation : 
Total travelling hours = 500/60 = 8.33, Ceiling value of 8.33 = 9 hours 
Rupees 30/hours for first 5th hours = 30 * 5 = 150 rupees 
Rupees 35/hours in 4th hour = 35 * 4 = 140 rupees 
Hence, the total travelling cost = 150 + 140 = 290 rupees 

Example 3 : 
INPUT
R1 = 30
N = 10 (hours) 
R2 = 35 
X = 5 (minutes) 

OUTPUT : 30 

Explanation : 
Total travelling hours = 3/60 = 0.05, Ceiling value of 0.05 = 1 hour 
Rupees 30/hour for first 10 hours = 30 * 1 = 30 rupees
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1 = 30;
    int n = 5;
    int r2 = 35;
    int x = 500;

    int hours = (x+59)/60;
    int cost;

    if(hours>n)
    {
        cost = n*r1 + (hours - n)*r2;
    }
    else{
        cost = n*r1;
    }

    cout<<cost;
    
}


