#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,o=0,i=1,y;
            cin>>n;
            while(i<=n)
            {
                y=sqrt(i);
                if(y*y==i)
                    o++;
                i++;
            }
            cout<<o;
        }


