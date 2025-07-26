#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            string s;
            cin>>s;
            int st=0,en=s.size()-1;
            while(st<s.size())
            {
                if(s[st]!=s[en])
                {
                    cout<<"No";
                    break;
                }
                st++;
                en--;
                if(st==s.size())
                    cout<<"Yes";
            }
        }


