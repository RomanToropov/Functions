#include "stdifx.h"
#include"Filrand.h"
#include"statistics.h"
#include"Sort.h"
#include"print.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;

	const int B_SIZE = 8;
	int brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "����� ��������� �������: " << Sum(brr, B_SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, B_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, B_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, B_SIZE) << endl;

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;


	int i_arr_2[ROWS][COLS];	//int array 2D
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}