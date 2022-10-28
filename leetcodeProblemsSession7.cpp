//Reverse of integer in c++
//#include <iostream>

//using namespace std;
//
//int main()
//{
//    int ans=0, x;
//    cout<<"Value: ";
//    cin>>x;
//    while(x!=0){
//        int digit = x%10;
//        if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
//            return 0;
//        }
//
//        ans = (ans * 10) + digit;
//        x = x/10;
//    }
//    cout<<"Reverse is: "<<ans;
//}

//complement Base 10 Integer
//
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    int m = n;
//    int mask=0;
//    while(m!=0){
//        mask = (mask << 1) | 1;
//        m = m>>1;
//        cout<<mask<<endl;
//    }
//    int ans = (~n) & mask;
//
//    cout<<ans;
//}



//Power of two

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, ans;
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans = pow(2, i);
        if(ans==n){
            return true;
        }
    }
    return false;

}
