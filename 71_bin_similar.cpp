#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cin>>n;
            while(n!=0)
            {
                cout<<n%2;
                n/=2;
            }
        }
//no. of operations= log[Base2](n)+1
//O(log2(n))
//If n/3 then base changes to 3
