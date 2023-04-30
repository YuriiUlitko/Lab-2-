#include "Matrix.h"
#include <Windows.h>
#include<string>
using namespace std;

void Input(Matrix& a) {
    for (int i = 0; i < a.rows; i++)
    {
        for (int j = 0; j < a.cols; j++)
        {
            cout << "������ "<<j+1<<" ������� "<<i+1<<" �����" << endl;
            cin >> a(i, j);
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int row;
    int col;
    string line = "\n--------------------------------------------------\n";


    cout << "������ ����� ������� A:" << endl;
    
    cin >> row >> col;
    Matrix A(row, col);
    Input(A);
    cout << endl;
    A.Print();
    cout << endl;
    cout << line;

    cout << "������ ����� ������� B:" << endl;
    cin >> row >> col;
    Matrix B(row, col);
    Input(B);
    cout << endl;
    B.Print();

    cout << line;

    if (A == B) {
        cout << "������� A �� � ���" << endl;
    }
    else {
        cout << "������� A �� � �� ���" << endl;
    }

    cout << endl;
    cout << "��������� ������� �:" << endl;
    ++A;
    A.Print();

    cout << endl;
    cout << "��������� ������� B:" << endl;
    ++B;
    B.Print();

    return 0;
}