#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance() {
    /**
    + 1. считать 4 числа в червяка
    + 2. число в хвосте - потенциальный минимум из пройденных
    + 3. сдвинуть все числа в червяке
    + 4. считать пятое число в зубы червяку
    + 5. вывести червяка и пройденный минимум
    + 6. собрать пару из зубов червяка и минимального числа
    + 7. это кандидат на минимальную пару
    + 8. один ход червяка закончен, повторяем
    */
    int n;
    cin >> n;
    int minpair(2000);
    vector<int> worm(4, 0);
    for (int i(0); i < 4; ++i)
        cin >> worm[i];
    int minn = worm[0];
    for (int j(0); j < n - 4; ++j) {
        if (worm[0] < minn)
            minn = worm[0];
        for (int i(0); i < 3; ++i)
            worm[i] = worm[i + 1];
        cin >> worm[3];
        if (minn + worm[3] < minpair)
            minpair = minn + worm[3];
    }
    cout << minpair;
}

int main()
{
    min_sum_distance();
    return 0;
}
