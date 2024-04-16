//#include <stdio.h>
//
//int main() {
//    float length_m, length_result;
//    int choice;
//
//    // Nhập độ dài tính theo mét từ người dùng
//    printf("Nhap do dai (m): ");
//    scanf("%f", &length_m);
//
//    // Người dùng chọn đơn vị để đổi
//    printf("Chon don vi doi (1. mm, 2. cm, 3. dm, 4. km): ");
//    scanf("%d", &choice);
//
//    // Chuyển đổi đơn vị dựa vào lựa chọn của người dùng
//    switch (choice) {
//        case 1:
//            length_result = length_m * 1000; // Chuyển từ mét sang milimet
//            printf("Do dai theo mm la: %.2f\n", length_result);
//            break;
//        case 2:
//            length_result = length_m * 100; // Chuyển từ mét sang centimet
//            printf("Do dai theo cm la: %.2f\n", length_result);
//            break;
//        case 3:
//            length_result = length_m * 10; // Chuyển từ mét sang decimet
//            printf("Do dai theo dm la: %.2f\n", length_result);
//            break;
//        case 4:
//            length_result = length_m / 1000; // Chuyển từ mét sang kilomet
//            printf("Do dai theo km la: %.2f\n", length_result);
//            break;
//        default:
//            printf("Lua chon khong hop le.\n");
//    }
//
//}
