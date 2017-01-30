#include <stdio.h>
#include <string.h>
void swap(char a1, char a2); // (2)the signature of the function

int main(int argc, const char * argv[]) {
    swap('a', 'b'); // (4)
}

void swap(char a1, char a2) // (1)(3)return type = void
{
    char temp = a1;
    a1 = a2;
    a2 = temp;
    printf("a1: %c a2: %c ",a1,a2);
}
