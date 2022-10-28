
#include <iostream>
using namespace std;

int main()
{
    int tmp;
    int arr[6] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<size-1; i=i+2){
        tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;

    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
