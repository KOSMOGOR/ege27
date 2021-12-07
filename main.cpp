#include <iostream>
#include <vector>

using namespace std;

void min_distance_sum_div() {
    /**
    + 1. ввести числа
    + 2. вывести все возможные пары
    + 3. вывести пары, разность индексов которых меньше 8
    + 4. вывести сумму чисел
    5. вывести суммы только кратные 28
    6. вывести количество сумм
    */
    int n;
    cin >> n;
    vector<int> vec(0, n);
    for (int i(0); i < n; ++i) {
        cin >> vec[i];
    }
    for (int i(0); i < n; ++i)
        for (int j(0); j < n; ++j)
            if (j - i < 8) {
                int s = vec[i] + vec[j];
                cout << s << endl;
            }
}

int main()
{
    return 0;
}
