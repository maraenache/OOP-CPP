#pragma once
template<typename T>
class Vector
{
	int size;
	int max_size;
	T* vector;
public:
	Vector();
	void push(T value);
	T pop();//RETURN THE LAST ELEM
	void remove(int index);//remove el to a specif index
	void insert(int index, T value);
	void print();
	T const& get(int index)const;
	void set (int index, T value);
	void sort(bool (*func)(T,T));
	int count();
	int firstIndexOf(T elem, bool(*func)(T, T));
};
template<typename T>
bool comparareC(T a, T b)
{
	return a > b;
}
template<typename T>
bool comparareD(T a, T b)
{
	return a < b;
}
template<typename T>
bool equal(T a, T b)
{
	return a == b;
}
template<typename T>
inline Vector<T>::Vector()
{
	this->size = 0;
	this->max_size = 1;
	this->vector = new T[max_size];
}

template<typename T>
inline void Vector<T>::push(T value)
{
	if (size + 1 < max_size)
	{
		vector[size] = value;
		size++;
	}
	else
	{
		T* copy = new T[max_size];
		for (unsigned i = 0; i < max_size; i++)
			copy[i] = vector[i];

		vector = new T[max_size * 2];
		max_size *= 2;

		for (unsigned i = 0; i < size; i++)
			vector[i] = copy[i];

		vector[size] = value;
		size++;
	}
}

template<typename T>
inline T Vector<T>::pop()
{
	return vector[size-1];
}

template<typename T>
inline void Vector<T>::remove(int index)
{
	if (index >= 0 && index < size) {
		for (int i = index; i < size; i++)
			vector[i] = vector[i + 1];
		size--;
	}
}

template<typename T>
inline void Vector<T>::insert(int index, T value)
{
	if (index <= size)
	{
		if (size + 1 >= max_size)
		{
			T* copy = new T[max_size];
			for (unsigned i = 0; i < max_size; i++)
				copy[i] = vector[i];

			vector = new T[max_size * 2];
			max_size = max_size * 2;

			for (int i = 0; i < size; i++)
				vector[i] = copy[i];
		}
		size++;
		for (int i = size; i > index; i--)
			vector[i] = vector[i - 1];
		vector[index] = value;
		
	}
}

template<typename T>
inline void Vector<T>::print()
{
	for (int i = 0; i < size; i++)
		std::cout << vector[i] << ' ';
	std::cout << '\n';
}

template<typename T>
inline T const& Vector<T>::get(int index) const
{
	if(index>=0&&index<size)
	return vector[index];
}

template<typename T>
inline void Vector<T>::set( int index, T value)
{
	if (index >= 0 && index < size)
	{
		vector[index] = value;
	}
}

template<typename T>
inline void Vector<T>::sort(bool(*func)(T, T))
{
	if (func == nullptr)
	{
		for (int i = 0; i < size-1; i++)
			for (int j = i + 1; j < size; j++)
				if (vector[i] > vector[j])
					std::swap(vector[i], vector[j]);
	}
	else
	{

		for (int i = 0; i < size - 1; i++)
			for (int j = i + 1; j < size; j++)
				if (func(vector[i],vector[j]))
					std::swap(vector[i], vector[j]);
	}
}

template<typename T>
inline int Vector<T>::count()
{
	return size;
}

template<typename T>
inline int Vector<T>::firstIndexOf(T elem, bool(*func)(T, T))
{
	for (int i = 0; i < size; i++)
		if (func==nullptr && vector[i] == elem)
				return i;
			else if(func!=nullptr&&func(vector[i],elem))
				return i;
}
