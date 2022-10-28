
#include <iostream>
using namespace std;


int main()
{
    int arr[5] = {1,2,2,4,4};
    int trr[5];
    int n=arr[0];
    int size = sizeof(arr)/sizeof(int);

    for(int i=1; i<size; i++){
        if(n==arr[i]){
            arr[i] = -1;
        }
        else{
            trr[i] = arr[i];
        }
    }
    for(int i=0; i<size; i++){
        cout<<trr[i]<<" ";
    }
}
