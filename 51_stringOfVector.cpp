#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            vector<string> v;
            int n,count=0;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                string x;
                cin>>x;
                v.push_back(x);
            }
            for(char j='a';j<='z';j++)
            {
                count=0;
                for(int i=0;i<v.size();i++)
                {
                    if(v[i][0]==j)
                        count++;
                }
                if(count!=0)
                    cout<<j<<"="<<count<<endl;
            }

        }


