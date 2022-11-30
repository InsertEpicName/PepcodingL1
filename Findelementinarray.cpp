#include <bits/stdc++.h>

using namespace std;

int index(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    //Find the index of element in array 
    int arr[]={36,30,40,4,11,9};
    cout<<index(arr,6,40)<<endl;

    return 0;
}
