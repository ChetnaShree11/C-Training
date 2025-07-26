#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n,n1;
           cin>>n>>n1;
           int i=n;
           while(1)
           {
               if((i%n==0)&&(i%n1==0))
               {
                    cout<<i;
                    break;
               }
               i++;
           }
         }

//n*n1=gcd*lcm
