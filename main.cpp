#include <iostream>
#include <vector>

using namespace std;

void triples_mul_min_div() {
    /**
    + 1. ввести числа
    + 2. вывод пар
    + 3. вывод троек
    4. вывод произведений
    5. вывод произведений, делящихся на 4
    6. вывод минимального произведения
    */
    int N;
    cin >> N;
    vector<int> vec(N, 0);
    for (int i(0); i < N; ++i)
        cin >> vec[i];
    for (int i(0); i < N - 2; ++i)
        for (int j(i + 1); j < N - 1; ++j)
            for (int k(j + 1); k < N; ++k)
            cout << vec[i] << " " << vec[j] << " " << vec[k] << endl;
}

int main()
{
    triples_mul_min_div();
    return 0;
}
