#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int ans=0;
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                for(int j=i+1;j<=n;j++)
                {
                    ans+=i*j;
                }
            }
            cout<<ans<<endl;
        }



