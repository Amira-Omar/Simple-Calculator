#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char op;
    char check;
float sum,sub,div,multi;
    do{
        printf("Enter number 1:");
        _flushall();
        scanf("%f",&num1);
        printf("Enter number 2:");
        _flushall();
        scanf("%f",&num2);
        printf("Enter operator:");
        _flushall();
        scanf("%c",&op);

        switch(op){
        case '+':
               sum=num1+num2;
            printf("The Sum is \t %f\n",sum);
            break;
        case '-':
          sub=num1-num2;
            printf("The sub is \t %f\n",sub);
            break;
        case '/':
            div=num1/num2;
            printf("The div is \t %f\n",div);
            break;
        case '*':
             multi=num1*num2;
            printf("The multiple is \t %f\n",multi);
        default:
          printf("wrong symbol\n");
          break;
        }

        /*if(op=='+'){
            float sum=num1+num2;
            printf("The Sum is \t %f\n",sum);
        }else if(op=='-'){
            float sub=num1-num2;
            printf("The sub is \t %f\n",sub);
        }else if(op=='/'){
            float div=num1/num2;
            printf("The div is \t %f\n",div);
        }else if(op=='*'){
            float multi=num1*num2;
            printf("The multiple is \t %f\n",multi);
        }else{
            printf("wrong symbol\n");
        }*/
          printf("Do you want to continue! please enter Y,N\n");
          _flushall();
          scanf("%c",&check);
    }while(check=='Y' || check=='y');
    return 0;
}
