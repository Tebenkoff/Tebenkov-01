#include <stdio.h>

struct record
{
  char drug_name[64];      // Nazvanie lekarstva
  char indications[64];    // Pokazaniya k primeneniu
  int exp_years;           // Srok godnosti
  int mfg_year;            // God proizvodstva
};




int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    
  struct record row[n];
  for (int i=0; i<n; i++)
  {
    scanf("%s %s %d %d", row[i].drug_name , row[i].indications, &row[i].exp_years, &row[i].mfg_year);
  }
  
  printf("name\tindics\texp\tyear\n");
  
  for (int i=0; i<n; i++)
  {
    printf("%s\t%s\t%d\t%d\n", row[i].drug_name , row[i].indications, row[i].exp_years, row[i].mfg_year);
  }
  
  FILE *out = fopen("ex16-out.txt", "w+");
  for (int i=0; i<n; i++)
  {
    fprintf(out, "%s\t%s\t%d\t%d\n", row[i].drug_name , row[i].indications, row[i].exp_years, row[i].mfg_year);
  }
  
  fclose(out);
  
  FILE *outbin = fopen("ex16-out_bin.txt", "wb+");
  
  fwrite(row, sizeof(row)*n, 1, outbin);
  
  fclose(outbin);

  return 0;
}
