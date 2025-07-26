//Prime number(Multiple)
#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n;
           cin>>n;
           int st=1;
           while(st<=n)
           {
               int x,count=0;
               cin>>x;
               int st2=2;
               while(st2<=sqrt(x))
               {
                   if(x%st2==0)
                    count++;
                   st2++;
               }
               if(count==0)
                cout<<"yes"<<endl;
               else
                cout<<"No"<<endl;
               st++;
           }
        }


