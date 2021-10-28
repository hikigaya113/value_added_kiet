#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void hartals(int n, int p, int h[])
{
    int count =0;
    int size = p;
    for(int i =1; i<=n; i++)
    {
             if((i%7)==0 || (i%7) ==6)
             {
               continue;
             }
        for(int j =0; j<size; j++)
        {
             if((i%h[j])==0)
             {
                 count++;
                
                 break;
             }
        }
    }
    cout<<count;
}
int main() {
    int input; // no of inputs
    cin>>input;
    while(input--)
    {
     int n;  //no of days
        cin>>n;
        int p; //no of political parties
        cin>>p;
        int h[p]; //vector containing the days of hartals
        for(int i =0; i<p; i++)
        {
               cin>>h[i];
        }
        hartals(n, p, h);
        cout<<endl;
    }
    
}
