#include <stdio.h>
#include <math.h>

double wielomian1(double input)
{
  return pow(input,4)+3*pow(input,3)+6*pow(input,2)+4*input+1;
}

double wielomian2(double input)
{
  return (input*input)+2;
}


double prostokat(double (*wielomianptr)(double),double begin, double end, double okres,int mode)
{
  double head=begin;
  double calka=0;
  if(mode!=0)
    mode=1;
  
  while(head<end)
    {
      calka+=(*wielomianptr)(head+mode*okres)*okres;
      head+=okres;
    }
  return calka;
}
double trapez(double (*wielomianptr)(double),double begin, double end, double okres)
{
  if(begin+okres>end)
    return 0;
  double head=begin;
  double calka=0;
  
  while(head<end)
    {
      calka+=((*wielomianptr)(head)+(*wielomianptr)(head+okres))/2*okres;
      head+=okres;
    }
  return calka;
}
double bezwzgld(double a)
{
  if(a<0)
    a=-a;
  return a;
}


int main()
{
  double begin=1;
  double end=5;
  
  
  double n = 10;
  double h = bezwzgld((begin-end)/n);
  printf("n = %.3lf h= %.3lf\n",n,h);
  printf("prostokat1\t%lf\n",prostokat(&wielomian2,begin,end,h,0));
  printf("prostokat2\t%lf\n",prostokat(&wielomian2,begin,end,h,1));
  printf("trapez  \t%lf\n",trapez(&wielomian2,begin,end,h));

  n = 4;
  h = bezwzgld((begin-end)/n);
  printf("n = %.3lf h= %.3lf\n",n,h);
  printf("prostokat1\t%lf\n",prostokat(&wielomian2,begin,end,h,0));
  printf("prostokat2\t%lf\n",prostokat(&wielomian2,begin,end,h,1));
  printf("trapez  \t%lf\n",trapez(&wielomian2,begin,end,h));
  
  /*
  for(double dokladnosc=1;dokladnosc>0.1;dokladnosc=dokladnosc/2)
    {    
      printf("h=%.3lf\n",dokladnosc);
      printf("prostokat1\t%lf\n",prostokat(&wielomian2,begin,end,dokladnosc,0));
      printf("prostokat2\t%lf\n",prostokat(&wielomian2,begin,end,dokladnosc,1));
      printf("trapez  \t%lf\n",trapez(&wielomian2,begin,end,dokladnosc));
    }
  */
}
