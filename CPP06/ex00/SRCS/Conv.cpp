#include "../INC/Conv.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Conv::Conv()
{
}

Conv::Conv( const Conv & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Conv::~Conv()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Conv &				Conv::operator=( Conv const & rhs )
{
	this->type = rhs.type;
	this->charVal = rhs.charVal;
	this->intVal = rhs.intVal;
	this->floatVal = rhs.floatVal;
	this->doubleVal = rhs.doubleVal;
	return *this;
}

/*
** --------------------------------- FUNCTIONS ---------------------------------
*/

bool	isChar(const char *value)
{
	std::string cpy(value);

	if (cpy.size() != 1)
		return (false);
	if (isdigit(value[0]))
		return (false);
	return (true);
}

bool	isInt(const char *value)
{
	std::string cpy(value);
	unsigned int	i(0);

	if (cpy.length() == 0)
		return (false);
	if (cpy[0] == '-')
		i++;
	if (!isdigit(cpy[i]))
		return (false);
	while (i < cpy.length())
	{
		if (!isdigit(cpy[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	isFloat(const char *value)
{
	std::string cpy(value);
	std::string exce[] = {"-inff", "+inff", "nanf"};
	unsigned int			i(0);

	while (i < 3)
		if (cpy == exce[i++])
			return (true);
	i = 0;
	if (cpy.size() == 0)
		return (false);
	if (cpy[0] == '-')
		i++;
	if (!isdigit(cpy[i]))
		return (false);
	int	pt(0);
	while (cpy[i])
	{
		if (cpy[i] == '.')
			pt++;
		i++;
	}
	if (pt != 1)
		return (false);
	i = 0;
	if (cpy[0] == '-')
		i++;
	while (i < cpy.length() - 1)
	{
		if (!isdigit(cpy[i]) && cpy[i] != '.')
			return (false);
		
		i++;
	}
	if (cpy[i] == 'f')
		return (true);
	return (false);
}

bool	isDouble(const char *value)
{
	std::string cpy(value);
	std::string exce[] = {"-inf", "+inf", "nan"};
	unsigned int	i(0);

	while (i < 3)
		if (cpy == exce[i++])
			return (true);
	i = 0;
	if (cpy.size() == 0)
		return (false);
	if (cpy[0] == '-')
		i++;
	if (!isdigit(cpy[i]))
		return (false);
	int	pt(0);
	while (cpy[i])
	{
		if (cpy[i] == '.')
			pt++;
		i++;
	}
	if (pt != 1)
		return (false);
	i = 0;
	if (cpy[0] == '-')
		i++;
	while (i < cpy.size())
	{
		if (!isdigit(cpy[i]) && cpy[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

void	Conv::getParamType(const char *value)
{
	bool	(*fTab[4])(const char* value) = {isChar, isInt, isFloat, isDouble};
	int		typeTab[4] = {Conv::typeChar, Conv::typeInt, Conv::typeFloat, Conv::typeDouble};
	int		i(0);

	this->type = -1;
	while (i < 4)
	{
		if (fTab[i](value))
			type = typeTab[i];
		i++;
	}
	if (this->type == -1)
		throw Conv::UnknownTypeException();
}

void	Conv::printChar(char c)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c);
	if (roundf(c) == c)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c);
	if (roundf(c) == c)
		std::cout << ".0";
	std::cout << std::endl;
}

void	Conv::printInt(int n)
{
	if (n <= 0 || n > 255 || !isprint(static_cast<char>(n)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << static_cast<float>(n);
	if (roundf(n) == n)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(n);
	if (roundf(n) == n)
		std::cout << ".0";
	std::cout << std::endl;
}

void	Conv::printFloat(float f)
{
	if (f <= 0 || f > 255 || isnan(f))
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() || isnan(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f;
	if (roundf(f) == f)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f);
	if (roundf(f) == f)
		std::cout << ".0";
	std::cout << std::endl;
}

void	Conv::printDouble(double f)
{
	if (f <= 0 || f > 255 || isnan(f))
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() || isnan(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << static_cast<float>(f);
	if (roundf(f) == f)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << f;
	if (roundf(f) == f)
		std::cout << ".0";
	std::cout << std::endl;
}

void	Conv::printValue(void)
{
	if (this->type == this->typeChar)
		this->printChar(this->charVal);
	else if (this->type == this->typeInt)
		this->printInt(this->intVal);
	else if (this->type == this->typeFloat)
		this->printFloat(this->floatVal);
	else if (this->type == this->typeDouble)
		this->printDouble(this->doubleVal);
}

void	Conv::getValue(const char *value)
{
	if (this->type != this->typeChar)
	{
		this->charVal = static_cast<int>(atoi(value));
		this->intVal = atoi(value);
		this->floatVal = atof(value);
		this->doubleVal = atof(value);
	}
	else
	{
		this->charVal = value[0];
		this->intVal = value[0];
		this->floatVal = value[0];
		this->doubleVal = value[0];
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */