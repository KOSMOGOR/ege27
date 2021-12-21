#include <iostream>

using namespace std;

int my_min(int arr1[8][3]) {
    int arr[8];
    for (int i(0); i < 8; ++i)
        arr[i] = arr1[i][0] * arr1[i][1] * arr1[i][2];
    int minn(arr[0]), mini = 0;
    for (int i(0); i < 8; ++i)
        if (arr[i] < minn && arr[i] != 0 || minn == 0) {
            minn = arr[i];
            mini = i;
        }
    return mini;
}

void triples_mul_min_div() {
    /**
    + 1. создать массивы, которые будут хранить 3 минимальных числа % 4, 3 минимальных числа % 2, 2 минимальных числа % 1
    + 2. вводить числа, проверяя их делимость и выбирать из них минимальные
    + 3. итоговый ответ: my_min({{d4[0], d4[1], d4[2]}, {d4[0], d4[1], d2[0]}, {d4[0], d4[1], d1[0]},
                                {d4[0], d2[0], d2[1]}, {d4[0], d2[0], d1[0]}, {d4[0], d1[0], d1[1]},
                                {d2[0], d2[1], d2[2]}, {d2[0], d2[1], d1[0]}})
    */
    int N, n, d4[3] = {0, 0, 0}, d2[3] = {0, 0 ,0}, d1[2] = {0, 0};
    cin >> N;
    for (int i(0); i < N; ++i) {
        cin >> n;
        if (n % 4 == 0) {
            if (n <= d4[0] || d4[0] == 0) {
                d4[2] = d4[1];
                d4[1] = d4[0];
                d4[0] = n;
            } else if (n <= d4[1] || d4[1] == 0) {
                d4[2] = d4[1];
                d4[1] = n;
            } else if (n < d4[2] || d4[2] == 0) {
                d4[2] = n;
            }
        }
        else if (n % 2 == 0) {
            if (n <= d2[0] || d2[0] == 0) {
                d2[2] = d2[1];
                d2[1] = d2[0];
                d2[0] = n;
            } else if (n <= d2[1] || d2[1] == 0) {
                d2[2] = d2[1];
                d2[1] = n;
            } else if (n < d2[2] || d2[2] == 0) {
                d2[2] = n;
            }
        }
        else {
            if (n <= d1[0] || d1[0] == 0) {
                d1[1] = d1[0];
                d1[0] = n;
            } else if (n < d1[1] || d1[1] == 0) {
                d1[1] = n;
            }
        }
    }

    int res[8][3] = {{d4[0], d4[1], d4[2]}, {d4[0], d4[1], d2[0]}, {d4[0], d4[1], d1[0]},
                {d4[0], d2[0], d2[1]}, {d4[0], d2[0], d1[0]}, {d4[0], d1[0], d1[1]},
                {d2[0], d2[1], d2[2]}, {d2[0], d2[1], d1[0]}};
    int resi = my_min(res);
    for (int i(0); i < 3; ++i)
        cout << res[resi][i] << " ";
}

int main()
{
    triples_mul_min_div();
    return 0;
}
