
#include <iostream>
using namespace std;

bool subSet(int arr, int sum, int n)
{
    bool t[n+1][sum+1];
    for(int i=0; i<=n; i++){
        t[i][0] = true;
    }
    for(int i=1; i<=sum; i++){
        t[0][i] = false;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            if(arr[i-1]<=j){
                t[i][j] = t[i][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

int main()
{
    int arr[] = {1,5,11,5}, sum=0, n;
    int n = sizeof(arr)/sizeof(n);

    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    if(sum%2!=0){
        return false;
    }
    else if(sum%2==0){
        return subSet(arr, sum/2, n);
    }
}
