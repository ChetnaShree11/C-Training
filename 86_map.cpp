#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           map<int,int> m;//of number of ocurance of an element like 3:2,6:3,2:3,1:1.
           int arr[]={3,1,6,2,2,2,3,6,6};
           //for(int i=0;i<n;i++) m[arr[i]]++;
           for(int i=0;i<9;i++)
           {
               if(m.find(arr[i])==m.end())
                m[arr[i]]=1;
               else
                m[arr[i]]++;
           }
           for(auto it: m)
           {
               cout<<it.first<<" "<<it.second<<endl;
           }
        }

