#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cin>>n;
            for(int i=1;i<n;i++)
            {
                for(int j=2*i;j<n;j+=i)
                {
                    cout<<i*j<<" ";
                }
            }
        }
//n+n/2+n/3=O(nlogn)
