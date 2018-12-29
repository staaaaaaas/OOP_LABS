#include"TDynamicArray.h"

//копирующий конструктор
template<class T>
DynamicArray<T>::DynamicArray(const DynamicArray& arr) {
	size = arr.size;
	count = arr.count;
	p = new T[size];
	for (int i = 0; i < count; ++i)
		p[i] = arr.p[i];
}

template<class T>
DynamicArray<T>&
DynamicArray<T>::operator=(const DynamicArray& arr){
if (this != &arr) {       //чтобы избежать присваивания самому себе
	size = arr.size;
	count = arr.count;
	if (p) delete[] p;
	p = new T[size];
	for (int i = 0; i < count; ++i)
		p[i] = arr.p[i];

}
return *this;
}

template<class T>
T DynamicArray<T>::operator[](long i) const {
	if (i < size && i)
		return p[i - 1];
	else
		cout << "Неправильный индекс" << endl;
	return 0;
}

template<class T>
DynamicArray<T>&
DynamicArray<T>::operator+(const DynamicArray& arr) {
	DynamicArray temp(*this);  //сохраняем значения во временном массиве
	if (p) delete[] p;
	size += arr.size;
	count += arr.count;
	p = new T[size];
	for (int i = 0; i < temp.count; ++i)
		p[i] = temp.p[i];
	for (int i = 0; i < arr.count; ++i)
		p[temp.count + i] = arr.p[i];
	return *this;
}

template<class T>
void DynamicArray<T>::print() const {
	cout << "The array contains:" << endl;
	for (int i = 0; i < count; ++i)
		cout << p[i] << ' ';
	cout << endl;
}

template<class T>
void DynamicArray<T>::add(T x) {
	if (count >= size) {
		//увеличиваем размер массива       
		DynamicArray temp(*this);
		if (p) delete[] p;
		size += 10;
		p = new T[size];
		for (int i = 0; i < temp.count; ++i)
			p[i] = temp.p[i];
	}
	p[count++] = x;           //прибавить элемент в конец массива
}

template<class T>
void DynamicArray<T>::remove() {
	if (count)
		p[--count] = 0;    //удалить последний элемент (если массив
						   //не пустой)
	else
		cout << "Array is empty" << endl;
}