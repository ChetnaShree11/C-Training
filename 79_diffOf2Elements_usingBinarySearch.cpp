#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n;
           cin>>n;
           int arr[n],ele,two;
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }
           cout<<"Element= ";
           cin>>ele;
           bool flag=false;
           for(int l=0;l<n-1;l++)
           {
            flag=false;
            int li=l;
            int r=n-1;
            while(li<=r)
           {
               int mid=(li+r)/2;
               if(arr[mid]==(ele+arr[l]))
               {
                   two=arr[mid];
                   flag=true;
                   break;
               }
               else if(arr[mid]>(ele+arr[l]))
               {
                   r=mid-1;
               }
               else
               {
                   li=mid+1;
               }
           }
           if(flag==true)
           {
               cout<<two<<"-"<<arr[l]<<"="<<ele<<endl;
           }
           }
        }

