#include <iostream>

using namespace std;

void min_sum_distance() {
    /**
    + 1. ������� ��� �����
    + 2. ������� ��� �����
    + 3. ������� ��� ����
    4. ������� ������ ���������� ������ ����
    5. ������ ������ - �����
    6. ����� ����������� �����
    */
    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n - 1; ++i)
        for (int j(i + 1); j < n; ++j)
            cout << numbers[i] << " " << numbers[j] << endl;
}

int main()
{
    min_sum_distance();
    return 0;
}
