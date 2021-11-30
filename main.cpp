#include <iostream>

using namespace std;

void min_sum_distance() {
    /**
    + 1. считать все числа
    + 2. вывести все числа
    3. вывести все пары
    4. вывести только достаточно далёкие пары
    5. вместо вывода - сумма
    6. найти минимальную сумму
    */
    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n; ++i)
        cout << numbers[i] << endl;
}

int main()
{
    min_sum_distance();
    return 0;
}
