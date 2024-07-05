#include<malloc.h>

struct date
{
	int d;
	int m; 
	int y;   
   
};

struct cars
{
	char model;
	int year;  
	float price;
	 
};

int main()
{
 	// Allocate memory for an array of 5 integers
	int* arr = (int*)malloc(5 * sizeof(int));

	// Allocate memory for a structure
	struct date* datePtr = (struct date*)malloc(sizeof(struct date));

	// Allocate memory for a dynamically-sized array of structures
	struct cars* carsArr = (struct cars*)malloc(10 * sizeof(struct cars));

	// Free the allocated memory
	free(arr);
	free(datePtr);
	free(carsArr);

	return 0;
}