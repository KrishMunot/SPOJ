#include <iostream>
 
using namespace std;
 
int main(void) 
{
    int i;
    while(1) 
    {
        cin >> i;
        if( i == 42 )
         break;
        cout << i << endl;
    }
    return 0;
}