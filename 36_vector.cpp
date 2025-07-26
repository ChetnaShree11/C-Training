#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            vector<int> v;//Dynamic array
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
            int b=v.size();
            cout<<"size= "<<b<<endl;
            v.pop_back();
            b=v.size();
            cout<<"size= "<<b<<endl;
            for(int i=0;i<b;i++)
            {
                cout<<v[i]<<endl;
            }

        }



