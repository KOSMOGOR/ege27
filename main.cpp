#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance() {
    /**
    + 1. ������� ��� �����
    + 2. ������� ��� �����
    + 3. ������� ��� ����
    + 4. ������� ������ ���������� ������ ����
    + 5. ������ ������ - �����
    + 6. ����� ����������� �����
    */
    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    int minn(numbers[0] + numbers[4]);
    for (int i(0); i < n - 4; ++i)
        for (int j(i + 4); j < n; ++j) {
            int s(numbers[i] + numbers[j]);
            if (s < minn)
                minn = s;
        }
    cout << s;
}

int main()
{
    min_sum_distance();
    return 0;
}
