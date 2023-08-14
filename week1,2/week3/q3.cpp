#include <iostream>
using namespace std;
class private_data
{
    int x;
    void f1()
    {
        cout<<"within f1";
    }
    public:
    int y;
    void f2();
    {
        cout<<"within f2;"
    }
};
int main()
{
    private_data t;
    t.x=1;//line1
    t.f1();//line2
    t.y=2;
    t.f2();
    return 0;
}
// output -line1 and line2 gives error