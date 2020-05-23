#include"Functions.h"
template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}
template<typename T>
T* PushBack(T arr[], int& n, T value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	buffer = nullptr;
	arr[n++] = value;
	return arr;
}
template<typename T>T* PushFront(T arr[], int& n, T value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	arr = buffer;
	buffer = nullptr;
	arr[0] = value;
	n++;
	return arr;
}
template<typename T>T* Insert(T arr[], int& n, T value, int num) {
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < num; i++)buffer[i] = arr[i];
	for (int i = num; i < n; i++)buffer[i + 1] = arr[i];
	delete[] arr;

	arr = buffer;

	arr[num] = value;
	n++;
	return arr;
}