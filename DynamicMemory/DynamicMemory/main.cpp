#include "Functions.h"
#include "Functions.cpp"

//int* PopBack(int arr[], int& n);

void main()
{
	setlocale(LC_ALL, "rus");
	int n;  //������ �������
	cout << "������� ������: "; cin >> n;
	int* arr = new int[n];
	int num = 0;


	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "������� ��������: "; cin >> value;
	arr = PushBack(arr, n, value);
	Print(arr, n);

	cout << "������� ��������: "; cin >> value;
	arr = PushFront(arr, n, value);
	Print(arr, n);

	cout << "������� ��������: "; cin >> value;
	cout << "������� ����� ������: "; cin >> num;
	arr = Insert(arr,n, value, num);
	Print(arr, n);

	//arr = PopBack(arr, n);
	Print(arr, n);
	delete[] arr;
}


/*int* PopBack(int arr[], int& n)
{

	int* buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}

	delete arr;
	arr = buffer;

	return arr;//�����������
}*/