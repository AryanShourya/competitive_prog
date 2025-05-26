#include<iostream>
using namespace std;


// Q. Find the maximum subarray sum from the array
void max_subarray(int *arr,int n){
    int max=0,sum=0,start=0,end=0,ansStart=0;

    for(int i=0;i<n;i++){

        if(sum==0){
            start=i;
        }
        sum+=arr[i];

        if(sum<0){
            sum=0;
        }

        if(sum>max){
            max=sum;
            ansStart=start;
            end=i;
        }

    }

    cout<<"Maximum subarray sum:"<<max<<endl;
    cout<<"Max subarray: ";
    for(int i=ansStart;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    //input the array:
    int n=0;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    max_subarray(arr,n);
    return 0;
}