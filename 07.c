// functions
#include <stdio.h>

// function prototype.. This function is not specified here
// either a full function or a function prototype must be specified or the compiler
// will scream at you
//
// VERY IMPORTANT: NEVER USE () IN FUNCTION PROTOTYPES!!!!
// just in case you missed this message, refer to line 8
// refer to line 8 again.
// Why? Well, when you create a prototype like int func()
// C thinks that it can take any arguments and you haven't set those up.
void greet(char *s);
void bad();
void fancy_number(int x);

// A function is setup like this
// first is the return value, in this case int
// then the function name, and between the parenthesis
// is the argument type and parameter name.. will be discussed later
// void means no arguments at all.
int main(void)
{
    printf("I am main");
    greet("John");
    int x = 10;
    fancy_number(x);
    printf("fancy number outside function: %d\n", x);

    // as you can see, C lets you put random input into bad
    // this is because we didn't specify void earlier.
    // This can cause danger later like corrupting memory.
    // This code compiles. try adding void to the bad function prototype
    // it will no longer compile :)
    // stay safe out there
    bad(2, 3, 4);
    return 0;
}

// Here is the greet function
// NOTE: any argument given to a function is copied into it
// aka: passed by value.
void greet(char *s)
{
    printf("Hello %s\n", s);
}

void bad()
{
    printf("I am unsafe!!!!!\n");
}

void fancy_number(int x)
{
    x += 1;
    printf("fancy number is %d \n", x);
}