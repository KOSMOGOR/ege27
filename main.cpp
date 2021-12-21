#include <iostream>
#include <vector>

using namespace std;

void triples_mul_min_div() {
    /**
    + 1. ввести числа
    + 2. вывод пар
    + 3. вывод троек
    + 4. вывод произведений
    + 5. вывод произведений, делящихся на 4
    + 6. вывод минимального произведения
    */
    int N;
    cin >> N;
    vector<int> vec(N, 0);
    for (int i(0); i < N; ++i)
        cin >> vec[i];
    int min_p = 0;
    int min_arr[3];
    for (int i(0); i < N - 2; ++i)
        for (int j(i + 1); j < N - 1; ++j)
            for (int k(j + 1); k < N; ++k) {
                int p = vec[i] * vec[j] * vec[k];
                if (p % 4 == 0 && (p < min_p || min_p == 0)) {
                    min_p = p;
                    min_arr[0] = vec[i];
                    min_arr[1] = vec[j];
                    min_arr[2] = vec[k];
                }
            }
    cout << min_arr[0] << " " << min_arr[1] << " " << min_arr[2];
}

int main()
{
    triples_mul_min_div();
    return 0;
}
