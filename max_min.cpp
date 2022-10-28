
#include <iostream>
using namespace std;

int main()
{
    int max = 0, min = INT_MAX, n, size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int j=0; j<size; j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    for(int k=0; k<size; k++){
        if(arr[k]<min){
            min = arr[k];
        }
    }
    cout<<"Maximum Value: "<<max<<endl;
    cout<<"Minimum Value: "<<min;
}
