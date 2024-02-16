# include<stdio.h>

int main() {
    int r;
    float pi=3.14,v,sa;
    printf("value of r is ");
    scanf("%d", &r);
    v=pi*r*r*r*4/3;
    sa=4*pi*r*r ;
    printf( "volume of sphere is: %.2f \n",v );
    printf("surface area of sphere is : %.2f \n",sa);
return 0;
}