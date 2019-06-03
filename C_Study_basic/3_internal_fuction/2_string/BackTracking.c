#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define MAX_NUM (100)

typedef enum {
	FALSE = 0,
	TRUE = 1
}BOOL;

int g_test_input_arr[MAX_NUM];
int g_max_input_num = 0;

BOOL complete_flag = FALSE;

BOOL IsComplete(char* input, int depth, int data)
{
	if (depth == (data - 1))	return TRUE;
	else				return FALSE;
}

void FinalProcess(char arr[])
{
	int i;
	printf("{");
	for (i = 0; i < g_max_input_num; i++)
	{
		if (arr[i] == 1)
		{
			printf("%5d", g_test_input_arr[i]);
		}
	}
	printf(" }\n");
}

void FindNextTargets(char arr[], int depth, int data, char* next_targets, int* num_of_next_targets)
{
	next_targets[0] = 0;
	next_targets[1] = 1;

	*num_of_next_targets = 2;
}

BOOL Backtracking(char arr[], int depth, int data)
{
	int i;

	// Check whether this combination is the solution or not.
	if (IsComplete(arr, depth, data))
	{
		FinalProcess(arr);		// Go the final process.
		//complete_flag = TRUE;	// Finish.
	}
	else
	{
		int num_of_next_targets = 0;
		char next_targets[MAX_NUM];

		// Increase the count of depth.
		depth++;

		// Update the list of next targets and the number.
		FindNextTargets(arr, depth, data, next_targets, &num_of_next_targets);

		// Check every feasible target.
		for (i = 0; i < num_of_next_targets; i++)
		{
			arr[depth] = next_targets[i];
			Backtracking(arr, depth, data);

			// If finished, every function is return '0' and closed.
			//if (complete_flag) return TRUE;
		}
	}
}

int main(void)
{
	int i;
	char* backtrack_arr;

	scanf("%d", &g_max_input_num);

	backtrack_arr = (char*)malloc(sizeof(char) * g_max_input_num);

	for (i = 0; i < g_max_input_num; i++)
	{
		scanf("%d", &(g_test_input_arr[i]));
	}

	for (i = 0; i < 2; i++)
	{
		backtrack_arr[0] = i;
		Backtracking(backtrack_arr, 0, g_max_input_num);
	}

	free(backtrack_arr);
}