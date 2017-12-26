#pragma once
#include "functionprototypes.h"

char displaymenu()
{
	char c;
	do
	{
		system("cls");
		printf("\n\t1. Load marks<filename>\n");
		printf("\t2. Load info<filename>\n");
		printf("\t3. Show Marks\n");
		printf("\t4. Show Details\n");
		printf("\t5. Compute Average\n");
		printf("\t6. Compute Cgpa\n");
		printf("\t7. Save Marks<filename>\n");
		printf("\t8. Save Details<filename>\n");
		printf("\t0. Left Outer Join\n");
		printf("\te. Exit\n");
		printf("\tc. Custom command\n\t> ");
		scanf("%c", &c);
	} while ((c < '0' || c > '8') && c != 'e' && c != 'c');
	return c;
}

char* getline(FILE * fp)
{
	int linesize = 50;
	char * res = (char*)malloc(linesize * sizeof(char));
	char c;
	int i = 0;
	for (; 1; i++)
	{
		c = fgetc(fp);
		if (c == EOF || c == '\n')
			break;
		if (i == linesize - 1)
		{
			linesize *= 2;

			char* temp = (char*)malloc(linesize * sizeof(char));
			strncpy(temp, res, linesize / 2);
			free(res);
			res = temp;
		}
		res[i] = c;
	}
	res[i] = '\0';
	return res;
}

void loadstudentmarks(char** marksheader)
{
	char file[50];
	printf("Enter file name: ");
	scanf("%s", file);

	FILE * fp = fopen(file, "r");
	char * line = NULL;

	if (fp == NULL)
	{
		perror("\nIO Error");
		printf("\n");
		system("pause");
		return;
	}

	char c;
	printf("Update If duplicates found?<y, n>: ");
	fflush(stdin);
	scanf("%c", &c);

	if (marks.marks == NULL)
		marks.marks = (studentmarks**)malloc(marks.size * sizeof(studentmarks*));

	int i = marks.count;
	line = getline(fp);
	*marksheader = (char*)malloc((strlen(line) + 11) * sizeof(char));

	strcpy(*marksheader, line);
	strcat(*marksheader, ",Avg,CGPA\n\0");

	while (line[0] != '\0')
	{
		line = getline(fp);
		if (line[0] == '\0')
			break;

		if (i == marks.size)
		{
			marks.size *= 2;
			studentmarks ** temp = (studentmarks**)malloc(marks.size * sizeof(studentmarks*));
			for (int i = 0; i < marks.count; i++)
				temp[i] = marks.marks[i];
			marks.marks = temp;
		}

		marks.marks[i] = createstudentmarks(line, &marks.count, c);
		if (line != NULL)
			free(line);
		if (marks.marks[i] != NULL)
		{
			(marks.count)++;
			i++;
		}
	}
	fclose(fp);
}

studentmarks* createstudentmarks(char* line, int * count, char c)
{
	studentmarks * std;
	(std) = (studentmarks*)malloc(sizeof(studentmarks));
	char s[2] = ",";
	char temp[16];
	char newline[BUFSIZ];

	strcpy(newline, line);

	strcpy(temp, strtok(newline, s));
	(std)->rollnum = atoi(temp);



	strcpy((std)->name, strtok(NULL, s));

	strcpy(temp, strtok(NULL, s));
	(std)->m1 = atoi(temp);
	strcpy(temp, strtok(NULL, s));
	(std)->m2 = atoi(temp);
	strcpy(temp, strtok(NULL, s));
	(std)->m3 = atoi(temp);
	strcpy(temp, strtok(NULL, s));
	(std)->m4 = atoi(temp);
	(std)->cgpa = -1;
	(std)->avg = -1;

	for (int i = 0; i < marks.count; i++)
	{
		int x = 0;
		if (marks.marks[i]->rollnum == (std)->rollnum)
		{
			x++;

			if (c == 'y')
			{
				free(marks.marks[i]);
				marks.marks[i] = (std);
			}
			if (c == 'n')
			{
				free(std);
			}
		}
		if (x != 0)
		{
			return NULL;
		}
	}

	return (std);
}

