#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,m;
            cin>>n>>m;
            int a[n][m];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            for(int i=0;i<n;i++)
            {
                int k=m-1;
                for(int j=0;j<=k;j++)
                {
                    swap(a[i][j],a[i][k]);
                    k--;
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<a[i][j];
                }
                cout<<"\n";

            }
        }



