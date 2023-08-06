#include <iostream>
using namespace std;
int main()
{
    int a=2,*b;
    *b=a;
    const int *ptr=&a;
   // *ptr=*b;
    cout<<*ptr;
    return 0;

}