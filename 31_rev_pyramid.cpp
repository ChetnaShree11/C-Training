#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
           cin>>n;
           int i=1;
           while(i<=n)
           {
               int j=(i-1);
               while(j>0)
               {
                   cout<<" ";
                   j--;
               }
               j=(n-i)+1;
               while(j>0)
               {
                   cout<<"* ";
                   j--;
               }
               cout<<endl;
               i++;
           }
        }


