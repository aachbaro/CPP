#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
template<typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_tab;

	public:

		Array() : _size(0), _tab(NULL) {}
		Array(unsigned int n) : _size(n)	{	this->_tab = new T[this->_size];	}
		Array( Array const & src )	{ *this = src;	}
		~Array()	{	delete [] this->_tab;	}

		Array &		operator=( Array const & rhs )
		{
			this->_tab = new T[rhs._size];
			this->_size = rhs._size;
			for (unsigned int i = 0; i < this->_size; i++)
				this->_tab[i] = rhs._tab[i];
			return (*this);
		}

		T & operator[](int i) 
		{
			if (i >= static_cast<int>(this->_size) || i < 0)
				throw std::overflow_error("Invalid index");
			return this->_tab[i];
		}

		void		size(void) const {	return (this->_size);	}
};

#endif /* *********************************************************** ARRAY_H */