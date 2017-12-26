#pragma once
#include "functionprototypes.h"

void displayfulljoin();

void select_m1_join(char* condition, int value)
{
	int j = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m1 != value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m1 <= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m1 >= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m1 < value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m1 > value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_m2_join(char* condition, int value)
{
	int j = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m2 != value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m2 <= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m2 >= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m2 < value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m2 > value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_m3_join(char* condition, int value)
{
	int j = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 != value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 <= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 >= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 < value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 > value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_m4_join(char* condition, int value)
{
	int j = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 != value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 <= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 >= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 < value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->m3 > value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_avg_join(char* condition, int value)
{
	int j = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->avg != value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->avg <= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->avg >= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->avg < value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->avg > value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_cgpa_join(char* condition, int value)
{
	int j = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->cgpa != value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->cgpa <= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->cgpa >= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->cgpa < value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->cgpa > value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_rollnumber_join(char* condition, int value)
{
	int j = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->rollnum != value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->rollnum <= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->rollnum >= value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->rollnum < value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (join.marks[i]->rollnum > value)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_name_join(char* condition, char* value)
{
	int j = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strstr(join.marks[i]->name, value) == NULL)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strncmp(join.marks[i]->name, value, strlen(value)))
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_phnum_join(char* condition, char* value)
{
	int j = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strstr(join.info[i]->phnum, value) == NULL)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strncmp(join.info[i]->phnum, value, strlen(value)))
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_pin_join(char* condition, char* value)
{
	int j = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strstr(join.info[i]->pin, value) == NULL)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strncmp(join.info[i]->pin, value, strlen(value)))
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}
void select_city_join(char* condition, char* value)
{
	int j = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strstr(join.info[i]->city, value) == NULL)
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strncmp(join.info[i]->city, value, strlen(value)))
			{
				free(join.marks[i]);
				join.marks[i] = NULL;
				free(join.info[i]);
				join.info[i] = NULL;
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void displayfulljoin()
{
	if (join.marks == NULL && join.info == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	system("cls");
	printf("Student Details\n");
	printf("Rno \t\tName \tM1 M2 M3  M4   Avg   CGPA \tPhNum  \t\t\t\tAddress   \t\tCity   \t\tPin\n");
	for (int i = 0; i < join.counttotal; i++)
	{
		if (join.marks[i] != NULL){
			if (join.marks[i]->avg == -1 && join.marks[i]->cgpa == -1)
			{
				printf("%3d. %16s %3d %3d %3d %3d NULL NULL %16s %30s %16s %16s\n", join.marks[i]->rollnum,
					join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4,
					join.info[i]->phnum, join.info[i]->address, join.info[i]->city, join.info[i]->pin);
			}
			else if (join.marks[i]->avg == -1)
			{
				printf("%3d. %16s %3d %3d %3d %3d NULL %.2f %16s %30s %16s %16s\n", join.marks[i]->rollnum,
					join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4, join.marks[i]->cgpa,
					join.info[i]->phnum, join.info[i]->address, join.info[i]->city, join.info[i]->pin);
			}
			else if (join.marks[i]->cgpa == -1)
			{
				printf("%3d. %16s %3d %3d %3d %3d %.2f NULL %16s %30s %16s %16s\n", join.marks[i]->rollnum,
					join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4, join.marks[i]->avg,
					join.info[i]->phnum, join.info[i]->address, join.info[i]->city, join.info[i]->pin);
			}
			else{
				printf("%3d. %16s %3d %3d %3d %3d %.2f %.2f %16s %30s %16s %16s\n", join.marks[i]->rollnum,
					join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4, join.marks[i]->avg, join.marks[i]->cgpa,
					join.info[i]->phnum, join.info[i]->address, join.info[i]->city, join.info[i]->pin);
			}
		}
	}
	system("pause");
	freejoin();
}