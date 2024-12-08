#include <stdio.h>
#include <stdint.h>

typedef struct list
{
	void *address;
	size_t size;
	char comment[64];
	struct list *next;
}list;

size_t totalMemoryUsage(list *head)
{
	size_t total_Size = 0;
	if (head == NULL)
	{
		return 0;
	}
	list *current = head;
	while (current != NULL)
	{
		total_Size += current->size;
		current = current->next;
	}
	return total_Size;
}

int main (void)
{
	return 0;
}