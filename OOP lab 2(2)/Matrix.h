#pragma once
#include <iostream>
using namespace std;
class Matrix
{
private:
	int rows, cols;
	double** data;

public:
	Matrix(int rows, int cols) {
		this->rows = rows;
		this->cols = cols;

		data = new double* [rows];
		for (int i = 0; i < rows; i++) {
			data[i] = new double[cols];
		}
	}

	~Matrix() {
		for (int i = 0; i < rows; i++) {
			delete[] data[i];
		}
		delete[] data;
	}

	double& operator() (int row, int col) {
		return data[row][col];
	}

	bool operator== (Matrix& other) {
		if (rows != other.rows || cols != other.cols) {
			return false;
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (data[i][j] != other(i, j)) {
					return false;
				}
			}
		}
		return true;
	}

	Matrix& operator++() {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				this->data[i][j] += 1;
			}
		}
		return *this;
	}
	void Print()
	{
		for (int i = 0; i < rows; i++) {
			cout << "|";
			for (int j = 0; j < cols; j++) {			
					cout << data[i][j];
					if (j == cols - 1) {
						cout << "|";
					}
					else {
						cout << "\t";
					}
			}
			cout << endl;
		}
	}
	friend void Input(Matrix &a);


};

