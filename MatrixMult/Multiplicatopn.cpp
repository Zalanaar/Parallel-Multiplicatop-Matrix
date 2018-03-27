#include <iostream>
#include <conio.h>
using namespace std;




void multiplate_with_omp()
{
}

void multiplate_with_pthread()
{
}

void generate_matrix(int **matrix, int dimension_one, int dimension_two)
{


	for (int i = 0; i < dimension_one; i ++)
	{
		for (int j = 0; j < dimension_two; j++)
		{
			matrix[i][j] = ((rand() % 10));
		}

	}

	return;
}

int main()
{
	int **first_matrix;
	int **second_matrix;
	int Matrix_One_dimension_first;
	int Matrix_One_dimension_second;
	int Matrix_Two_dimension_first;
	int Matrix_Two_dimension_second;

///------------------------------initialization dimensions for matrix---------------------------------------------//

	cout << "Print first array dimension for first matrix -> ";
	cin >> Matrix_One_dimension_first;
	cout << "Print second array dimension for first matrix -> ";
	cin >> Matrix_One_dimension_second;

	cout << "Print first array dimension for second matrix -> ";
	cin >> Matrix_Two_dimension_first;
	cout << "Print second array dimension for second matrix -> ";
	cin >> Matrix_Two_dimension_second;

///-----------------------------memory allocation for the matrix-----------------------------------------------//

	first_matrix = (int**)malloc(sizeof(int*)*Matrix_One_dimension_first);
	for (int i = 0; i < Matrix_One_dimension_first; i++)
		first_matrix[i] = (int*)malloc(sizeof(int*)*Matrix_One_dimension_second);

	second_matrix = (int**)malloc(sizeof(int*)*Matrix_Two_dimension_first);
	for (int j = 0; j < Matrix_Two_dimension_first; j++)
		second_matrix[j] = (int*)malloc(sizeof(int*)*Matrix_Two_dimension_second);

	generate_matrix(first_matrix, Matrix_One_dimension_first, Matrix_One_dimension_second);
	generate_matrix(second_matrix, Matrix_Two_dimension_first, Matrix_Two_dimension_second);

	_getch();
}
