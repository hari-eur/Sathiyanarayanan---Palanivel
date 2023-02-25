#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d + %d : %d\n", a, b, a+b);
    printf("%d - %d : %d\n", a, b, a-b);
    printf("%d x %d : %d\n", a, b, a*b);
    printf("%d / %d : %d\n", a, b, a/b);
    printf("%d modulo %d : %d\n", a, b, a%b);
    printf("%d & %d : %d\n", a, b, a&b);
    printf("%d | %d : %d\n", a, b, a|b);
    printf("%d ^ %d : %d\n", a, b, a^b);
    printf("%d << %d : %d\n", a, b, a<<b);
    printf("%d >> %d : %d\n", a, b, a>>b);
    printf("size of a : %ld\n", sizeof(a));
    return 0;
}