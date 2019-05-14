/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

Problem Code :SD
*/

#include <stdio.h>
#include <stdlib.h>
struct student {
	
	char name[10];
	int score;
};
void swap(char* str1, char* str2)
{
	int len = 10;
	for (int index1 = 0; index1<len; index1++)
	{
		char temp = str1[index1];
		str1[index1] = str2[index1];
		str2[index1] = temp;
	}
}
void * scoresDescendingSort(struct student *students, int len) {
	if (students==NULL || len<=0)
	{
		return NULL;

	}
	int max = students[0].score;
	for (int index1 = 0; index1 < len; ++index1)
	{

		for (int index2 = index1 + 1; index2 < len; ++index2)
		{

			if (students[index1].score < students[index2].score)
			{
				int temp;
				char *temp1;

				temp = students[index1].score;
				students[index1].score = students[index2].score;
				students[index2].score = temp;
				swap(students[index1].name, students[index2].name);
			}
		}

	}
	return NULL;
}