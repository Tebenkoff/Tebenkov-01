#include <stdio.h>
#include <stdlib.h>

#define days 31
#define p_min 740  // min davlenie
#define p_max 780  // max davlenie
#define p_norm 760 // normalnoe davlenie

int pressure[days]; //31 den v mesyatse

int main()
{
  int delden; // den, kotoriy nuzhno udalit
  printf("delete day: "); // vvod dnya, kotoriy nuzhno udalit
  scanf("%d", &delden);
  
  for(int i = 0; i<days; i++)
    pressure[i] = p_min + rand() % (p_max - p_min + 1);
  
  printf("day\tpressure\n");
  
  for(int i=0; i<days; i++)
  {
    if (i+1 != delden) printf("%d\t%d\n", i+1, pressure[i]);
  }
  
  int cnt_below = 0;
  int cnt_above = 0;
  int cnt_exact = 0;
  
  for(int i=0; i<days; i++)
  {
    if (i+1 != delden)
    {
      int v = pressure[i];
      if(v < p_norm) cnt_below++;
      else if (v > p_norm) cnt_above++;
      else cnt_exact++;
    }
  }
  
  printf("below: %d\n", cnt_below);
  printf("above: %d\n", cnt_above);
  printf("exact: %d\n", cnt_exact);
  
  return 0;
}
