//Armstrong number
#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n,n1,sum=0;
           cin>>n;
           n1=n;
           while(n!=0)
           {
               int r=n%10;//scope
               sum=sum+(r*r*r);
               n=n/10;
           }
            if(sum==n1)
                cout<<"Yes";
            else
                cout<<"No";
        }


