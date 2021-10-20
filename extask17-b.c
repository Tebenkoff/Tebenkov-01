#include <stdio.h>
#include <string.h>

int main()
{
  char s[256];
  fgets(s, 256, stdin);  // Vvod s klaviatury
    
  size_t n = strlen(s);
  printf("len: %ld\n", n); // Vyvodit kol-vo simvolov vmeste s enterom
  // esli nado bez enterov, togda printf("len: %ld\n", n - 1);
  
  int m=0;
  for (int i=0; i<n; i++)
  {
    printf("%d ", s[i]);
    if (s[i] == ' ') m++;
  }
  
  printf("spcs: %d\n", m);
  
  return 0;
}
