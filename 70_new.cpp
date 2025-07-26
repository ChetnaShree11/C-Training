#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cin>>n;
            int a[n];
            int i=0,j=n-1;
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            for(int i=0;i<j;i++)
            {
                while(a[j]>a[i])
                    j--;
            }
        }
//Time complexity is n here both loops are working but there is single iteration


