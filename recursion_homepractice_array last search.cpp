#include<iostream>
using namespace std;
int lastSearch(int arr[],int idx, int n, int value)
{
    //base case
    if(idx==n-1 && arr[idx]==value)
    {
        return idx;
    }
    else if(idx==n-1 && arr[idx]!=value)
    {
        return (-1);
    }


    //recursive case
    int reqIdx= lastSearch(arr,idx+1,n,value);
    if(arr[reqIdx]==value)
    {
        return reqIdx;
    }

    else
    {
        if(arr[idx]==value)
        {
            return idx;
        }
        else
        {
            return (-1);
        }
    }

}

int main()
{
    int n,value,arr[100000];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cin>>value;

    cout<<lastSearch(arr,0,n,value)<<endl;
    return 0;

}
