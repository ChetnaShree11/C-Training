#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,n1;
            cin>>n>>n1;
            for(int i=n;i<=n1;i++)
            {
               int st=2,count=0;
               while(st<i)
               {
                   if(i%st==0)
                    count++;
                   st++;
               }
               if(count==0)
                cout<<i<<endl;

            }
        }


