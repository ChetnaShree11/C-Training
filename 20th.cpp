#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n,n1,c;;
           cin>>n>>n1;
           while(n%n1!=0)
           {

               c=n1;
               n1=n%n1;
               n=c;
           }
           cout<<n1;
        }


