#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,m,sum=0,sum1=0;
           cin>>n>>m;
           int arr[n][m];
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   cin>>arr[i][j];
               }
           }
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   if(i==j)
                    sum+=arr[i][j];
                   if((i+j)==(m-1))
                    sum1+=arr[i][j];
               }
           }
           cout<<sum<<"\n"<<sum1;

        }



