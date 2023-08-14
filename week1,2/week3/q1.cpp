#include <iostream>
#include <string>
using namespace std;
class sample
{
    string name;
    public:
    sample(){
        cout<<"s"<<" ";
    }
    sample (string s): name (s){
        cout<<name<<" ";
    }
};
int main()
{
    sample s1;
    sample *s2= new sample ("s2");
    sample *s3;
    new sample("s4");
    return 0;    }