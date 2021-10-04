#include <stdio.h>



_Bool IsinArea(double x, double y);
double f(double x);

void main(void)
{
    double x, y;
    int k;
     printf("viberite task 1 ili 2\n");
    scanf_s("%d", &k);
    switch (k)
    {
    case 1:
        printf("vvedite x = \n");
         scanf_s("%lf", &x);
         printf("vvedite y = ");
         scanf_s("%lf", &y);
        if (IsinArea(x, y) == 1)
              printf("vi popali ");
        else
       printf("vi ne popali ");
        break;
    case 2:
         printf("vvedite x = \n");
        scanf_s("%lf", &x);
        printf("f = %lf\n", f(x));
        break;
    default:
         printf("Neverniy vvod");
        break;
    }

}

double f(double x)
{
    return x > 3 ? (-3*x+9) : pow(x,3)/(pow(x,2)+8);

}

_Bool IsinArea(double x, double y)
{

    return (x<=1 && x>=0 && y>=0 && y<=1 || x>=-1 && x<=1 && y<=0 && y>=-1);
}
