#include<iostream>
using namespace std;
int main()
{
    int i, j, k, t, n;
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
       for(i=1; i<=k; i++)
       {
           for(j=0; j<n-i; j++)
           {
               if(arr[j]<arr[j+1])
               {
                   int temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
           }
       }
       for(i=0; i<n; i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<"\n"<<arr[j]<<endl;
    }
}
