#include "Matrix.h"
#include <Windows.h>
#include<string>
using namespace std;

void Input(Matrix& a) {
    for (int i = 0; i < a.rows; i++)
    {
        for (int j = 0; j < a.cols; j++)
        {
            cout << "Введіть "<<j+1<<" елемент "<<i+1<<" рядку" << endl;
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


    cout << "Введіть розмір матриці A:" << endl;
    
    cin >> row >> col;
    Matrix A(row, col);
    Input(A);
    cout << endl;
    A.Print();
    cout << endl;
    cout << line;

    cout << "Введіть розмір матриці B:" << endl;
    cin >> row >> col;
    Matrix B(row, col);
    Input(B);
    cout << endl;
    B.Print();

    cout << line;

    if (A == B) {
        cout << "Матриці A та В рівні" << endl;
    }
    else {
        cout << "Матриці A та В не рівні" << endl;
    }

    cout << endl;
    cout << "Інкремент матриці А:" << endl;
    ++A;
    A.Print();

    cout << endl;
    cout << "Інкремент матриці B:" << endl;
    ++B;
    B.Print();

    return 0;
}