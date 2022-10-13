#ifndef _STACK_H
#define _STACK_H
#include <string>

typedef std::string SElement;

class Stack
{
private:

struct SNode;
typedef SNode * SNodePtr;
struct SNode
{
    SElement element;
    SNodePtr next;
};
SNodePtr top;





public:

void push( const SElement &);
void pop( SElement & );
void peek( SElement & );
void view();

Stack();
~Stack();
Stack( Stack & );

};

#endif