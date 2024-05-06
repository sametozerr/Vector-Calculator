#include <stdio.h>
#include "vector.h"
#include <math.h>

int main(int argc, char *argv[]) 
{
	
	struct Vector fVec,sVec,sum; 
	
	fVec.comps[0] = 3;
	fVec.comps[1] = 2;
	fVec.comps[2] = 2;
	
	sVec.comps[0] = 1;
	sVec.comps[1] = 2;
	sVec.comps[2] = 3;
	
	print_vector(vector_product(fVec,sVec));
	
	return 0;
}

struct Vector vector_product(struct Vector first, struct Vector second) 
{
	struct Vector result;
	
	int x = 0, y = 1, z = 2;
	
	result.comps[x] = first.comps[y] * second.comps[z] - first.comps[z] * second.comps[y];
	result.comps[y] = first.comps[z] * second.comps[x] - first.comps[x] * second.comps[z];
	result.comps[z] = first.comps[x] * second.comps[y] - first.comps[y] * second.comps[x];
	
	return result;
}

int scalar_product(struct Vector first, struct Vector second) 
{
	int total = 0;
	
	for(int index = 0; index < 3; index++)
		total += first.comps[index] * second.comps[index];

	return total;
}

struct Vector add(struct Vector first, struct Vector second) 
{
	struct Vector total;
	
	for(int index = 0; index < 3; index++)
		total.comps[index] = first.comps[index] + second.comps[index];
	
	return total;	
}

struct Vector sub(struct Vector first, struct Vector second) 
{
	struct Vector total;
	
	for(int index = 0; index < 3; index++)
		total.comps[index] = first.comps[index] - second.comps[index];
	
	return total;	
}

float find_amplitude(struct Vector vec) 
{
	return sqrt(pow(vec.comps[0],2) + pow(vec.comps[1],2) + pow(vec.comps[2],2));    
}

void print_vector(struct Vector vec) 
{
	if(vec.comps[1] > 0)
		printf("%di+",vec.comps[0]);
	else
		printf("%di",vec.comps[0]);	
	
    if(vec.comps[2] > 0)
		printf("%dj+",vec.comps[1]);
	else
		printf("%dj",vec.comps[1]);
	
	printf("%dk ",vec.comps[2]);
}
