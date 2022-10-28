
#include <iostream>

using namespace std;

bool isSubset(int arr[], int n, int sum)
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
            if(j>=arr[i-1]){
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
    int arr[] = {3,34,4,12,5,2}, sum=9;
    int n = sizeof(arr)/sizeof(int);

    if(isSubset(arr, n, sum) == true)
        cout<<"Found";
    else
        cout<<"Not Found";
    return 0;

}
