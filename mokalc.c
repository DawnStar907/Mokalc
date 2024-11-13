#include <stdio.h>

char opr;
double one, two;
int main() {
    printf("╭────────────╮\n│   Mokalc   │\n│ written by │\n│   мока <3  │\n╰────────────╯\n\n");
    printf("syntax --> Int Opr Int\n\ninput operation\n");
    scanf("%lf %c %lf", &one, &opr, &two);
    switch (opr) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", one, two, one + two);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", one, two, one - two);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", one, two, one * two);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", one, two, one / two);
            break;
        default:
            printf("Error! Run again or use another Operator, soz.\n");
    }
}
