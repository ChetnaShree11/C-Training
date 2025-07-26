#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,n1;
            cin>>n;
            if(n%2!=0)
                n=n-1;
            n1=n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            n=n1;
            for(int i=0;i<n;i+=2)
            {
                int c;
                c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
            n=n1;
            for(int i=0;i<(n+1);i++)
            {
                cout<<arr[i]<<",";
            }
        }



