#include <stdlib.h>
#include <stdio.h>

void print_out(const char* p, const int x)
{
    printf("p is\"%s\" and x is %i\n", p, x);
}

int main()
{

    printf("Hello World!\n");

    char* first = "Hello";
    char* last = "World!";
    printf("%s %s\n", first, last);

    
    print_out("May", 7);
    print_out("Niki", 20);
    print_out("A", 89);
    return 0;
}