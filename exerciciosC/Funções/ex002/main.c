#include <stdio.h>

int VerificarPrimo(int num) {

  if (numero < 2) 
  {
    return 0;
  }

  for (int i = 2; i * i<= num; i++)
  {
    if (numero % i == 0)
    {
      return 0;
    }
    
  }

  return 1;
  
  
}

int main () {

  int num = 5;
  if (VerificarPrimo(num))
  {
    printf("%d é um numero primo. \n", num);

  } else {

    printf("%d não é um numero primo. \n", num);

  }

  return 0;
  
}