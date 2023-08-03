#include<iostream>

#define X 1

using namespace std; int main()
{

int i;

const int i1=2;
const int i2 = i1; //line1
i2 =X+5;//LINE-2
i = i1;//line 3
i1=4+5;//LINE-4
return 0;
}