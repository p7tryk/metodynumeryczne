#include <stdio.h>
#include <stdlib.h>
double ** gausjordan()
{

}
double ** input()
{
  printf("wpisz macierz rozszerzona 4x5\n");
  double matrix[4][5];
  for(int i=0; i<4; i++)
    {
      for(int k=0; k<5;k++)
	{
	  printf("A[%d][%d]=",i,k);
	  scanf("%lf",&matrix[i][k]);
	}
    }
  double ** ptr;
  ptr=&matrix;
  return ptr;
}
void printmatrix(double ** matrix)
{
  for(int i=0; i<4; i++)
    {
      for(int k=0; k<5;k++)
	{
	  printf("%lf\t",matrix[i][k]);
	}
      printf("\n");
    }
 
}

int main()
{
  double ** tab = input();
  

}
