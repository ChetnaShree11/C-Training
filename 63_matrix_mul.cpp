#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,m,p,q,sum=0;
            cin>>n>>m>>p>>q;
            int a[n][m];
            int b[p][q];
            int c[n][q];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            for(int i=0;i<p;i++)
            {
                for(int j=0;j<q;j++)
                {
                    cin>>b[i][j];
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<p;j++)
                {
                    for(int k=0;k<p;k++)
                    {
                        sum+=a[i][k]*b[k][j];
                    }
                    c[i][j]=sum;
                    sum=0;
                }
            }
             for(int i=0;i<n;i++)
            {
                for(int j=0;j<p;j++)
                {
                    cout<<c[i][j]<<" ";
                }
                cout<<endl;
            }
        }



