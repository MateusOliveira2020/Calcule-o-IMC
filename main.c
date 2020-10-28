#include <stdio.h>
  /*Elabore um algoritmo onde digite o peso e a altura de uma pessoa. Ao final demonstre o IMC desta pessoa. Considere a tabela (slide 8 da aula 06) para determinar sua situação.
IMC = peso / altura²
*/
int main(void) {
float peso;
float altura;
float imc;
printf("Digite o seu peso\n");
scanf("%f",&peso);
printf("Digite a sua altura\n");
scanf("%f",&altura);
imc=peso/altura*altura;
if(imc<=18.5){
printf("Abaixo do peso\n");
}else{
}if(18.6>=24.9){
printf("Parabens voce esta no peso ideal\n");
}else{
}if(25.0>=29.9){
 printf("Levemente acima do peso\n"); 
}else{
}if(30.0>=34.9){  
printf("Obesidade grau I\n");
}else{
}if(35.0>=39.9){
printf("Obesidade grau II severa\n");
}else{
}if(imc>=40){
printf("Obesidade morbida\n");  
}

  return 0;
}