#include<stdio.h>
void Addition (float, float);
int main(){
    int i;
    float num1, num2, sum;
    printf("Enter 1st number : ");
    scanf("%f", &num1);
    printf("Enter 2nd number : ");
    scanf("%f", &num2);

    printf("\nEnter your choice");
    printf("\n1: Additon\n2: Subtraction\n3: Multiplication\n4: Division\n");
    
    scanf("%d",&i);
    switch(i){
        case 1: Addition(num1, num2);
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        default:
        break;
    }

return 0;
}

void Addition(float num1, float num2){
    printf("Addition = %.2f", num1 + num2);
}