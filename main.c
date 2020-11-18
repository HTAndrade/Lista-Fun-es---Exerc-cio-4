#include <stdio.h>

/*4.	Crie a função ReajSalNovo que receba da função main o valor do salário e efetue o cálculo do reajuste de salário cada funcionário. 
Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais. Se o salário for maior ou igual a 
800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Exiba na função main o salário antigo e novo salário obtido na função.*/



int ReajSalNovo(float novosal){

 if(novosal < 800){
      novosal = novosal*0.15 + novosal;
      printf("Seu novo salario é %.2f", novosal);
  } else if(novosal >= 800 && novosal <= 1000){
      novosal = novosal*0.10 + novosal;
      printf("Seu novo salario é %.2f", novosal);
  } else {
      novosal = novosal*0.05 + novosal;
      printf("Seu novo salario é %.2f", novosal);
  }

  return novosal;
}
int main(){

  float sal;
  
  do{
  printf("Digite abaixo o seu salário:\n");
  scanf("%f", &sal);

    if(sal <= 0){
      printf("\nDigite um valor maior que zero.\n\n");
    }
  } while(sal <= 0);

  ReajSalNovo(sal);
  
}