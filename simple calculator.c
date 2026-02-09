#include <stdio.h>
int main() {
    int a,b;
    char op;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);
    printf("Enter operator: ");
    scanf("\n %c", &op);
    if (op == '+'){
        printf("Sum:%d", a+b);
    }
    else if(op == '-'){
        printf("Diff: %d", a-b);
    }
    else if(op == '*'){
        printf("Product: %d", a*b);
    }
    else if(op == '/'){
        printf("Quotient: %d", a/b);
    }
    else{
        printf("Invalid Operator");
    }
    return 0;
}