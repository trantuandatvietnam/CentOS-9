#include <stdio.h>

#include<stdbool.h>

bool check( unsigned int n){

int d=2;

int i;

for( i = 2; i <= n/2; i++) {

if(n % i == 0)

d++;

}

return d==4;

}

int main() {

bool kt = 0;

int unsigned n;

scanf("%d",&n);

int i;

for ( i = 0; i <= n; i++) {

if (check(i)) {

printf("%d\n", i);

kt = 1;

}

}

if (kt ==0) {

printf("No");

}

}