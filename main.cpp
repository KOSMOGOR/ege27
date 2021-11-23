#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div() {
    /**
    + 1. ������� � ��������� ������� �����
    + 2. ������� ��� ����
    + 3. ������ ������ ���� ��������� � ������������
    + 4. ������� ������ ����, ������������ ������� ������ 110
    + 5. ���-�� ���, ������������ ������� ������ 110
    */
    int n, c(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n - 1; ++i)
        for (int j(i + 1); j < n; ++j)
            if ((numbers[i] * numbers[j]) % 110 == 0)
                ++c;
    cout << c;
}

int main()
{
    number_of_products_div();
    return 0;
}
