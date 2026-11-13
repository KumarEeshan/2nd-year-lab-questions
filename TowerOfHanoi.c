#include <stdio.h>
#include <math.h>
void TOH(int n, char from, char to, char aux){
    if(n==1){
        printf("Move disc 1 from peg %c to peg %c\n", from, to);
        return;
    }
    TOH(n-1, from, aux, to);
    printf("Move disc %d from peg %c to peg %c\n",n, from, to);
    TOH(n-1, aux, to, from);
}
int main(){
    int n = 3;
    int res = pow(2, n)-1;
    printf("steps required: %d \n", res);
    TOH(n, 'A', 'B', 'C');
    return 0;
}