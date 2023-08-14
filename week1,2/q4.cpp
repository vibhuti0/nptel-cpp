#include <iostream>

using namespace std;

int& func(int& i) 
{ //LINE-1

return i = i+5;

}

int main() 
{
int x=1, y = 2; 
int& z= func(x);
cout << x << " "<< z << " ";
func(x+1)=y;

cout << x << " "<<z;
return 0;
}