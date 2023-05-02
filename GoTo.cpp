#include <stdio.h>

int main(){

    int n=10;
    int m=0;

    printf("Enter any value: ");
    scanf("%d", &m);

    // Goto Statement acting as a loop;
    label1:
    if(n<=m){
        printf("Output is: %d\n", n);
        n++;
        goto label1;
    }
    


}