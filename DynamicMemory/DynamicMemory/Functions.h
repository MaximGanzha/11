#pragma once
#include<iostream>
using namespace std;
template<typename T>void FillRand(T arr[], const int n);
template<typename T>void Print(T arr[], const int n);
template<typename T>T* PushBack(T arr[], int& n, T value);
template<typename T>T* PushFront(T arr[], int& n, T value);
template<typename T>T* Insert(T arr[], int& n, T value, int num);