/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:24:55 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/10 20:03:06 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <math.h>
# include <cmath>
# include <stdlib.h>

class Conv
{

	public:

		Conv();
		Conv( Conv const & src );
		~Conv();

		Conv &		operator=( Conv const & rhs );

		void		getParamType(const char *value);
		void		printChar(char c);
		void		printInt(int n);
		void		printFloat(float f);
		void		printDouble(double f);
		void		printValue(void);
		void		getValue(const char *value);

		int			type;
		static const int	typeChar = 0;
		static const int	typeInt = 1;
		static const int	typeFloat = 2;
		static const int	typeDouble = 3;
		int			charVal;
		int			intVal;
		float		floatVal;
		double		doubleVal;

		class UnknownTypeException : public std::exception {
    	public :
        	virtual const char* what() const throw() 
        		{return ("Cannot find type");}
    };

	private:

};

#endif /* ************************************************************ CONV_H */