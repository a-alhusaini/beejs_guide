// operators
#include <stdio.h>

int main(void)
{
    int x = 4;
    // we have the usual suspects
    x = x + 4;
    x = x - 4;
    // same for * / %
    // above can be rewritten as
    // -= += *= etc

    // C has ternary operators too! fancy
    // note: this isn't flow control. Its an evaluation of an expression
    printf("x is %s", x % 2 == 0 ? "even" : "odd");

    // C has pre/post-increment/decrement operators
    // pre operators perform the operation before the expression is evaluated
    // post operators perform the operation after the expression is evaluated
    x++; // post
    ++x; // pre
    x--; // post
    --x; // pre

    // pre means: do this, then give me the value
    // post means: give me the value, then do this.
    // I could be wrong though

    printf("%d\n", x);

    // the comma operator is mentioned mentioned
    // in beej's guide.. But I'm skiping it for now.

    // conditionals
    // x > x;
    // and the usual suspects like ==.. nothing interesting here

    // we also have the usual boolean operators
    // && || and !
    return 0;
}