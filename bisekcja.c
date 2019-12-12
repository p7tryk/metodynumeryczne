#include <stdio.h>
#include <math.h>

double wielomian1(double input)
{
  return pow(input,4)+3*pow(input,3)+6*pow(input,2)+4*input+1;
}

double wielomian2(double input)
{
  return (input*input*input)-2;
}
int check(double a, double b, double(*wielomianptr)(double))
{
  double c,d;
  c =(*wielomianptr)(a);
  d =(*wielomianptr)(b);
    
  if(c*d>0)
    return 0;
  return 1;
}
double bezwzgld(double a)
{
  if(a<0)
    a=-a;
  return a;
}


double bisekcja(double a,double b,double (*wielomianptr)(double),double epsilon)
{
  if(!check(a,b,wielomianptr))
    {
      printf("zly przedzial\n");
      return 0;
    }

  double c;
  if(a>b)
    {
      c=a;
      a=b;
      b=c;
    }
  c = a;
  double out = (*wielomianptr)(c);
  
  while(bezwzgld(out)>epsilon)
    {
      printf("a=%lf,b=%lf,c=%lf,y(c)=%lf\n",a,b,c,out);
      out = (*wielomianptr)(c);
      
      c = a+bezwzgld(b-a)/2;
      if(check(a,c,wielomianptr))
	{
	  b=c;
	}
      else
	{
	  a=c;
	}
      out = (*wielomianptr)(c);
      
      if(a==b)
	break;
    }
  
  


  return c;
}




int main()
{
  //printf("%lf\n",bezwzgld(-4));
  printf("%lf\n",bisekcja(1,2 ,&wielomian2,0.1));

}
