#include <iostream>
using namespace std;
int largeNumInArray(int arr[], int size);
int main(void)
{
    int arr[]={1,5,2,4,7,3,9};
    int index=largeNumInArray(arr,sizeof(arr)/sizeof(arr[0]));
    cout << "the largest Number in the array is "<<arr[index];
}
int largeNumInArray(int arr[], int size)
{
    int index=0,max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            index=i;
        }
    }

    return index;
}