function retval = dzielenie(input)
  output = 1
  while(check(output,input))
    output=0.5*(input/output+output)
  endwhile
    
endfunction

function retval = positive(input)
  if(input<0)
    retval = -(input)
  else
    retval = input
  endif
endfunction

function retval = check (w,x)
  output = positive(w,x)
  if(output>1)
    retval = 1
  else
    retval = 0
  endif
endfunction
