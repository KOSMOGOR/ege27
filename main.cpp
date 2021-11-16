#include <iostream>
#include <vector>

using namespace std;

int control_sum() {
    /**
    + 1. ввести и сохранить числа
    + 2. вывести все пары
    3. вместо пра вывести суммы
    4. проверить делимость сумм
    5. вывести только наибольшую
    */
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n - 1; ++i)
        for (int j(0); j < n; ++j)
            cout << numbers[i] << " " << numbers[j] << endl;
}

int main()
{
    control_sum();
    return 0;
}
