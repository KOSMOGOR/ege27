#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div() {
    /**
    + 1. считать и запомнить входные числа
    + 2. вывести все пары
    + 3. вместо вывода пары посчитать её произведение
    + 4. вывести только пары, произведение которых кратно 110
    + 5. кол-во пар, произведение которых кратно 110
    */
    int n, c(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n - 1; ++i)
        for (int j(i + 1); j < n; ++j)
            if ((numbers[i] * numbers[j]) % 110 == 0)
                ++c;
    cout << c;
}

int main()
{
    number_of_products_div();
    return 0;
}
