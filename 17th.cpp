#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cin>>n;
            int i=0;
            int st=2;
            while(st<n)
            {
                if(n%st==0)
                 {
                    i++;
                 }
                st++;
            }
            if(i==0)
                cout<<"Prime number";
            else
                cout<<"Not a prime number";
        }


