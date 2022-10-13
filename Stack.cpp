#include <iostream>
#include <cstdlib>
#include <string>
#include "Stack.h"

using namespace std;


Stack::Stack()
{
    top = NULL;
}




Stack::~Stack()
{
    string temp;
    while(top != NULL)
    {
        pop(temp);

    }
}



Stack::Stack( Stack & main)
{
string temp;
Stack tempStack;

while (main.top != NULL)
{
    main.pop(temp);
    tempStack.push(temp);
}

tempStack.view();

while (tempStack.top != NULL)
{
    tempStack.pop(temp);
    main.push(temp);
    push(temp);

}
}




void Stack::push( const SElement &s)
{
SNodePtr  n = new SNode;


if (top == NULL)
    {
        top = n;
        top->next = NULL;
        n->element = s;
    }
else
    {
        n->next = top;
        top = n;
        n->element = s;

    }
}




void Stack::pop( SElement &s)
{

if (top == NULL)
    {
        cout << "Stack is empty\n";
    }
else
    {
        SNodePtr p = top;
        top = top->next;
        p->next = NULL;
        s = p->element;
        delete p;
    }

}






void Stack::peek( SElement & s)
{
SNodePtr r = top;
cout << r->element;
s = r->element;
}




void Stack::view()
{
SNodePtr  p = top;
SNodePtr tempstack = top;
string temp;

cout << "BOTTOM -> TOP\n" << "BOTTOM";

while(p != NULL)
    {   cout << " -> ";
       cout << p->element;
         p = p->next;

    }

cout << " -> TOP";
}