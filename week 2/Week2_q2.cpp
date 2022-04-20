#include<iostream>
using namespace std;
int main()
{
    int i, j, k, t, n, f=0;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(k=2;k<n; k++)
        {
            i=0;
            j=k-1;
            while(i<j)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    f=1;
                    break;
                }
                else if(arr[i]+arr[j]<arr[k]) i++;
                else j--;

            }
            if(f==1)
                break;
        }
        if(f==0) cout<<"No sequence found"<<endl;
        else cout<<i<<","<<j<<","<<k<<endl;
    }
}
