
#include <iostream>
#include "linkedlist.h"
using namespace std;

int main() {
    List list;
    int num;
    srand(time(0));
    for(int i = 0;i < 20; i++)
    {
        num = rand() % 10 + 1;
        list.Add(num);
    }
    cout << "Print List Elements:\n";
    cout << list;
    // list.Add(1);
    // list.AddAt(4,2);
    // list.AddAt(4,5);
    // list.removeAt(2);
    // cout << list.GetCount() << endl;
    // cout << list.getElement(3) << endl;
    // list.removeAll();

}