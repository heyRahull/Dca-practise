/*
Q.)Let us find out whether the sum of the digits of the given positive integer number N is UNO or not. Given a positive integer number N, reduce the number of digits of N by computing the sum of all the digits to get a new number. If this new number exceeds 9, then sum the digits of this new number to get another number and continue this way until a single digit value is obtained as the ‘digit sum’. The task here is to find out whether the result of the digit sum done this way is ‘1’ or not.

NOTE : 
They named it “Uno” after the rule to announce when only one card is left in one's hand.

If the digit sum result is 1, display a message UNO If the digit sum is not 1 , display a message NOT UNO.

Example : 
Input: N = 51112
Output : UNO

Example : 51122
Output : NOT UNO
*/

#include<iostream>
#include<string>
using namespace std;
int calc(int n)
{
    int r;
    int sum =0;
    while(n>0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    return sum;
}
int main()
{
   int n = 51122;
   int digit = calc(n);
   while(digit>9)
   {
       digit = calc(digit);
   }
   if(digit == 1)
   cout<<"UNO";
   else
   cout<<"NOT UNO";

}
