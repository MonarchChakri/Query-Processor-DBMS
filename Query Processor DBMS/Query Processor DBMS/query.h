#pragma once
#include "functionprototypes.h"
#include "joinquery.h"

int fun(int i, int j)
{
	copystudentmarks(join.counttotal, i);
	copystudentinfo(j, -1);
	join.counttotal++;
	j++;
	return j;
}

int fun1(int i, int j)
{
	copystudentinfo(j, i);
	join.counttotal++;
	j++;
	return j;
}

void displayproject(char** cols)
{
	int i = 0;
	while (cols[i] != NULL)
	{
		printf("%s ", cols[i]);
		i++;
	}
}

void select_m1(char* condition, int value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m1 == value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m1 > value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m1 < value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m1 >= value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m1 <= value)
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_m2(char* condition, int value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m2 == value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m2 > value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m2 < value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m2 >= value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m2 <= value)
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_m3(char* condition, int value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m3 == value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m3 > value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m3 < value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m3 >= value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m3 <= value)
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_m4(char* condition, int value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m4 == value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m4 > value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m4 < value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m4 >= value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->m4 <= value)
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_avg(char* condition, int value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->avg == value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->avg > value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->avg < value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->avg >= value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->avg <= value)
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_cgpa(char* condition, int value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->cgpa == value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->cgpa > value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->cgpa < value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->cgpa >= value)
			{
				j = fun(i, j);
			}

	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->cgpa <= value)
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_rollnumber(char* condition, int value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->rollnum == value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->rollnum > value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "<"))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->rollnum < value)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, ">="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->rollnum >= value)
			{
				j = fun(i, j);
			}

	}
	else if (!strcmp(condition, "<="))
	{
		for (int i = 0; i < marks.count; i++)
			if (marks.marks[i]->rollnum <= value)
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_name(char* condition, char* value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < marks.count; i++)
			if (strstr(marks.marks[i]->name, value) != NULL)
			{
				j = fun(i, j);
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < marks.count; i++)
			if (!strncmp(marks.marks[i]->name, value, strlen(value)))
			{
				j = fun(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_phnum(char* condition, char* value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < info.countinfo; i++)
			if (strstr(info.info[i]->phnum, value) != NULL)
			{
				j = fun1(i, j);
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < info.countinfo; i++)
			if (!strncmp(info.info[i]->phnum, value, strlen(value)))
			{
				j = fun1(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_pin(char* condition, char* value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < info.countinfo; i++)
			if (strstr(info.info[i]->pin, value) != NULL)
			{
				j = fun1(i, j);
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < info.countinfo; i++)
			if (!strncmp(info.info[i]->pin, value, strlen(value)))
			{
				j = fun1(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void select_city(char* condition, char* value)
{
	int j = 0;
	join.marks = (studentmarks**)malloc(marks.size  * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc(info.sizeinfo  * sizeof(studentinfo*));
	join.counttotal = 0;
	if (!strcmp(condition, "contains"))
	{
		for (int i = 0; i < info.countinfo; i++)
			if (strstr(info.info[i]->city, value) != NULL)
			{
				j = fun1(i, j);
			}
	}
	else if (!strcmp(condition, "startswith"))
	{
		for (int i = 0; i < info.countinfo; i++)
			if (!strncmp(info.info[i]->city, value, strlen(value)))
			{
				j = fun1(i, j);
			}
	}
	else
	{
		printf("Enter a valid command\n");
	}
}

void query()
{
	char* cols = (char*)getvalue(nonterminals, "{A}");
	char* tables = (char*)getvalue(nonterminals, "{B}");
	char* row = (char*)getvalue(nonterminals, "{C}");
	char* condtition = (char*)getvalue(nonterminals, "{D}");
	char* value = (char*)getvalue(nonterminals, "{E}");

	if (!strcmp("*", cols))
	{
		if (!row)
		{
			if (!strcmp(tables, "marks"))
			{
				display();
			}
			else if (!strcmp(tables, "info"))
			{
				displaystudentinfo();
			}
			else if (!strcmp(tables, "info,marks") || !strcmp(tables, "marks,info"))
			{
				joinleft();
				displayjoin();
			}
		}

		else if (!strcmp(tables, "info,marks") || !strcmp(tables, "marks,info"))
		{
			joinleft();
			if (!strcmp(row, "m1"))
			{
				select_m1_join(condtition, atoi(value));
				displayfulljoin();
			}
			else if (!strcmp(row, "m2"))
			{
				select_m2_join(condtition, atoi(value));
				displayfulljoin();
			}
			else if (!strcmp(row, "m3"))
			{
				select_m3_join(condtition, atoi(value));
				displayfulljoin();
			}
			else if (!strcmp(row, "m4"))
			{
				select_m4_join(condtition, atoi(value));
				displayfulljoin();
			}
			else if (!strcmp(row, "avg"))
			{
				select_avg_join(condtition, atoi(value));
				displayfulljoin();
			}
			else if (!strcmp(row, "cgpa"))
			{
				select_cgpa_join(condtition, atoi(value));
				displayfulljoin();
			}
			else if (!strcmp(row, "name"))
			{
				select_name_join(condtition, value);
				displayfulljoin();
			}
			else if (!strcmp(row, "rollnumber"))
			{
				select_rollnumber_join(condtition, atoi(value));
				displayfulljoin();
			}
			else if (!strcmp(row, "city"))
			{
				select_city_join(condtition, value);
				displayfulljoin();
			}
			else if (!strcmp(row, "pin"))
			{
				select_pin_join(condtition, value);
				displayfulljoin();
			}
			else if (!strcmp(row, "phnum"))
			{
				select_phnum_join(condtition, value);
				displayfulljoin();
			}
		}

		else if (!strcmp(row, "m1") && !strcmp(tables, "marks"))
		{
			select_m1(condtition, atoi(value));
			displayleftquery();
		}
		else if (!strcmp(row, "m2") && !strcmp(tables, "marks"))
		{
			select_m2(condtition, atoi(value));
			displayleftquery();
		}
		else if (!strcmp(row, "m3") && !strcmp(tables, "marks"))
		{
			select_m3(condtition, atoi(value));
			displayleftquery();
		}
		else if (!strcmp(row, "m4") && !strcmp(tables, "marks"))
		{
			select_m4(condtition, atoi(value));
			displayleftquery();
		}
		else if (!strcmp(row, "avg") && !strcmp(tables, "marks"))
		{
			select_avg(condtition, atoi(value));
			displayleftquery();
		}
		else if (!strcmp(row, "cgpa") && !strcmp(tables, "marks"))
		{
			select_cgpa(condtition, atoi(value));
			displayleftquery();
		}
		else if (!strcmp(row, "name") && !strcmp(tables, "marks"))
		{
			select_name(condtition, value);
			displayleftquery();
		}
		else if (!strcmp(row, "rollnumber") && !strcmp(tables, "marks"))
		{
			select_rollnumber(condtition, atoi(value));
			displayleftquery();
		}
		else if (!strcmp(row, "city") && !strcmp(tables, "info"))
		{
			select_city(condtition, value);
			displayrightquery();
		}
		else if (!strcmp(row, "pin") && !strcmp(tables, "info"))
		{
			select_pin(condtition, value);
			displayrightquery();
		}
		else if (!strcmp(row, "phnum") && !strcmp(tables, "info"))
		{
			select_phnum(condtition, value);
			displayrightquery();
		}
		else
		{
			printf("Enter a valid command\n");
		}
	}
}

char** split(char* col)
{
	char s[2] = ",";
	char** cols = (char**)malloc(10 * sizeof(char*));

	for (int i = 0; i < 10; i++)
		cols[i] = (char*)malloc(10 * sizeof(char));

	int i = 0;

	char temp[10];
	char * t;
	strcpy(temp, strtok(col, s));
	while (temp != NULL)
	{
		strcpy(cols[i], temp);
		t = strtok(NULL, s);
		i++;
		if (t != NULL)
			strcpy(temp, t);
		else break;
	}

	for (; i < 10; i++)
		free(cols[i]);

	return cols;
}
