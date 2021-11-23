#include <iostream>

using namespace std;

void number_of_products_div() {
    /**
    + 1. считать числа
    2. увеличить один из счётчиков: % 110, % 55, % 22, % 10, % 11, % 5, % 2, не %
    3. ответ: n110 * (n110 - 1) / 2 + n110 * (n55 + n22 + n10 + n11 + n5 + n2) + (n55 * n22 + n55 * n10 + n22 * n10) + (n55 * n2 + n22 * n5 + n10 * n11)
    */
    long long n, cur;
    long long n110(0), n55(0), n22(0), n10(0), n11(0), n5(0), n2(0), n0(0);
    cin >> n;
    for (int i(0); i < n; ++i) {
        cin >> cur;
    }
}

int main()
{
    number_of_products_div();
    return 0;
}
