#include<iostream>
using namespace std;
int main()
{
    int i, j, ctr=0, t, n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        ctr=0;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[j]-arr[i] == k || arr[j]-arr[i] == -k)
                    ctr++;
            }
        }
        cout<<ctr<<endl;
    }
}

