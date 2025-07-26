#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           set<string> s;
           int n;
           cin>>n;
            for(int i=1;i<=n;i++)
            {
                string x;
                cin>>x;

                if(s.find(x)==s.end())
                {
                    cout<<"NO"<<endl;
                }
                else
                    cout<<"YES"<<endl;
                s.insert(x);

            }
        }

