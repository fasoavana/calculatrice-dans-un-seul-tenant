#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("calculatrice basique dans un seul tenant\n");
 char operator;
 double num1, num2;
 printf("choisir une signe entre(+, -, *, /): \n");
 scanf(" %c",&operator);
 printf("entrer le premier nombre : ");
 scanf("%lf",&num1);
 printf("enter le deuxieme nombre: ");
 scanf("%lf",&num2);

 switch (operator){
 case '+':
 printf("%.2lf + %.2lf = %.2lf",num1,num2,num1 + num2);
 break;

 case '-':
 printf("%.2lf - %.2lf = %.2lf",num1,num2, num1-num2) ;
 break;

 case '*':("%.2lf * %.2lf = %.2lf",num1,num2,num1 * num2 );
 break ;
 case '/': if(num2!=0){
 printf("%.2lf / %.2lf = %.2lf",num1,num2,num1/num2);
 break ;
 }
 else{
    printf("erreur de l'operation,s'il vous plait changer la valeur de deuxieme nombre !");
    break ;
 }
default :{
printf("operateur invalide");
break ;
}

 }



    return 0;
}
