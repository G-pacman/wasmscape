#include <stdio.h>

int main(int argc, char ** argv) {
  printf("Hello, world!\n");
  int i = 50;
  char buf[50];
  //scanf("%d", &i);
  printf("%d is your int\n\n", i);
  fgets(buf, 50, stdin);
  printf("another test print statement\n");
  printf("%s\n",buf);
  printf("add\n");
}
