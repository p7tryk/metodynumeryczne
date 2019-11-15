function [a] = pierwiastek(in)
  out = 1;
  while(check(out,in))
    out=0.5*((in)/out+out);
    printf("%f\n",out)
  endwhile
  a = out;
endfunction

function [b] = positive(in)
  if(in<0)
    b = -(in);
  else
    b = in;
  endif
endfunction

function [c] = check (w,x)
  out = positive(w*w -x);
  if(out>1)
    c = 1;
  else
    c = 0;
  endif
endfunction
