/*
#include<iostream>
using namespace std;
int main()
{
    int n, counting = 1;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            cout<<counting<<" ";
            counting += 1;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
}
*/

/*
Output:
 1 2 3 4
 5 6 7 8
 9 10 11 12
  13 14 15 16
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<"*"<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/

/*
Output:
*
* *
* * *
* * * *

*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<row<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
1
2 2
3 3 3
4 4 4 4

*/



/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<(row-col+1)<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/

/*
Output:
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

/*

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            char ch='A' + row - 1;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
A A A
B B B
C C C

*/



/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            char ch='A' + col - 1;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
A B C
A B C
A B C

*/
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {

            cout<<ch<<" ";
            col = col + 1;
            ch = ch + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
A B C
D E F
G H I

*/


/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            char ans = ch + (row + col - 2);
            cout<<ans<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
A B C
B C D
C D E

*/



/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A';
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            char ans = ch + (row - 1);
            cout<<ans<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
A
B B
C C C

*/


/*

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        int col = 1;
        while(col<=row)
        {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
    *
   **
  ***
 ****
*****
*/


/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n-row+1)
        {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
*****
****
***
**
*
*/



/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;

    while(row<=n)
    {
        int space = row - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        int col = 1;
        while(col<=n-row+1)
        {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
*****
 ****
  ***
   **
    *
*/



/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;

    while(row<=n)
    {
        int space = row - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        int col = 1;
        while(col<=n-row+1)
        {
            cout<<col+row - 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
12345
 2345
  345
   45
    5
*/


/*

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    int coun = 1;
    while(row<=n)
    {
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        int col = 1;
        while(col<=row)
        {
            cout<<coun;
            col = col + 1;
            coun = coun + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
  1
 23
456
*/






/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        int col = 1;
        while(col<=row)
        {
            cout<<col;
            col = col + 1;
        }
        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
*/
/*
Output:
    1
   121
  12321
 1234321
123454321
*/

/*Dabangg Pattern*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n-row+1)
        {
            cout<<col;
            col = col + 1;
        }
        int space = 2 * (row - 1);
        while(space){
            cout<<"*";
            space = space - 1;
        }

        col = 1;
        while(col<=n-row+1)
        {
            cout<<n - (col+row - 2);
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}

/*
Output:
*****
****
***
**
*
*/
