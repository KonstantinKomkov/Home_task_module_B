#include <stdio.h>
#include <stdint.h>

typedef struct list
{
	uint64_t address;
	size_t size;
	char comment[64];
	struct list *next;
}list;

uint64_t findMaxBlock(list *head)
{
	uint64_t maxAddress = 0;
	size_t maxSize = 0;
	if (head == NULL)
	{
		return 0;
	}
	list *current = head;
	while (current != NULL)
	{
		if (current->size > maxSize)
		{
			maxSize = current->size;
			maxAddress = current->address;
		}
		current = current->next;
	}
	return maxAddress;
}

int main (void)
{
	return 0;
}