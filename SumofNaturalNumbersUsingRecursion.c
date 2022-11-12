#include <stdio.h>
#include<time.h>

double time_spent=0.0;

int addNumbers(int n);

int main() {

  clock_t begin=clock();

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
 clock_t end =clock();
  time_spent+=(double)(end-begin)/(CLOCKS_PER_SEC/1000);
  printf("The elapsed time is %f seconds",time_spent);
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
