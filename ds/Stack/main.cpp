#include "stack.hpp"
#include "../GenericLinkedList/linkedlist.cpp"
#include <iostream>
using namespace std;
int main()
{
    Stack<int> stack;
    // stack.push(12);
    try
    {
        cout << stack.peek() << endl;
    }
    catch (const runtime_error &e)
    {
        cout << e.what() << '\n';
    }
}