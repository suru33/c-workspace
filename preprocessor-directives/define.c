/* 
An object-like macro is a simple identifier which will be replaced by a code 
fragment. It is called object-like because it looks like a data object in code 
that uses it. They are most commonly used to give symbolic names to numeric 
constants.
*/

// https://gcc.gnu.org/onlinedocs/gcc-7.5.0/cpp/Object-like-Macros.html#index-_0023define
// https://gcc.gnu.org/onlinedocs/gcc-7.5.0/cpp/Function-like-Macros.html#Function-like-Macros
// https://gcc.gnu.org/onlinedocs/gcc-7.5.0/cpp/Macro-Arguments.html#Macro-Arguments

#include <stdio.h>

#define BUFFER_SIZE 1024
#define TEMP_DIR "/tmp"

#define NUMBERS 1, 2, 3
#define VL 23, \
           45, \
           56, \
           9

// When the preprocessor expands a macro name, the macro’s expansion replaces the
// macro invocation, then the expansion is examined for more macros to expand.
#define TABLESIZE BUFSIZE
#define BUFSIZE 1024

// remove the definition of a macro
#undef BUFSIZE
#define BUFSIZE 37

// TABLESIZE is expanded first to produce BUFSIZE, then that macro is expanded to produce the final result, 1024.
// Now TABLESIZE expands (in two stages) to 37.

// Function-like Macros
#define min(X, Y) ((X) < (Y) ? (X) : (Y))

int main(int argc, char const *argv[])
{

    int a = 76, b = 45;

    int nums[] = {NUMBERS};
    int vl[] = {VL};

    printf("Buffer Macro: %d\n", BUFFER_SIZE);
    printf("Temp DIR: %s\n", TEMP_DIR);

    printf("nums[0]: %d\n", nums[0]);

    int size_vl = sizeof(vl) / sizeof(vl[0]);
    printf("Elements in vl\n");
    for (int i = 0; i < size_vl; i++)
    {
        printf("%d\t", vl[i]);
    }

    printf("\nTABLESIZE: %d", TABLESIZE);
    printf("\nBUFSIZE: %d\n", BUFSIZE);

    printf("min(%d, %d) = %d\n", a, b, min(a, b));

    return 0;
}
