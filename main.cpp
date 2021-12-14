#include <iostream>
#include <vector>

using namespace std;

void div_distance_max_sum() {
    /**
    + 1. ввести числа
    + 2. вывести все пары
    3. вывести пары с кратной разностью индексов
    4. вывести их сумму
    5. найти максимальную сумму
    */
    int n;
    cin >> n;
    vector<int> vec(0, n);
    for (int i(0); i < n; ++i)
        cin >> vec[i];
    for (int i(0); i < n - 1; ++i)
        for (int j(i + 1); j < n; ++j) {
            if ((j - i) % 6 == 0)
                cout << vec[i] << " " << vec[j];
        }
}

int main()
{
    div_distance_max_sum();
    return 0;
}
