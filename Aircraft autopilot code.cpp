/*
Most modern aircrafts are equipped with an autopilot system – one of the most useful features in fighter jets. In the beta testing of autopilot mode, one of the inputs is a string of literals containing the directions, which is fed into the flight computer before the take-off. The jet plane is put on an auto-landing mode that enables the plane to land automatically once all the directions in the string are complete Given the directions in the string str, the task here is to find out whether the jet plane returns to the same returns to the same
position on the base where it took off.

->The directions are North(N), South(S), West(W) and East(E).
->Display a message "Returned Successfully" if the plane returns to the starting position.
->Display a message "Not Returned Successfully" if the plane does not return to the starting position.

Example 1 :
Input : NESW(Value of str)
Output : Returned Successfully.

Example 2 : 
Input : NNWESW(Value of Str)
Output : Not Returned Successfully

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "NNESW";
    int n = str.length();
    int N=0,S=0,E=0,W=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='N')
        N++;
        else if(str[i]=='S')
        S++;
        else if(str[i]=='E')
        E++;
        else if(str[i]=='W')
        W++;
    }

    if(N == S && E == W)
    cout<<"Reached Successfully.";
    else 
    cout<<"Not Reached Successfully.";
}
