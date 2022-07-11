#include "../INC/Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int N) : _maxSize(N)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	this->_maxSize = rhs._maxSize;
	this->_tab = rhs._tab;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int n)
{
	if (this->_tab.size() < this->_maxSize)
		this->_tab.push_back(n);
	else
		throw std::overflow_error("Vector full");
}

unsigned int	Span::shortestSpan() const
{
	Span	cpy(*this);
	int res;

	if (this->_tab.size() < 2)
		throw std::logic_error("Cannot use longestSpan with only two numbers");
	sort(cpy._tab.begin(), cpy._tab.end());
	res = *(cpy._tab.begin() + 1) - *cpy._tab.begin();
	for (std::vector<int>::iterator it = cpy._tab.begin(); it != cpy._tab.end() - 1; it++)
		if (res > *(it + 1) - *it)
			res = *(it + 1) - *it;
	return (res);

}

unsigned int	Span::longestSpan() const
{
	Span	cpy(*this);

	if (this->_tab.size() < 2)
		throw std::logic_error("Cannot use longestSpan with only two numbers");
	sort(cpy._tab.begin(), cpy._tab.end());
	return (*(cpy._tab.end() - 1) - *(cpy._tab.begin()));
}

void			Span::fillTab(int nbArg, ...)
{
	va_list ap;

	va_start(ap, nbArg);
	for (int i = 0; i < nbArg; i++)
		this->addNumber(va_arg(ap, int));
	va_end(ap);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>	Span::getTab()	{	return (this->_tab);	}

/* ************************************************************************** */