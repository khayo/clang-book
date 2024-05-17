#include <stdio.h>

void main(){
  int c;

  printf("EOF vale: %d", EOF);

  while ((c = getchar()) != EOF){
    putchar(c);
  }
}
