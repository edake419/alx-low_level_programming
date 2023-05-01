#include "function_pointers.h"

/**
*array_iterator - executes function
*@array: a pointer to the first element of the array.
*@size: the number of elements in the array.
*@action: a function pointer to the function that will be applied to each element in the array.
*
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array != NULL && action != NULL)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
