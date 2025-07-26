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
           int l=0;
           int r=n-1;
           cout<<"Element= ";
           cin>>ele;
           bool flag=false;
           while(l<=r)
           {
               int mid=(l+r)/2;
               if(arr[mid]==ele)
               {
                   cout<<mid<<endl;
                   flag=true;
                   break;
               }
               else if(arr[mid]>ele)
               {
                   r=mid-1;
               }
               else
               {
                   l=mid+1;
               }
           }
           if(flag==false)
                cout<<"Not found";

        }
//ComplexityL : log(n) [n/2 + n/4 + n/6 + ...]

