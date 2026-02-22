// typedefs
// typedefs let you alias various types for easier changeability later.
// some may claim they improve readability. But I'm extremely skeptical.

// this can be useful when the int type needs to be changed later. E.g: compiling
// code for different architectures. Look into the preprocessor for more ideas.
typedef int my_int;

// structs can be aliased too
// now instead of struct person, you can just write person
typedef struct person
{
    int age;
} person;

// even better, anonymous struct
// these are so called anonymous structs.
typedef struct
{
    int price;
} car;

// another use of typedefs could be to enforce a sort of rule
// for example, again, I'm skeptical of this as pointer decay means
// this won't be enforced when passing incorrect arguments to functions
typedef int Vector3[3];

// to solve the point bove, one could wrap the type in a struct
// but now we have a struct, purely to represent a vector. And even worse, sizeof
// has now been irrevocably changed. This means all vectors are copied to functions.
// you must use pointers to structs everywhere. On the other hand, pointer decay isn't an issue.
typedef struct
{
    int elements[4];
} Vector4;

int main(void)
{
    return 0;
}