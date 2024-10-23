#include <iostream>
using namespace std;
#define maxsize 5
class stack
{
    private:
        int top;
        int array[maxsize];
    public: 
        stack()
        {
            this->top = -1;
            cout<<"Stack in c++ \n\n";
        }
        bool is_empty()
        {
            if(this->top < 0)
                return true;
            return false;
        }
        bool is_full()
        {
            if(top >= maxsize )
                return true;
            return false;
        }
        void push(int value)
        {
            if (is_full())
            {
                cout<<"Stack full he";
                return;    
            }
            this->top++;
            this->array[this->top] = value;
            cout<<this->array[this->top]<<" :\tinserted into stack \n";
        }
        void pop()
        {
            if (is_empty())
            {
                cout<<"Stack khail he";
                return;    
            }
            cout<<this->array[this->top]<<" :deleted from stack \n";
            this->top--;
        }
        void display()
        {
            if(is_empty())
                cout<<"Stack khail he ";
            for (int index=this->top; index > -1 ; index--)
                cout<<this->array[index]<<"\t";
        }
        
};
int main()
{
    stack stack1;
    stack1.push(15);
    stack1.push(20);
    stack1.push(25);
    stack1.push(30);
    stack1.pop();
    stack1.pop();
    stack1.display();
    return 0;
}