void display()
{
	if (marks.marks == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	system("cls");
	printf("Student Details\n");
	printf("Rno \t\tName \tM1 M2 M3  M4   Avg   CGPA\n");
	for (int i = 0; i < (marks.count); i++)
	{
		if (marks.marks[i]->avg != -1 && marks.marks[i]->cgpa != -1)
			printf("%3d. %16s %3d %3d %3d %3d %5.2f %5.2f\n", marks.marks[i]->rollnum,
			marks.marks[i]->name, marks.marks[i]->m1, marks.marks[i]->m2, marks.marks[i]->m3, marks.marks[i]->m4, marks.marks[i]->avg, marks.marks[i]->cgpa);
		else if (marks.marks[i]->cgpa != -1)
			printf("%3d. %16s %3d %3d %3d %3d NULL  %5.2f\n", marks.marks[i]->rollnum,
			marks.marks[i]->name, marks.marks[i]->m1, marks.marks[i]->m2, marks.marks[i]->m3, marks.marks[i]->m4, marks.marks[i]->cgpa);
		else if (marks.marks[i]->avg != -1)
			printf("%3d. %16s %3d %3d %3d %3d %5.2f NULL \n", marks.marks[i]->rollnum,
			marks.marks[i]->name, marks.marks[i]->m1, marks.marks[i]->m2, marks.marks[i]->m3, marks.marks[i]->m4, marks.marks[i]->avg);
		else
			printf("%3d. %16s %3d %3d %3d %3d NULL	NULL \n", marks.marks[i]->rollnum,
			marks.marks[i]->name, marks.marks[i]->m1, marks.marks[i]->m2, marks.marks[i]->m3, marks.marks[i]->m4);
	}
	system("pause");
}

void avg()
{
	if (marks.marks == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	for (int i = 0; i < (marks.count); i++)
	{
		marks.marks[i]->avg = (marks.marks[i]->m1 + marks.marks[i]->m2 + marks.marks[i]->m3 + marks.marks[i]->m4) / 4.0f;
	}
}

int getGrade(int marks)
{
	if (marks <= 100 && marks > 90)
		return 10;
	else if (marks <= 90 && marks > 80)
		return 9;
	else if (marks <= 80 && marks > 70)
		return 8;
	else if (marks <= 70 && marks > 60)
		return 7;
	else if (marks <= 60 && marks > 50)
		return 6;
	else if (marks <= 50 && marks > 40)
		return 5;
	else if (marks <= 40 && marks > 30)
		return 4;
	else if (marks <= 30 && marks > 20)
		return 3;
	else if (marks <= 20 && marks > 10)
		return 2;
	else if (marks <= 10 && marks > 20)
		return 1;
	return 0;
}

void cgpa()
{
	if (marks.marks == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	for (int i = 0; i < (marks.count); i++)
	{
		marks.marks[i]->cgpa = (getGrade(marks.marks[i]->m1) + getGrade(marks.marks[i]->m2)
			+ getGrade(marks.marks[i]->m3) + getGrade(marks.marks[i]->m4)) / 4.0f;
	}
}

void savestudentmarks(char** marksheader)
{
	char file[50];
	printf("Enter file name: ");
	scanf("%s", file);

	FILE * fp = fopen(file, "w");
	fprintf(fp, *marksheader);
	for (int i = 0; i < marks.count; i++)
		fprintf(fp, "%d,%s,%d,%d,%d,%d,%f,%f\n", marks.marks[i]->rollnum,
		marks.marks[i]->name, marks.marks[i]->m1, marks.marks[i]->m2, marks.marks[i]->m3, marks.marks[i]->m4, marks.marks[i]->avg, marks.marks[i]->cgpa);

	fclose(fp);
}

void loadstudentinfo(char** infoheader)
{
	char file[50];
	printf("Enter file name: ");
	scanf("%s", file);

	FILE * fp = fopen(file, "r");
	char * line = NULL;

	if (fp == NULL)
	{
		perror("\nIO Error");
		printf("\n");
		system("pause");
		return;
	}

	char c;
	printf("Update If duplicates found?<y, n>: ");
	fflush(stdin);
	scanf("%c", &c);

	if (info.info == NULL)
		info.info = (studentinfo**)malloc(info.sizeinfo * sizeof(studentinfo*));

	int i = info.countinfo;
	line = getline(fp);
	*infoheader = (char*)malloc((strlen(line) + 11) * sizeof(char));
	strcpy(*infoheader, line);


	while (line[0] != '\0')
	{
		line = getline(fp);
		if (line[0] == '\0')
			break;

		if (i == info.sizeinfo)
		{
			info.sizeinfo *= 2;
			studentinfo ** temp = (studentinfo**)malloc(info.sizeinfo * sizeof(studentinfo*));
			for (int i = 0; i < info.countinfo; i++)
				temp[i] = info.info[i];
			info.info = temp;
		}

		info.info[i] = createstudentinfo(line, &info.countinfo, c);
		if (line != NULL)
			free(line);
		if (info.info[i] != NULL)
		{
			(info.countinfo)++;
			i++;
		}
	}
	fclose(fp);
}

studentinfo* createstudentinfo(char* line, int* countinfo, char c)
{
	studentinfo * std;
	(std) = (studentinfo*)malloc(sizeof(studentinfo));
	char s[2] = ",";
	char temp[16];
	char newline[BUFSIZ];

	strcpy(newline, line);

	strcpy(temp, strtok(newline, s));
	(std)->rollnum = atoi(temp);

	strcpy((std)->phnum, strtok(NULL, s));
	strcpy((std)->address, strtok(NULL, s));
	strcpy((std)->city, strtok(NULL, s));
	strcpy((std)->pin, strtok(NULL, s));

	int x = 0;
	for (int i = 0; i < info.countinfo; i++)
	{
		if (info.info[i]->rollnum == (std)->rollnum)
		{
			x++;
			if (c == 'y')
			{
				free(info.info[i]);
				info.info[i] = (std);
			}
			else if (c == 'n')
			{
				free(std);
			}
		}
		if (x != 0)
		{
			return NULL;
		}
	}

	return (std);
}

void displaystudentinfo()
{
	if (info.info == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	if (info.info[0] == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	system("cls");
	printf("Student Details\n");
	printf("Rno \t\tPhNum  \t\t\tAddress   \t\tCity   \t\tPin\n");
	for (int i = 0; i < (info.countinfo); i++)
	{
		printf("%3d. %16s %30s %16s %16s\n", info.info[i]->rollnum,
			info.info[i]->phnum, info.info[i]->address, info.info[i]->city, info.info[i]->pin);
	}
	system("pause");
}

void displayrightquery()
{
	if (join.marks == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	if (join.marks[0] == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	if (join.info == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	if (join.info[0] == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	system("cls");
	printf("Student Details\n");
	printf("Rno \t\tPhNum  \t\t\tAddress   \t\tCity   \t\tPin\n");
	for (int i = 0; i < (join.counttotal); i++)
	{
		printf("%3d. %16s %30s %16s %16s\n", join.info[i]->rollnum,
			join.info[i]->phnum, join.info[i]->address, join.info[i]->city,
			join.info[i]->pin);
	}
	system("pause");
}

void displayleftquery()
{
	if (join.marks == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	system("cls");
	printf("Student Details\n");
	printf("Rno \t\tName \tM1 M2 M3  M4   Avg   CGPA\n");
	for (int i = 0; i < (join.counttotal); i++)
	{
		if (join.marks[i]->avg != -1 && join.marks[i]->cgpa != -1)
			printf("%3d. %16s %3d %3d %3d %3d %5.2f %5.2f\n", join.marks[i]->rollnum,
			join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4, join.marks[i]->avg, join.marks[i]->cgpa);
		else if (join.marks[i]->cgpa != -1)
			printf("%3d. %16s %3d %3d %3d %3d NULL  %5.2f\n", join.marks[i]->rollnum,
			join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4, join.marks[i]->cgpa);
		else if (join.marks[i]->avg != -1)
			printf("%3d. %16s %3d %3d %3d %3d %5.2f NULL \n", join.marks[i]->rollnum,
			join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4, join.marks[i]->avg);
		else
			printf("%3d. %16s %3d %3d %3d %3d NULL	NULL \n", join.marks[i]->rollnum,
			join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4);
	}
	system("pause");
}

void savestudentinfo(char** infoheader)
{
	char file[50];
	printf("Enter file name: ");
	scanf("%s", file);

	FILE * fp = fopen(file, "w");
	fprintf(fp, *infoheader);
	fprintf(fp, "\n");
	for (int i = 0; i < info.countinfo; i++)
	{
		fprintf(fp, "%d,%s,%s,%s,%s\n", info.info[i]->rollnum,
			info.info[i]->phnum, info.info[i]->address, info.info[i]->city, info.info[i]->pin);
	}

	fclose(fp);
}

void displayjoin()
{
	if (join.marks == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	if (join.marks[0] == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	if (join.info == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	if (join.info[0] == NULL)
	{
		printf("No data please load to display.\n");
		return;
	}
	system("cls");
	printf("Student Details\n");
	printf("Rno \t\tName \tM1 M2 M3  M4   Avg   CGPA \tPhNum  \t\t\t\tAddress   \t\tCity   \t\tPin\n");
	for (int i = 0; i < join.counttotal; i++)
	{
		if (join.marks[0]->avg == -1 && join.marks[0]->cgpa == -1)
		{
			printf("%3d. %16s %3d %3d %3d %3d NULL NULL %16s %30s %16s %16s\n", join.marks[i]->rollnum,
				join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4,
				join.info[i]->phnum, join.info[i]->address, join.info[i]->city, join.info[i]->pin);
		}
		else if (join.marks[0]->avg == -1)
		{
			printf("%3d. %16s %3d %3d %3d %3d NULL %.2f %16s %30s %16s %16s\n", join.marks[i]->rollnum,
				join.marks[i]->name, join.marks[i]->m1, join.marks[i]->m2, join.marks[i]->m3, join.marks[i]->m4, join.marks[i]->cgpa,
				join.info[i]->phnum, join.info[i]->address, join.info[i]->city, join.info[i]->pin);
		}
		else if (join.marks[0]->cgpa == -1)
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
	system("pause");
}

void copystudentmarks(int i, int j)
{
	join.marks[i] = (studentmarks*)malloc(sizeof(studentmarks));
	join.marks[i]->m1 = marks.marks[j]->m1;
	join.marks[i]->m2 = marks.marks[j]->m2;
	join.marks[i]->m3 = marks.marks[j]->m3;
	join.marks[i]->m4 = marks.marks[j]->m4;
	join.marks[i]->avg = marks.marks[j]->avg;
	join.marks[i]->cgpa = marks.marks[j]->cgpa;
	join.marks[i]->rollnum = marks.marks[j]->rollnum;
	strcpy(join.marks[i]->name, marks.marks[j]->name);
}

void copystudentinfo(int i, int j)
{
	join.info[i] = (studentinfo*)malloc(sizeof(studentinfo));

	if (j == -1)
	{
		strcpy(join.info[i]->address, "NULL");
		strcpy(join.info[i]->city, "NULL");
		strcpy(join.info[i]->phnum, "NULL");
		strcpy(join.info[i]->pin, "NULL");
		return;
	}

	join.info[i]->rollnum = marks.marks[j]->rollnum;

	strcpy(join.info[i]->address, info.info[j]->address);
	strcpy(join.info[i]->city, info.info[j]->city);
	strcpy(join.info[i]->phnum, info.info[j]->phnum);
	strcpy(join.info[i]->pin, info.info[j]->pin);
}

void joinleft()
{
	join.counttotal = 0;
	join.marks = (studentmarks**)malloc((marks.size) * sizeof(studentmarks*));
	join.info = (studentinfo**)malloc((info.sizeinfo) * sizeof(studentinfo*));
	for (int i = 0; i < marks.count; i++)
	{
		copystudentmarks(i, i);
		int flag = 0;
		for (int j = 0; j < info.countinfo; j++)
		{
			if (marks.marks[i]->rollnum == info.info[j]->rollnum)
			{
				flag++;
				copystudentinfo(join.counttotal, j);
			}
		}
		if (!flag)
			copystudentinfo(i, -1);
		copystudentmarks(join.counttotal, i);
		(join.counttotal)++;
	}
}

void freejoin()
{
	for (int i = 0; i < join.counttotal; i++)
		free(join.marks[i]);
	join.marks = NULL;
	free(join.marks);
}

void freestructures()
{
	for (int i = 0; i < marks.count; i++)
		free(marks.marks[i]);
	marks.marks = NULL;
	for (int i = 0; i < info.countinfo; i++)
		free(info.info[i]);
	info.info = NULL;

	free(marks.marks);
	free(info.info);

}
