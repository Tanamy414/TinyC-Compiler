// Dynamic Programming solution for n-th factorial
int fac(int n) 
{ 
  int f[100];   
  int i; 
  
  f[0] = 1; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      f[i] = i * f[i-1]; 
  } 
  return f[n]; 
} 
  
int main () 
{ 
  int n,fac_num; 
  int err=1;
  printStr("_____________ nth Factorial_____________\n");
  printStr("Input number n:\n");
  n=readInt(&err);
  fac_num = fac(n);
  printStr("nth Factorial is: ");
  printInt(fac_num);
  printStr("\n_________________________\n");
  return 0; 
} 

