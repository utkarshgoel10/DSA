
#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int n, k;
    vector <int> v;
    cout<<"enter size: ";
    cin>>n;
    for(int i=0; i=n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    cout<<v[k];
    return 0;
}
