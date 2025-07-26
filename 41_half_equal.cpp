#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            string s;
            cin>>s;
            int st=0,en=s.size();
            if(en%2!=0)
                cout<<"No";
            else
            {
                int st1=(en/2);
                while(st<(en/2))
                {
                    if(s[st]!=s[st1])
                    {
                        cout<<"No";
                        break;
                    }
                    st++;
                    st1++;

                }
                if(st==(en/2))
                    cout<<"Yes";
            }
        }


