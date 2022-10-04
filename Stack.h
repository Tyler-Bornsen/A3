#ifndef _STACK_H
#define _STACK_H
#include <string>

using namespace std;

class Stack
{
private:

struct SNode;
typedef SNode * SNodePtr;
struct SNode
{
    string element;
    SNodePtr next;
};
SNodePtr top;





public:

void push(string element);
void pop();
void peek( SNodePtr r);
void view();

Stack();
~Stack();
Stack( Stack & main);

};

#endif