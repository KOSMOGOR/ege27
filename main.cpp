#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div() {
    /**
    + 1. ������� � ��������� ������� �����
    + 2. ������� ��� ����
    3. ������ ������ ���� ��������� � ������������
    4. ������� ������ ����, ������������ ������� ������ 55
    5. ���-�� ���, ������������ ������� ������ 15
    */
    int n;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; ++i)
        cin >> numbers[i];
    for (int i(0); i < n - 1; ++i)
        for (int j(i); j < n; ++j)
            cout << numbers[i] << " " << numbers[j] << endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
