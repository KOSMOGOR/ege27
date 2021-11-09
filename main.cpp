#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div() {
    /**
    + 1. считать и запомнить входные числа
    2. вывести все пары
    3. вместо вывода пары посчитать её произведение
    4. вывести только пары, произведение которых кратно 55
    5. кол-во пар, произведение которых кратно 15
    */
    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n; ++i)
        cout << numbers[i];
}

int main()
{
    number_of_products_div();
    return 0;
}
