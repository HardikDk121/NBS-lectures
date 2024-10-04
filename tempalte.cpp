#include <iostream>

using namespace std;

template <typename t>

t add(t a , t b)
{
    return a+b;
}
int main()
{
    cout<<add(4.5,5.2);
    return 0;
}