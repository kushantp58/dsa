#include <iostream>
#include <ctime>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void prime_numbers(int n)
{
   bool a[n+1];  // boolean array for initializing all entries to true
   memset(a,true,sizeof(a)); 
// Sieve of Eratosthenes
    for(int i=2;i*i<=n;i++)
    { 
        if(a[i] == true)
            {
                for(int j= i*i;j<=n;j+=i)
                    a[j]=false;
            }
          
    }
// printing all prime numbers
    for (int i=2;i<=n;i++)
        if(a[i]==true)
         cout<<i<<" ";
}

int main(void)
{
    int n ;
    cout<<"Enter the range upto which you want prime numbers:";
    cin>>n;
    cout<<"The prime numbers in ur entered range are:\n";
    prime_numbers(n);
    return 0;
}