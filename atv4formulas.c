#include <stdio.h>

int main(){
    float a, b, c, abc, f1, f2, f3, f4;
    printf("Digite o valor de a, b e c:\n");
    scanf("%f%f%f", &a, &b, &c);
    abc = a * b * c;

    f1 = (a * b) / c;
    f2 = (a * a) + b + (5 * c);
    f3 = abc + b + ( c / 3 * 5) - 1;
    f4 = (abc * abc * abc) / 2;

    printf("O valor das quatro formulas seguintes é:\nf1: %f\nf2: %f\nf3: %f\nf4: %f\n", f1, f2, f3, f4);
return 0;
}
