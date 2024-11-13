#include <stdio.h>

char opr;
double one, two;
int main() {
    printf("╭────────────╮\n│   Mokalc   │\n│ written by │\n│   мока <3  │\n╰────────────╯\n\n");
    printf("syntax --> Opr Num Num\n\ninput operation\n");
    scanf("%c %lf %lf", &opr, &one, &two);
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
