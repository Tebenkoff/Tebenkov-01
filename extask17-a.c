#include <stdio.h>
#include <string.h>

int main()
{
  char s[256];
  fgets(s, 256, stdin);  // Vvod s klaviatury
    
  size_t n = strlen(s);
  printf("len: %ld\n", n); // Vyvodit kol-vo simvolov vmeste s enterom
  // esli nado bez, togda printf("len: %ld\n", n - 1);
  
  return 0;
}
