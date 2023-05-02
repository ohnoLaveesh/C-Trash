#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    char* str;
    int space;

    // Taking String Input
    printf("Input a String: ");
    gets(s);
    str = s;

    // Increamenting space on each 'space' 
    for(space=0; *str; str++){
        if(*str != ' ') continue;
        space++;
    }

    printf("Total Spaces: %d", space);

    return 0;
}
