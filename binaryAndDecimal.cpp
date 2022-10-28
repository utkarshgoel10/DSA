
// | answer = (digit * 10^i) + answer | gives reverse of list of integers.
// | answer = (digit * 10^i) + digits | gives list of integers.

// Decimal to Binary
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cout<<"Enter value of n: ";
//    cin>>n;
//    int ans = 0, i=0;
//    while(n!=0){
//        int bit = n&1;
//        ans = (bit * pow(10, i)) + ans;
//        n = n >> 1;
//        i++;
//    }
//    cout<<"Answer is: "<<ans<<endl;
//
//}


// Binary to Decimal

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;
    int i = 0, ans = 0;

    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<"Answer is: "<<ans;
}
