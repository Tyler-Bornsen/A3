#include <iostream>
#include <cstdlib>
#include <string>
#include "Stack.h"
using namespace std;

int main ()
{

Stack driver;
string balls;

driver.push("balls");
driver.push("sussy");
driver.push("weiner");





driver.view();
driver.pop(balls);
cout << endl;
cout << balls;

driver.peek(balls);

driver.~Stack();


driver.view();

}