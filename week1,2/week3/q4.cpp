#include <iostream>
using namespace std;
class myclass{
    public:
    myclass(int i){cout<<i;
    }
    myclass(const myclass &t){
        cout<<"2";
    }
};
int main()
{
    myclass *t1,*t2;
    t1=new myclass(0);
    t2=new myclass(*t1);
    myclass t3=*t1;
    myclass t4=*t2;
     return 0;
}