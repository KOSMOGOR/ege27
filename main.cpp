#include <iostream>
#include <vector>

using namespace std;

int control_sum() {
    /**
    + 1. ������ � ��������� �����
    + 2. ������� ��� ����
    + 3. ������ ��� ������� �����
    + 4. ��������� ��������� ����
    5. ������� ������ ����������
    */
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n - 1; ++i)
        for (int j(0); j < n; ++j) {
            int s = numbers[i] + numbers[j];
            if (s % 2)
                cout << s << endl;
        }
}

int main()
{
    control_sum();
    return 0;
}
