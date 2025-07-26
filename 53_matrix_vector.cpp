#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n,m;
           vector<vector<int>> v;
           cin>>n>>m;
           for(int i=0;i<n;i++)
           {
               vector<int> row;
               for(int j=0;j<m;j++)
               {
                  int x;
                  cin>>x;
                  row.push_back(x);
               }
               v.push_back(row);
           }
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   cout<<v[i][j]<<" ";
               }
               cout<<endl;
           }
        }



