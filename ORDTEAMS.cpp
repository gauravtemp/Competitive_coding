#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[9];
        for(int i=0;i<9;i++)
            cin>>a[i];

        int r=-1;

        if(((a[0]>=a[3]&&a[1]>=a[4]&&a[2]>=a[5])&&!(a[0]==a[3]&&a[1]==a[4]&&a[2]==a[5]))&&((a[0]>=a[6]&&a[1]>=a[7]&&a[2]>=a[8])&&!(a[0]==a[6]&&a[1]==a[7]&&a[2]==a[8])))
            r=1;
        if(((a[3]>=a[0]&&a[4]>=a[1]&&a[5]>=a[2])&&!(a[3]==a[0]&&a[4]==a[1]&&a[5]==a[2]))&&((a[3]>=a[6]&&a[4]>=a[7]&&a[5]>=a[8])&&!(a[3]==a[6]&&a[4]==a[7]&&a[5]==a[8])))
            r=2;
        if(((a[6]>=a[3]&&a[7]>=a[4]&&a[8]>=a[5])&&!(a[6]==a[3]&&a[7]==a[4]&&a[8]==a[5]))&&((a[6]>=a[0]&&a[7]>=a[1]&&a[8]>=a[2])&&!(a[6]==a[0]&&a[7]==a[1]&&a[8]==a[2])))
            r=3;

            if(r!=-1)
                cout<<"yes\n";
            else
                cout<<"no\n";

    }
}