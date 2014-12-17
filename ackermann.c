#include <stdio.h>
#include <stdlib.h>

int ack(int m, int n) {
printf("m:%d n:%d\n",m,n);
  if (m==0) return n+1;
  else if (m > 0 && n == 0) return ack(m-1,1);
  else if (m > 0 && n > 0) return ack(m-1,ack(m,n-1));
}

int main(int argc, char* argv[]) {
  if(argc < 2) {
    printf("Usage: %s <m> <n>",argv[0]);
    exit(EXIT_SUCCESS);
  }
  else {
  int m = atoi(argv[1]);
  int n = atoi(argv[2]);
  
  int total = ack(m,n);
  printf("Final Answer:%d",total);
  exit(EXIT_SUCCESS);
  }
}
