#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            stack<char> st;
            string s;
            int flag=0;
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='(')
                {
                    st.push(s[i]);
                }
                else if(s[i]==')')
                {
                    if(st.size()==0)
                    {
                        cout<<"Not valid";
                        flag=1;
                        break;
                    }
                    st.pop();
                }
            }
            if(st.size()!=0)
                cout<<"Incorrect"<<endl;
            else if(flag==0)
                cout<<"Correct";
        }



