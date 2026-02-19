// structs
#include <stdio.h>

// define a struct called a car
// this is a custom data type that lets you "bundle" other data types inside.
struct car
{
    char *name;
    float price;
    int speed;
};

// you can pass structs to functions,
// or pointers to structs to functions.
void set_price(struct car *c, float price)
{
    // the dot operator does not work with pointers to structs!
    // this won't work!
    // c.price = price;
    // this doesn't work either
    // *c.price.= price
    // you need this
    (*c).price = price;

    // The reason? the . operator in C has higher precedence  (priority)
    // than the dereference operator. Without the parenthesis what happens is
    // C tries to use dot operator and failes.
    // with the parenthesis
    // C executes whats in the parenthesis first. Dereferencing
    // the pointer to the struct, then executes the dot operator

    // The above is clunky. So, there is a different operator in C
    // the arrow oeprator
    c->price = price; // equivalent to (*c).price = price

    // Use dot when dealing with a struct directly. Use arrow with pointer to struct.
}

int main(void)
{
    // we can make a new car like this
    struct car saturn;

    // its values are uninitialized. Initialize like so
    saturn.name = "saturn";
    saturn.price = 9999.99;
    saturn.speed = 180;

    printf("car name: %s\n", saturn.name);
    printf("car price: %f\n", saturn.price);
    printf("car speed: %d\n", saturn.speed);

    // structs can be initialized like this
    // note that this requires the order of elements
    // to match the ones in the struct.
    struct car f1 = {"F1", 1.2, 400};

    // To avoid issues, you can set the keys with the values like so
    // much safer than putting values and hoping they are in order!
    // even worse if the data types match since you get silent errors that way!
    // remember kids, C is out to kill you.
    struct car car2 = {.name = "car", .price = 4.9, .speed = -2};

    // since the values of this struct are uninitialized, they would be garbage
    struct car poop;
    printf("garbage car defined, not initialized!\n");
    printf("poop car name: %s\n", poop.name);
    printf("poop car price: %f\n", poop.price);

    // structs with an initialization but no values provided
    // will have zero values instead
    struct car j = {};
    printf("j empty initialized car price %f\n", j.price);

    set_price(&j, 4);
    printf("set car price: %f\n", j.price);

    // One last thing
    // setting struct a to struct b copies b into a
    // Though this is not a deep copy so some things
    // may change a! For example, an embedded pointer might be referenced
    // by both structs! BE CAREFUL!
}
