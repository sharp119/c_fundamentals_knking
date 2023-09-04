#include <stdio.h>

int main() {
    int bill, x20, x10, x5, x1;
    printf("Enter a dollar amount: ");
    scanf("%d", &bill);
    x20 = bill / 20;
    bill = bill % 20;
    x10 = bill / 10;
    bill = bill % 10;
    x5 = bill / 5;
    x1 = bill % 5;
    printf("$20 bill : %d\n$10 bill : %d\n$5 bill : %d\n$1 bill : %d\n", x20, x10, x5, x1);
    return 0;
}