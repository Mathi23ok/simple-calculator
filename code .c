#include <stdio.h>
#include <math.h>

void print_menu();

int main(){
    double a,b;
    int c;
    while(1){
        print_menu();
        printf("Enter your choice to perform :\n");
        scanf("%d",&c);
        if(c==7){
            break;
        }
    }
    
    
printf("Enter a number 1 :\n");
scanf("%lf",&a);
printf("Enter a number 2 :\n");
scanf("%lf",&b);
 
 void print_menu(){
 printf("Welcome to the calculator where you can perform these operation :\n");
printf("operation : \n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Power\n6.Modulus\n7.Exit\n");
}

switch(c){
    case 1 :
    printf("%.2f",a+b);
    break;
    case 2:
    printf("%.2f",a-b);
    break;
    case 3:
    printf("%.2f",a*b);
    break;
    case 4:
    printf("%.2f",a/b);
    break;
    case 5:
    printf("%.2f",pow(a,b));
    break;
    case 6 :

    printf("%d", (int)a% (int)b);
    break;
    default:
    printf("Invalid !!");
}
}
