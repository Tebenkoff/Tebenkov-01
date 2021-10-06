#include <stdio.h>
#include <stdlib.h>

#define days 31
#define p_min 740  // min davlenie
#define p_max 780  // max davlenie
#define p_norm 760 // normalnoe davlenie

int pressure[31]; //31 den v mesyatse

int main()
{
  for(int i = 0; i<days; i++)
  pressure[i] = p_min + rand() % (p_max - p_min + 1);
  for(int i=0; i<days; i++)
    printf("%d\t%d", i+1, pressure[i])
    
  int cnt_blow = 0;
  int cnt_above = 0;
  int cnt_exact = 0;
  
  for(int i=0; i<days; i++)
  {
    int v = pressure[i];
    if(v < p_norm) cnt_bellow++;
    else if (v )
  }
}
