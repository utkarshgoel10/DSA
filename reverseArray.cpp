
#include<iostream>
using namespace std;

int main()
{
    int n, tmp;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<n; j++){
        if(j<n-j){
            tmp = arr[j];
            arr[j] = arr[n-j];
            arr[n-j] = tmp;
        }
    }
    cout<<"Reversed Array: ";
    for(int k=1; k<n+1; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
