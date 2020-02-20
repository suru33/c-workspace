/* 
An object-like macro is a simple identifier which will be replaced by a code 
fragment. It is called object-like because it looks like a data object in code 
that uses it. They are most commonly used to give symbolic names to numeric 
constants.
*/

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

int main(int argc, char const *argv[])
{
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

    return 0;
}
