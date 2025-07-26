#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n1,n;
           cin>>n1;
           n=(n1/2)+1;
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
                   if(j==1||j==(n-i)+1)
                    cout<<"* ";
                    else
                        cout<<"  ";
                   j--;
               }
               cout<<endl;
               i++;
           }
           i=2;
           while(i<=n)
           {
               int j=(n-i);
               while(j>0)
               {
                   cout<<" ";
                   j--;
               }
               j=1;
               while(j<=i)
               {
                   if(j==1||j==i)
                    cout<<"* ";
                   else
                    cout<<"  ";
                   j++;
               }
               cout<<endl;
               i++;
           }
        }

//consider as grid of n*n and print * for i=j or for other diagonal i.e i+j=n+1
