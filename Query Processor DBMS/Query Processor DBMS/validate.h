#pragma once
#include "hashtable.h"
#include "query.h"

char* validcommand;
char* getnexttoken(char * command);
void takecommand();
char* getnextstr(char* command);

void creategrammar()
{
	createhashtable(&grammar, 5);

	p = createnode("select", (void*)"{A} from {B} where {C} {D} {E}");
	putpair(grammar, *p);

	p = createnode("from", (void*)"{B} where {C} {D} {E}");
	putpair(grammar, *p);

	p = createnode("where", (void*)"{C} {D} {E}");
	putpair(grammar, *p);
}

bool validatecommand(char * command)
{
	createhashtable(&nonterminals, 10);
	creategrammar();
	validcommand = "select";

	char * validtok;
	char * usrtok;

	int tokennumber = 0;

	while (true)
	{
		usrtok = getnexttoken(command);
		validtok = getnexttoken(validcommand);
		if (usrtok == NULL)
		{
			if (tokennumber < 4 || tokennumber % 2 == 1)
				return false;
			else if (validtok == NULL)
				return true;
			else if (validtok[0] != '{')
				return true;
		}
		else if (validtok[0] != '{')
		{
			if (!strcmp(usrtok, validtok))
			{
				validcommand = (char*)getvalue(grammar, validtok);
				command = getnextstr(command);
			}
			else return false;
		}
		else
		{
			validcommand = getnextstr(validcommand);
			if (usrtok == NULL)
				return false;
			char* usertoken = (char*)malloc(strlen(usrtok) + 1 * sizeof(char));
			strcpy(usertoken, usrtok);
			p = createnode(validtok, usertoken);
			putpair(nonterminals, *p);
			command = getnextstr(command);
		}
		free(usrtok);
		free(validtok);
		tokennumber++;
	}
	return false;
}

void takecommand()
{
	system("cls");
	printf("\n\tValid command structure\n");
	printf("\n\tselect * from {tablename} where {column} {condition} {value}\n\n  \t{condition} -> (<, >, <=, >=, =, contains, startswith)\n");
	printf("\n\t{tablename}  -> (marks or info or marks,info)\n");
	printf("\n\tEnter command only in lowercase: ");
	char command[100];
	command[0] = '\0';
	fflush(stdin);
	scanf("%[^\n]s", command);
	if (validatecommand(command))
	{
		query();
	}
	else
	{
		system("cls");
		printf("Enter a valid command\n");
	}
	system("pause");
	emptyhashtable(&nonterminals);
}

char* getnexttoken(char * command)
{
	char *buff = (char*)malloc(sizeof(char) * 50);
	int j = 0;
	if (command == NULL)
		return NULL;
	if (command[0] == '\0')
		return NULL;
	while (command[j] != ' ' && command[j] != '\0')
	{
		buff[j] = command[j];
		j++;
	}
	buff[j] = '\0';
	if (command[j] != '\0')
		j++;
	return buff;
}

char* getnextstr(char* command)
{
	if (command == NULL)
		return command;
	char* buff = (char*)malloc(strlen(command) * sizeof(char));
	int j = 0;
	while (command[j] != ' ' && command[j] != '\0')
		j++;

	if (command[j] == '\0')
		return NULL;
	j++;

	int i = 0;
	for (int n = strlen(command); i < n; i++)
	{
		buff[i] = command[j];
		j++;
	}
	buff[i] = '\0';
	return buff;
}