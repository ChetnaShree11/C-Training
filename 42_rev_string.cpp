#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            string s;
            cin>>s;
            int st=0,en=s.size()-1;
            while(st<s.size()/2)
            {
                int c=s[st];
                s[st]=s[en];
                s[en]=c;
                st++;
                en--;
            }
            cout<<s;
        }
//swap(s[i],s[j])

