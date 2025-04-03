#include "iter.hpp"

template <typename T>
void	addOne(T &value)
{
	value++;
}

int	main()
{
	int		len = 5;
	int		*arr = new int[len] {1, 2, 3, 4, 5};
	iter(arr, len, addOne);

}