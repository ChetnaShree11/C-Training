#include<bits/stdc++.h>
        using namespace std;
        int main()
        {   int n,max=0,max2=0;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            for(int i=0;i<n;i++)
            {
                if(arr[i]>max)
                {
                    max2=max;
                    max=arr[i];
                }
            }
            cout<<max<<"+"<<max2<<"="<<max+max2;
        }


