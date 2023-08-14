#include <iostream>
using namespace std;
int i=0;
class myclass{
    public:
    myclass(){ i+=1;}
    ~myclass(){ i+=5;}

};
void f()
{
myclass m1();
myclass m2;}
int fun()
{
    i=3;
    f();
    return i++;
}
int main()
{
    cout<<fun()<<" ";
    cout<<i<<endl;
    return 0;
}