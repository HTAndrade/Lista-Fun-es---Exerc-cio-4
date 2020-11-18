#include <stdio.h>

/*4.	Crie a função ReajSalNovo que receba da função main o valor do salário e efetue o cálculo do reajuste de salário cada funcionário. 
Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais. Se o salário for maior ou igual a 
800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Exiba na função main o salário antigo e novo salário obtido na função.*/

float sal, nsal;

int ReajSalNovo(){

  if(sal < 800){
    nsal = (sal * 0.15) + sal;

    printf("Salário atual: %.2f\n(Menor que 800, ajuste de 15%%)\nNovo salário: %.2f", sal, nsal);
  } else if(sal >= 800 && sal < 1000){
    nsal = (sal * 0.10) + sal;

    printf("Salário atual: %.2f\n(Entre 800 e 1000, ajuste de 10%%)\nNovo salário: %.2f", sal, nsal);

  } else if(sal >= 1000){
    nsal = (sal * 0.05) + sal;

    printf("Salário atual: %.2f\n(Maior ou igual a 1000, ajuste de 5%%)\nNovo salário: %.2f", sal, nsal);
  }
  return 0;
}
int main(){
  
  do{
  printf("Digite abaixo o seu salário:\n");
  scanf("%f", &sal);

    if(sal <= 0){
      printf("\nDigite um valor maior que zero.\n\n");
    }
  } while(sal <= 0);

  if(sal > 0){
  ReajSalNovo();
  }
}