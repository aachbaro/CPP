#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <cstdarg>

class Span
{

	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void		addNumber(int n);
		std::vector<int>	getTab();
		unsigned int		shortestSpan() const;
		unsigned int		longestSpan() const;
		void				fillTab(int nbArg, ...);

	private:
		std::vector<int>	_tab;
		unsigned int		_maxSize;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */