#include <iostream>

using namespace std;

int control_sum() {
    /**
    + 1. считывать только наибольшее наиболььшее чётное и нечётное число
    + 2. проверить, есть ли решение
    3. вывести ответ
    */
    int n, num;
    cin >> n;
    int maxe(-1001), maxo(-1001);
    for (int i(0); i < n; ++i) {
        cin >> num;
        if (num % 2) {
            if (num > maxo) maxo = num;
        } else {
            if (num > maxe) maxe = num;
        }
    }
    if (maxe == 0 || maxo == 0) cout << -1;
}

int main()
{
    control_sum();
    return 0;
}
