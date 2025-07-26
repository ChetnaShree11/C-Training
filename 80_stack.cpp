#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            stack<int> st;
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
                    st.push(x);
                }
                else if(command=="Pop")
                {
                    if(st.size()==0)
                        continue;
                    st.pop();
                }
                else if(command=="Top")
                {
                    if(st.size()==0)
                        continue;
                    cout<<st.top()<<endl;
                }
            }
        }



