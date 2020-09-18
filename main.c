
// author peter schulman pks5481@psu.edu
//colaberator kieran murdocca kkm5754@psu.edu
// section 4
// hmwk 3 
#include <readline/readline.h>
#include<stdio.h>
#include<stdlib.h>

int digit_sum(int n) {
  if (n ==0)
    return 0;
  else if (n<0)
    return 0;
  return (n % 10 + digit_sum(n / 10));
}

int main() {
  int n= atoi(readline("Enter an int: "));
  int num = digit_sum(n);
  printf("sum of digits of %d is %d.\n", n ,num);
  return 0;
}