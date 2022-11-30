#include <bits/stdc++.h>

using namespace std;

int span(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int ans=max-min;
    return ans;
}

int main()
{
    //Span of given array (difference between max and min)
    int arr[]={15,30,40,4,11,9};
    cout<<span(arr,6)<<endl;

    return 0;
}
