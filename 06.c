// Beej's guide talked about loops
// for, while, do while, etc
// also switches & if statements
// fun fact: chars are secretly ints
// also ints are bools? fun times :D

#include <stdio.h>

int main(void)
{
    // this is an if statement
    if (1)
    {
    }
    else if (2)
    {
    }
    else if (3)
    {
    }
    else
    {
    }

    // long else if is bad.
    // Here is the same thing
    // with a switch statement
    int x = 1;
    int y = 1;
    switch (x)
    {
    case 1:
        printf("I am the first case\n");
        // if you don't include break
        // it will fall through to the next
        // condition and run both sets of code
        // if the condition is matched
        // break;

    default:
        printf("I also match default.. never forget the break kids!\n");
        break;
    }

    // while loops execute while a condition is true
    while (x < 1)
    {
        printf("While loop!\n");
        ++x;
    }

    // do while loops always execute at least once
    // because the loop condition is checked AFTER
    // the block is done
    do
    {
        printf("This loop will run when x < 1\n");
        printf("current value of x: %d\n", x);
        printf("do while shenanigans!\n");
    } while (x < 1);

    // The last kind of loop is the for loop
    // note the comma seperator
    // also, the comma operator.. that thing is wild
    // it returns the rightmost value
    // It also runs multiple things at once
    for (int i = 0, j = 0; i < 3; i++, j--)
    {
        // since the comma in an expression returns the right most value
        // this can cause havoc.. Luckily, this gives a compiler warning.
        int z = (1, 2, 3);
        printf("i: %d, j: %d, z: %d\n", i, j, z);
    }
}