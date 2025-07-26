#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int t;
            cin>>t;
            for(int i=0;i<t;i++)
            {
                int n,count=0;
                cin>>n;
                set<char> m;
                string s;
                cin>>s;
                for(int j=0;j<n;j++)
                {
                    if(m.find(s[j])==m.end())
                    {
                        count+=2;
                        m.insert(s[j]);
                    }
                    else
                        count++;
                }
                cout<<count<<endl;
            }

        }



