#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           set<int> s;
           int n;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                string command;
                cin>>command;
                if(command=="Insert")
                {
                    int x;
                    cin>>x;
                    s.insert(x);
                }
                else if(command=="Delete")
                {
                    int x;
                    cin>>x;
                    s.erase(x);
                }
                else if(command=="Find")
                {
                    int x;
                    cin>>x;
                    if(s.find(x)==s.end())
                    {
                        cout<<"Not found";
                    }
                    else
                        cout<<"Found";
                }
            }
            for(auto it: s)
            {
                cout<<it<<endl;
            }
        }

