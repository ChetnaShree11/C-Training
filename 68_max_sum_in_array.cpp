#include<bits/stdc++.h>
        using namespace std;
        int main()
        {   int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            int x=n-1;
            while(x!=0)
            {
                for(int i=0;i<n-1;i++)
                {
                    if(arr[i]>arr[i+1])
                        swap(arr[i],arr[i+1]);
                }
                x--;
            }
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" "<<endl;
            cout<<arr[n-1]<<"+"<<arr[n-2]<<"="<<arr[n-1]+arr[n-2];
        }


