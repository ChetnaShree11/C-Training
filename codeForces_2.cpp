#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            map<string,string> m;
            string name,ip,ip1,com;
            int n,mp;
            cin>>n>>mp;
            string a[n];
            for(int i=0;i<n;i++)
            {
                cin>>name>>ip;
                a[i]=name;
                m[a[i]]=ip;

            }
            for(int i=0;i<mp;i++)
            {
                string b;
                cin>>com>>ip1;
                for(int j=0;j<n;j++)
                {
                    if(ip1==m[a[j]])
                        b=a[j];
                }
                cout<<com<<" "<<ip1<<"; #"<<b<<endl;
            }
        }



