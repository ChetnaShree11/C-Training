#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            queue<int> q;
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                string command;
                cin>>command;
                if(command=="Push")
                {
                    int x;
                    cin>>x;
                    q.push(x);
                }
                else if(command=="Pop")
                {
                    if(q.size()==0)
                        continue;
                    q.pop();
                }
                else if(command=="Front")
                {
                    if(q.size()==0)
                        continue;
                    cout<<q.front()<<endl;
                }
            }
        }



