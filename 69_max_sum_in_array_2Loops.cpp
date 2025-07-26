#include<bits/stdc++.h>
        using namespace std;
        int main()
        {   int n,maxSum=0,temp=0;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                   temp=arr[i]+arr[j];
                   if(temp>maxSum)
                        maxSum=temp;
                }
            }
            cout<<maxSum;
        }


