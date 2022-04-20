#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t, mInd, cmp=0, sp=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        cmp=0, sp=0;
        for(i=0; i<n-1;i++)
        {
            mInd=i;
            for(j=i+1; j<n; j++)
            {
               if(arr[j]<arr[mInd])
               {
                   mInd=j;
                   cmp++;
               }
               else cmp++;
            }
            if(mInd != i)
            {
                int temp=arr[mInd];
                arr[mInd]=arr[i];
                arr[i]=temp;
                sp++;
            }
        }
        for(i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<"\ncomparisons="<<cmp<<"\nSwaps="<<sp<<endl;;
    }
}
