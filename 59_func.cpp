#include<bits/stdc++.h>
        using namespace std;
        void reverse(string &s)
        {
            int i=0;
            int j=s.size()-1;
            while(i<j)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        int main()
        {
           string s="abc";
           reverse(s);
           cout<<s;
           reverse(s);
           cout<<s;
        }



