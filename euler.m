function [n,k,ex,ep] = euler (x, ep)
  n=0;
  ex=0;
  while((exp(x) - ex)> ep)
    an = x.^n / factorial(n);
    n+=1
    an2 = x.^n / factorial(n);
    k = an2/an
    ex += an
  endwhile
endfunction
