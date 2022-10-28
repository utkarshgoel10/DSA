
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n], a[n], b[n], c[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[j]==2){
            a[i] = arr[j];
        }
        if(arr[j]==1){
            b[i] = arr[j];
        }
        if(arr[j]==0){
            c[i] = arr[j];
        }
        i++;
    }
    for(int k=0; k<n; k++){
        cout<<a[k];
    }
    for(int k=0; k<n; k++){
        cout<<b[k];
    }
    for(int k=0; k<n; k++){
        cout<<c[k];
    }

}
