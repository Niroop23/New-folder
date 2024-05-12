#include<bits/stdc++.h>

void insert_sort(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        int val=arr[i];
        int j=i-1;

        //move the elements greater than tmp to one position ahead of their current position
        
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]= val;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

}

int main(){
    int arr[]={12,54,65,7,23,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    insert_sort(arr,n);
    print(arr,n);

    return 0;

}