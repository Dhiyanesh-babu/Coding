#include<iostream>

#include<bits/stdc++.h>

using namespace std;


int bucketsort(int arr[], int n, int k)
{
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    max++;

    vector<int> bkt[k];

    for(int i=0;i<n;i++)
    {
        int index = k*arr[i]/max;
        bkt[index].push_back(arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }
    int index = 0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        {
            arr[index++] = bkt[i][j];
        }
    }
    return 0;

}


int main()
{
    int arr[] = {20,88,70,85,75,18,82,60};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int k = 5;
    bucketsort(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<"\t";
    }
    return 0;
    
}