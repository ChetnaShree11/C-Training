#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int a=0;
            int n;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                for(int j=n;j>i;j--)
                {
                    cout<<i+j;
                }
            }
        }
//n(n+1)/2 operations= O(n^2)



