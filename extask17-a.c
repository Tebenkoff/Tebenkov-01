#include <stdio.h>
#include <string.h>

int main()
{
  char s[256];
  fgets(s, 256, stdin);  \\ Vvod s klaviatury
    
  size_t n = strlen(s);
  printf("len: %ld\n", n);
  
  return 0;
}
