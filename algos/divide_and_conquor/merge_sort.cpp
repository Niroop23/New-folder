#include<iostream>

using namespace std;


void merge(int arr[],int const left,int const mid,int const right)
{
    int size_array1=mid-left+1;
    int size_array2=right-mid;

    auto * left_arr=new int[size_array1];
    auto * right_arr=new int[size_array2];

    int i,j;
    for(i=0;i<size_array1;i++){
        left_arr[i]=arr[left+i];
    }
    for(j=0;j<size_array2;j++){
        right_arr[j]=arr[mid+1+j];
    }
    auto index_1=0,index_2=0;
    int index_final=left;


    while(index_1<size_array1 && index_2<size_array2)
    {
        if(left_arr[index_1]<=right_arr[index_2])
        {
            arr[index_final]=left_arr[index_1];
            index_1++;

        }
        else{
            arr[index_final]=right_arr[index_2];
            index_2++;
        }
        index_final++;

    }

    while(index_1<size_array1)
    {
        arr[index_final]=left_arr[index_1];
        index_1++;
        index_final++;
    }

    while(index_2<size_array2)
    {
        arr[index_final]=right_arr[index_2];
        index_2++;
        index_final++;
    }
    delete[] left_arr;
    delete[] right_arr;                 
}

void mergesort(int arr[],int const begin,int const end)
{
    if(begin>=end)
    {
        return;
    }

    int mid=(begin+end)/2;
    mergesort(arr,begin,mid);
    mergesort(arr,mid+1,end);
    merge(arr,begin,mid,end);
}

void print(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={12,11,13,5,6,7};
    
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    cout<<"given array is : \n";

    print(arr,arr_size);

    mergesort(arr,0,arr_size-1);

    cout<<"sorted array is : \n";

    print(arr,arr_size);

    return 0;
}