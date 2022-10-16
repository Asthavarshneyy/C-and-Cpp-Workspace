#include <stdio.h>
#include <stdbool.h>

static bool is_PowerOf_Three(int n) {
    if (n == 1) return true;
    if (n == 0 || n % 3) return false;
    return is_PowerOf_Three(n / 3);
    return (n > 0 && (1162261467 % n) == 0);
}
int main(void)
{
  printf("*******************\n");
  printf("18th program:Power of 3\n");
  printf("Coder:Astha Varshney\n");
  printf("*******************\n");
    int n = 9;
    printf("\nIf %d is power of three? %d", n, is_PowerOf_Three(n));
    n = 81;
    printf("\n\nIf %d is power of three? %d", n, is_PowerOf_Three(n));
    n = 45;
    printf("\n\nIf %d is power of three? %d", n, is_PowerOf_Three(n));
    return 0;
}

  