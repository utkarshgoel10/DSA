
#include<iostream>
using namespace std;

int main()
{
    int tmp;
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        if(i<size-i){
            tmp = arr[i];
            arr[i] = arr[size - i];
            arr[size-i] = tmp;

        }
    }
    cout<<"Reversed Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
