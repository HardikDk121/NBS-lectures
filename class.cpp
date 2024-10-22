#include <iostream>
using namespace std;

class abc
{
    private:
        int a;
    public:
        abc()
        {
            this->a=5;
            cout<<this->a;
        }    
};
int main()
{
    abc *ob;
    return 0;
}