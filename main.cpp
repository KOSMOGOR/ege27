#include <iostream>

using namespace std;

void number_of_products_div() {
    /**
    + 1. считать число
    2. увеличить один из счётчиков: % 15, % 5, % 3, не %
    3. ответ: n15 * (n15 - 1) + n15 * n5 + n15 * n3 + n15 * n0 + n5 * n3
    */
    int n, cur;
    cin >> n;
    for (int i(0); i < n; ++i) {
        cin >> cur;
        cout << cur;
    }
}

int main()
{
    number_of_products_div();
    return 0;
}
