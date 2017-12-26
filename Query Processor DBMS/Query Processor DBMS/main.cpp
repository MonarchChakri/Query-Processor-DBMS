#include "implementations.h"
#include "query.h"
#include "validate.h"

int main()
{
	char * marksheader;
	char * infoheader;

	marks.count = 0;
	info.countinfo = 0;

	marks.size = 16;
	info.sizeinfo = 16;

	join.counttotal = 0;

	while (true)
	{
		switch (displaymenu())
		{
		case '1':
			loadstudentmarks(&marksheader);
			break;
		case '2':
			loadstudentinfo(&infoheader);
			break;
		case '3':
			display();
			break;
		case '4':
			displaystudentinfo();
			break;
		case '5':
			avg();
			display();
			break;
		case '6':
			cgpa();
			display();
			break;
		case '7':
			savestudentmarks(&marksheader);
			printf("\nSaved\n");
			system("pause");
			break;
		case '8':
			savestudentinfo(&infoheader);
			printf("\nSaved\n");
			system("pause");
			break;
		case '0':
			joinleft();
			displayjoin();
			break;
		case 'e':
			freestructures();
			emptyhashtable(&nonterminals);
			emptyhashtable(&grammar);
			exit(0);
			break;
		case 'c':
			takecommand();
			break;
		}
	}
}