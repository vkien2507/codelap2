#include <stdio.h>

int main() {
    float num1, num2;
    char choice;


    printf("Nhap vao so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%f", &num2);

    printf("Lua chon phep tinh (+, -, x, /): ");
    scanf(" %c", &choice);

    switch (choice) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 'x':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Khong the chia cho 0.\n");
            }
            break;
        default:
            printf("Lua chon khong hop le.\n");
    }

}
