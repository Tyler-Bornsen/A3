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
    SNodePtr p1;
    SNodePtr p2;

    p1 = top;
    while(p1 != NULL)
    {
        p2 = p1;
        p1 = p1->next;
        p2->next = NULL;
        delete p2;

    }
}




Stack::Stack( Stack & main)
{
string temp;
Stack tempStack;

while (main.top != NULL)
{
    main.pop();
    tempStack.push(temp);
}

tempStack.view();

while (tempStack.top != NULL)
{
    tempStack.pop();
    main.push(temp);
    push(temp);

}
}




void Stack::push(string element)
{
SNode * n = new SNode;
n->element = element;

if (top == NULL)
    {
        top = n;
        top->next = NULL;
    }
else
    {
        n->next = top;
        top = n;

    }
}




void Stack::pop()
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
        delete p;
    }

}






void Stack::peek( SNodePtr  r)
{

cout << r->element;

}




void Stack::view()
{
SNodePtr  p = top;

cout << "TOP -> BOTTOM\n" << "TOP";

while(p != NULL)
    {   cout << " -> ";
        peek(p);
        p = p->next;
    }

cout << " -> BOTTOM";
}