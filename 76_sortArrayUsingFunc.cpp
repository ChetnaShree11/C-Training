#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n;
           cin>>n;
           int arr[n],ele;
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }
           sort(arr,arr+n);//sorts elements from arr(ptr) till n-1
           for(int i=0;i<n;i++)
           {
               cout<<arr[i]<<" ";
           }

        }



