#include <stdio.h>

char opr;
double one, two;
int main() {
printf("╭────────────╮\n│   Mokalc   │\n│ written by │\n│   мока <3  │\n╰────────────╯\n\n");
printf("input operator\n");
scanf("%c", &opr);
printf("Enter two operands: ");
scanf("%lf %lf", &one, &two);
switch (opr) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", one, two, one + two);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", one, two, one - two);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", one, two, one * two);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", one, two, one / two);
        break;
    default:
        printf("Error! Try again or another Operator, soz.\n");
}
}
