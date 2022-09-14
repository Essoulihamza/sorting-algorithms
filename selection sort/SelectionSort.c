#include <stdio.h>
void selection_sort(int numbers[], int size);
int main(void)
{
    int size;
    int numbers[size - 1];
    //take the size of the array from user.
    printf("Select the size of the array: ");
    scanf("%i", &size);
    for(int i = 0; i < size; i++ )
    {
        printf("Enter the %ith value: ", i + 1 );
        scanf("%i", &numbers[i]);
    }
    selection_sort(numbers, size);
    for(int i = 0; i < size; i++ )
    {
        printf("%i, ", numbers[i]);
    }
}
void selection_sort(int numbers[], int size)
{
    int temp, min_pos;
    for( int i = 0; i < size - 1; i++ )
    {
        min_pos = i;
        for( int j = i + 1; j < size; j++ )
        {
            if(numbers[j] < numbers[min_pos]) 
                min_pos = j;
            if (min_pos != i)
            {
                temp = numbers[i];
                numbers[i] = numbers[min_pos];
                numbers[min_pos] = temp;
            }
        }
    }
}