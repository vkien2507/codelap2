//#include <stdio.h>
//
//int checkRightTriangle(int a, int b, int c) {
//    // kiem tra xem a, b, c co la cac canh cua tam giac khong
//    if (a <= 0 || b <= 0 || c <= 0)
//        return 0;
//
//    // sap xep cac canh de a la canh nho nhat
//    if (a > c) {
//        int temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b > c) {
//        int temp = b;
//        b = c;
//        c = temp;
//    }
//
//    // kiem tra dieu kien tam giac vuong
//    if (a * a + b * b == c * c)
//        return c; // tra ve c la canh huyen neu la tam giac vuong
//    else
//        return 0;
//}
//
//int main() {
//    int a, b, c;
//    printf("Nhap do dai canh a: ");
//    scanf("%d", &a);
//    printf("Nhap do dai canh b: ");
//    scanf("%d", &b);
//    printf("Nhap do dai canh c: ");
//    scanf("%d", &c);
//
//    int hypotenuse = checkRightTriangle(a, b, c);
//    if (hypotenuse != 0) {
//        printf("Ba so nay tao thanh ba canh cua mot tam giac vuong.\n");
//        printf("Canh %d la canh huyen.\n", hypotenuse);
//    } else {
//        printf("Ba so nay khong tao thanh ba canh cua mot tam giac vuong.\n");
//    }
//
//
//}
//
