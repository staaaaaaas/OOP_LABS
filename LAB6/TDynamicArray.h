#ifndef TDYNAMICARRAY_H
#define	TDYNAMICARRAY_H
#include <cstdlib>
#include <iostream>

template<class T>
class DynamicArray {
	long size;               //������ �������
	long count;              //���������� ��������� � �������
	T* p;                    //��������� �� ������ �������

public:
	//������������
	DynamicArray(long s = 10) : size(s), count(0) {
		p = new T[size];
		if (!p)
			cout << "������ ��� �������� �������" << endl;
	}
	DynamicArray(const DynamicArray& arr);    //����������� �����������

	//����������
	~DynamicArray() {
		if (p) delete[] p;
	}

	//�������
	void add(T x);                  //��������� ������� � ����� �������
	void remove();                          //������� ��������� �������
	long length() const { return size; }                 //����� �������
	void print() const;                                //����� �� �����

	//���������
	DynamicArray& operator=(const DynamicArray& arr);  //������������
	T operator [] (long i) const;                      //����������
	DynamicArray& operator+(const DynamicArray& arr);  //��������
};

#endif	/* TDYMANICARRAY_H */