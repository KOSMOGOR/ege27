#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance() {
    /**
    + 1. ������� 4 ����� � �������
    + 2. ����� � ������ - ������������� ������� �� ����������
    + 3. �������� ��� ����� � �������
    + 4. ������� ����� ����� � ���� �������
    + 5. ������� ������� � ���������� �������
    + 6. ������� ���� �� ����� ������� � ������������ �����
    + 7. ��� �������� �� ����������� ����
    8. ���� ��� ������� ��������, ���������
    */
    int minpair = 2000;
    vector<int> worm(4, 0);
    for (int i(0); i < 4; ++i)
        cin >> worm[i];
    int minn = worm[0];
    if (worm[0] < minn)
        minn = worm[0];
    for (int i(0); i < 3; ++i)
        worm[i] = worm[i + 1];
    cin >> worm[3];
    if (minn + worm[3] < minpair)
        minpair = minn + worm[3];
}

int main()
{
    min_sum_distance();
    return 0;
}
