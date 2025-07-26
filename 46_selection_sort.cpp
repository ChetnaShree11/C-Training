#include<bits/stdc++.h>
        using namespace std;
        int main()
        {   vector<int> v;
           int n;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
           int r=v.size();
           while(r>0)
           {    int max=0,ind;
               for(int i=0;i<r;i++)
               {
                   if(v[i]>=max)
                   {
                       max=v[i];
                      ind=i;
                   }
               }
               swap(v[r-1],v[ind]);
               r--;
           }
           for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<endl;
            }

        }



