#include <stdio.h>
#include <math.h>

double positive(double input)
{
  if(input<0)
    return -(input);
  return input;
      
}
double check(double w, double x)
{
  double output = positive(w*w-x);
  if(output > 1)
    return 1;
  return 0;
}

double newsqrt(double input)
{
  double output = 1;

  for(output; check(output,input);output=0.5*(input/output+output))
    {
      int i;
    }

  return output;
}

int main()
{
  double i = 0;
  printf("podaj liczbe do zpierwiastkowania\n");
  scanf("%lf",&i);

  double x = i;
  
  
  i=newsqrt(i);
  x=sqrt(x);
  printf("moj %lf,\nlib %lf,\nerr %lf\nper %lf.2 \n", i, x, (double) i-x, (double) (i/x*100)-100);
  
  

}
