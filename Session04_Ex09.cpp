#include <stdio.h>

// kiem tra nam nhuan
int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
                //nam nhuan
            }
            return 0; // khong phai nam nhuan
        }
        return 1; // Nam nhuan
    }
    return 0; // Không phai nam nhuan
}

int main() {
    int date, month, year;

    //yeu cau nguoi dung nhap cac du kien theo de bai
    printf("Moi ban nhap ngay: ");
    scanf("%d", &date);
    printf("moi ban nhap thang: ");
    scanf("%d", &month);
    printf("moi ban nhap nam: ");
    scanf("%d", &year);

    // kiem tra thang
    if (month < 1 || month > 12) {
        printf("%d thang ban nhap khong hop le\n", month);
    } else {
        printf("%d thang ban nhap hop le roi\n", month);
    }

    // kiem tra nam
    if (year <= 0 || year > 2024) {
        printf("%d nam ban nhap khong hop le\n", year);
    } else {
        printf("%d nam ban nhap da hop le\n", year);
    }

    // kiem tra ngay
    if (month == 2) { // Tháng 2
        if (isLeapYear(year)) { // kiem tra nam nhuan
            if (date >= 1 && date <= 29) {
                printf("%d ngay ban nhap hop le (nam nhuan)\n", date);
            } else {
                printf("Ngày không hop le\n");
            }
        } else {
            if (date >= 1 && date <= 28) {
                printf("%d ngay ban nhap khong hop le (nam khong nhuan)\n", date);
            } else {
                printf("ngay ban nhap hop le?\n");
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // Các tháng có 30 ngày
        if (date >= 1 && date <= 30) {
            printf("%d ngay ban nhap hop le\n", date);
        } else {
            printf("Ngày không hop le\n");
        }
    } else { // Các tháng còn lai có 31 ngày
        if (date >= 1 && date <= 31) {
            printf("%d ngay ban nhap hop le\n", date);
        } else {
            printf("Ngày không hop le\n");
        }
    }

    return 0;
}

