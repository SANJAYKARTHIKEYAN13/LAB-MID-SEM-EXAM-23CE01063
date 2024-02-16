
#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,p,q;
    float r,s;
    printf("value of a is \n" );
    scanf("%d",&a);
    printf("value of b is \n" );
    scanf("%d",&b);
    printf("value of c is \n" );
    scanf("%d",&c);
     p=b*b-4*a*c;
     q=pow(p,0.5);
     r=((-b+q)/2*a);
     s=((-b-q)/2*a);
    
    if( p<0){
        printf("Imaginary roots");
    }
    else{
        printf("The roots are : %.2f\n",r);
        printf("%.2f\n",s);

    }
    return 0;

}