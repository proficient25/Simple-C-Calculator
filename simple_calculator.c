#include<stdio.h>
void add();
int main(){
    int i;
printf("Enter your choice");
scanf("%d",&i);
switch(i){
    case 1:
    add();
    case 2:
    case 3:
    case 4:
    default:
    break;
}

return 0;
}
void add(){
    
    int num,i;
    float arr[100],sum=0;
    printf("How many numbers you want to add");
    scanf("%d",&num);
    fflush(stdin);
    for(i=0;i<num;i++){
        scanf("%float ",&arr[i]);
    }
      for(i=0;i<num;i++){
          sum = sum+arr[i];
    }
    
    printf("Sum =%f",sum);
}
