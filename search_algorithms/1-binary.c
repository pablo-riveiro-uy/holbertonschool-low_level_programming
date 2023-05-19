#include "search_algos.h"

/**
 * linear_search - do a linear search on a array
 * @array: vector of ints
 * @size: size of the array
 * @value: value to search for on array
 * Return: index where value is found or -1 on not
 */

int binary_search(int *array, size_t size, int value)
{
    int found;

    if (!array || size == 0 || !value)
        return(-1);

    found = binary_recursion(array, size, 0, size, value);

    printf("found at END %d\n", found);

    if (array[found] == value)
        return (found);

    return (-1);
}

int binary_recursion(int *array, size_t size, size_t LOW, size_t HIGH, int value)
{
    size_t m_index = (HIGH - LOW) / 2;
    
    print_array(array, LOW, HIGH);

    printf("low %ld, hight %ld, numARRRAY %d \n", LOW, HIGH, array[m_index]);

    if (m_index != '\0')
    {
        if (array[m_index] == value)
        {
            puts("encontrado !!!!\n");
            printf("index %ld, contenido %d\n", m_index, array[m_index]);
            return (m_index);
        }
        m_index = (HIGH - LOW) /2;
    }else
        m_index = (HIGH - LOW) /2;

     if (array[m_index] == value)
        return (m_index);



    if (array[m_index] > value)
    {
        LOW = 0;
        HIGH = m_index - 1;
        if (LOW < HIGH)
            binary_recursion(array, size, LOW, HIGH, value);
    }
    else
    {
        if (array[m_index] < value)
        {
            LOW = m_index + 1;
            HIGH = size;
            if (LOW < HIGH)
                binary_recursion(array, size, LOW, HIGH, value);
        }
    }

    return (m_index);



    return(m_index);
}

void print_array(int *array, size_t LOW, size_t HIGH)
{
        printf("Searching in array: ");
    	for (; LOW <= HIGH -1; LOW++)
        {
            printf("%d", array[LOW]);
            if (LOW != HIGH - 1)
                printf(", ");
        }
        printf("\n");
}
