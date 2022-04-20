#include<iostream>
using namespace std;

void merge(int [],int ,int);

bool find_dublicates(int arr[],int s,int e)
{
    merge(arr,s,e);
    for(int i=0;i<e;i++)
    {
        if(arr[i]==arr[i+1])
        return true;
    }
    return false;
}

void merge_both(int arr[],int s ,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int k=s;
    int *first=new int[len1];
    int *second=new int [len2];

    for(int i=0;i<len1;i++)
    first[i]=arr[k++];

    k=mid+1;
    for(int i=0;i<len2;i++)
    second[i]=arr[k++];

    int index1=0;
    int index2=0;
    k=s;

    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[k++]=first[index1++];
        }
        else
        {
            arr[k++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[k++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[k++]=second[index2++];
    }
    delete [] first;
    delete [] second;

}
void merge(int arr[],int s,int e)
{
    if(s>=e)
    return ;

    int mid=(s+e)/2;
    merge(arr,s,mid);
    merge(arr,mid+1,e);

    merge_both(arr,s,e);
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        bool a=find_dublicates(arr,0,n-1);
        if(a==true)
        cout<<"Yes ";
        else
        cout<<"No ";
    }
    return 0;
}
