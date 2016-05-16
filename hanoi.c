#include <stdio.h>

void hanoi(int n,int from,int to,int buf);

int main(void){
    int n;
    scanf("%d",&n);
    hanoi(n,1,3,2);
    return 0;
}

void hanoi(int n,int from,int to,int buf){
    if (n==0) return;
    else {
    hanoi(n-1,from,buf,to);
    printf("%d : %d -> %d\n",n,from,to);
    hanoi(n-1,buf,to,from);
    }
}
