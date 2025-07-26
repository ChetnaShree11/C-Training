#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cin>>n;
            vector<int> v;
            for(int i=1;i<=n;i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
            int max=v[0],max1=v[0];
            for(int i=1;i<v.size();i++)
            {
                if(v[i]>max)
                    max=v[i];
            }
            for(int i=1;i<v.size();i++)
            {
                if(v[i]==max)
                    continue;
                if(v[i]>max1)
                    max1=v[i];
            }
            cout<<max<<max1;

        }


