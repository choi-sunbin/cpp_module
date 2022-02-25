#if !defined(ARRAY_HPP)
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int size;
	T *array;

public:
	Array<T>():size(0), array(NULL)
	{
	};
	Array<T>(unsigned int size) : size(size)
	{
		this->array = new T[size];
		this->size = size;
	};
	Array<T>(const Array &other)
	{
		this->array = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); i++)
			this->array[i] = other[i];
	};

	Array<T> &operator=(const Array &other)
	{
		unsigned int loop;
	
		if (this == &other)
			return (*this);
		if (this->size > 0)
			delete [] this->array;
		this->size = other.size;
		this->array = new T[other.size];
		loop = 0;
		while (loop < other.size)
		{
			this->array[loop] = other[loop];
			loop++;
		}
		return *this;
	};
	~Array()
	{
		delete[] this->array;
	};

	T &operator[](int index) const
	{
		if (index < 0 || index >= static_cast<int>(this->size))
			throw Array::OutOfRangeException();
		return this->array[index];
	};

	T *getArray() const
	{
		return this->array;
	};

	unsigned int getSize() const
	{
		return this->size;
	}

	class OutOfRangeException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Out of range";
		}
	};
};

#endif
