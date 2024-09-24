#include<stdio.h>

int main(){
    int zalh1; 
    int zalh2;


    printf("Enter the first number: ");
    scanf("%d", &zalh1);

    printf("Enter the second number: ");
    scanf("%d", &zalh2);

    printf("Enter the operator: ");
    char op;
    scanf(" %c", &op);

    if(op == '+'){
        printf("The sum of %d and %d is %d\n", zalh1, zalh2, zalh1 + zalh2);
    }else if(op == '-'){
        printf("The difference of %d and %d is %d\n", zalh1, zalh2, zalh1 - zalh2);
    }else if(op == '*'){
        printf("The product of %d and %d is %d\n", zalh1, zalh2, zalh1 * zalh2);
    }else if(op == '/'){
        printf("The division of %d and %d is %d\n", zalh1, zalh2, zalh1 / zalh2);
    }else{
        printf("Invalid operator\n");
    }


    return 0;
}