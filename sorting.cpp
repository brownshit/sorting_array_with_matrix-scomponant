/*
	sorting_algorithm
*/

#include<iostream>
using namespace std;

class sort {
	double* arr;
	int size;
public:

	void arr_for_sort()//include_newfunc
	{
		//기본 생성자 사용
		cout << "input size : ";
		cin >> size;
		arr = new double[size];
	}
	void input_value() 
	{
		cout << "[sorting할 배열의 factor input]" << endl;
		for (int i = 0; i < this->size; i++)
		{
			cout << "[" << i << "]factor input : ";
			cin >> arr[i];
		}
	}
	double* get_arr() { return arr; }
	double get_size() { return size; }


	void delete_arr(double* arr)
	{
		delete arr;
	}

	double* Sort(double* arr, int n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] > arr[j])
				{
					double itemp = arr[i];
					arr[i] = arr[j];
					arr[j] = itemp;
				}
			}
		}

		return arr;
	}
};

int main()
{
	sort S1;
	S1.arr_for_sort();
	double** matrix = new double* [S1.get_size()];
	for (int i = 0; i < S1.get_size(); i++)
	{
		matrix[i] = new double[S1.get_size()];
		for (int j = 0; j < S1.get_size(); j++)
		{
			cout << "matrix ["<<i<<"]" << "[" << j << "]"<<"factor input : ";
			cin >> matrix[i][j];
		}
	}
	int w;
	cout << "몇 번째 행을 정렬할 것인가 : "; cin >> w;
	S1.Sort(matrix[w], S1.get_size());
	S1.input_value();
	S1.Sort(S1.get_arr(), S1.get_size());	

	for (int i = 0; i < S1.get_size(); i++)
	{
		cout <<"matrix["<<w<<"] sort : " << matrix[w][i];
		cout << "  ";
	}
	cout << endl;
	for (int i = 0; i < S1.get_size(); i++)
	{
		cout << "array sorting";
		cout << S1.get_arr()[i];
		cout << "\t";
	}
	cout << endl;
	return 0;
}