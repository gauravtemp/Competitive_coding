#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m,i,p;
    cin>>t;
    while(t--)
    {   int count1=0;
        cin>>n>>m;
        vector<int> v;
        vector<int> v1;
        for(i=0;i<n;i++)
        {
            cin>>p;
            v.push_back(p);
        }
        vector<int>:: iterator it,j,k;

        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {

            it=v.begin()+i;

            int fin=m-*it;
            if(fin==*it)
                count1--;

            if(binary_search(v.begin()+i,v.end(),fin))
            count1++;


        }
        cout<<count1<<"\n";

    }
}
