#ifndef TDYNAMICARRAY_H
#define	TDYNAMICARRAY_H
#include <cstdlib>
#include <iostream>

template<class T>
class DynamicArray {
	long size;               //размер массива
	long count;              //количество элементов в массиве
	T* p;                    //указатель на начало массива

public:
	//конструкторы
	DynamicArray(long s = 10) : size(s), count(0) {
		p = new T[size];
		if (!p)
			cout << "Ошибка при создании массива" << endl;
	}
	DynamicArray(const DynamicArray& arr);    //конструктор копирования

	//деструктор
	~DynamicArray() {
		if (p) delete[] p;
	}

	//функции
	void add(T x);                  //прибавить элемент в конец массива
	void remove();                          //удалить последний элемент
	long length() const { return size; }                 //длина массива
	void print() const;                                //вывод на экран

	//операторы
	DynamicArray& operator=(const DynamicArray& arr);  //присваивание
	T operator [] (long i) const;                      //индексация
	DynamicArray& operator+(const DynamicArray& arr);  //сложение
};

#endif	/* TDYMANICARRAY_H */