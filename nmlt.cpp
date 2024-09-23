#include <iostream>
using namespace std;

// Hàm tính tích các chữ số của một số nguyên dương, bỏ qua chữ số 0
int calculateProduct(int n) {
    int product = 1;
    bool hasNonZeroDigit = false;  // Đảm bảo có ít nhất 1 chữ số khác 0

    while (n > 0) {
        int digit = n % 10;  // Lấy chữ số cuối
        if (digit != 0) {
            product *= digit;
            hasNonZeroDigit = true;
        }
        n /= 10;  // Bỏ chữ số cuối
    }

    // Nếu không có chữ số khác 0 (tức n toàn số 0), trả về 1
    return hasNonZeroDigit ? product : 1;
}

int main() {
    int number;

    // (a) Nhập số nguyên dương, yêu cầu nhập lại nếu không hợp lệ
    do {
        cout << "Nhập vào một số nguyên dương: ";
        cin >> number;
    } while (number <= 0);

    // (b) Tính tích các chữ số, in kết quả
    cout << "Các giá trị tích lần lượt là: ";
    int product = calculateProduct(number);
    cout << product << " ";  // In tích lần đầu

    // (c) Lặp lại quá trình tính tích đến khi giá trị tích chỉ còn một chữ số
    while (product >= 10) {
        product = calculateProduct(product);
        cout << product << " ";
    }

    cout << endl;
    return 0;
}