#include <stddef.h>

int square_sum(const int values[], size_t count)
{
	int sum = 0, i;

	for (i = 0; i < count; i++)
		sum += values[i] * values[i];

	return (sum);
}
