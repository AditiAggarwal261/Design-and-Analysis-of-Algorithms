#include <iostream>
using namespace std;

int main()
{
    int i,j,key,t,n, ctr=0;
    cin>>t;
    int arr[100];
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        ctr=0;
        for(i=0; i<n; i++)
        {
            j=i;
            if(arr[i]==key)
            {
                ctr++;
            }
            else if(ctr !=0)
                break;
        }
        if(ctr !=0)
            cout<<key<<" "<<ctr<<endl;
        else
            cout<<"Key not present."<<endl;
    }

    return 0;
}
