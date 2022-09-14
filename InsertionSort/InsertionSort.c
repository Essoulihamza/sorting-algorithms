#include <stdio.h>
void InsertingSort(int numbers[], int size );
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
    InsertingSort( numbers, size );
    for(int i = 0; i < size; i++ )
    {
        printf("%i, ", numbers[i]);
    }
}
void InsertingSort(int numbers[], int size )
{
    int temp, j;
    for( int i = 1; i < size; i++ )
    {
        temp = numbers[i];
        j = i - 1;
        while ( j >= 0 && numbers[j] > temp )
        {
            numbers[j + 1] = numbers[j];
            j -= 1;
        }
        numbers[j + 1] = temp;
    }
}