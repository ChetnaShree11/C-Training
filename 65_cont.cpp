#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int ans=0;
            int n,m;
            cin>>n>>m;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    ans+=i*j;
                }
            }
            cout<<ans<<endl;
        }
//m*n operations, so TIME COMPLEXITY= O(m*n)



