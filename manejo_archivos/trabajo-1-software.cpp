#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include <time.h>


typedef struct loteria{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
};struct loteria loteria;

void crear_archivo()
{
	time_t t;
    struct tm *tm;
	int i;
	char fechayhora[100];
	char archivo[30]="qno.csv";
	t=time(NULL);
    tm=localtime(&t);
    strftime(fechayhora, 100, "%Y/%m/%d %H:%M:%S", tm);
	
	
		FILE*ptr;
		printf("escriba numero 1 de la loteria: ");
		scanf("%d",&loteria.num1);
		printf("escriba numero 2 de la loteria: ");
		scanf("%d",&loteria.num2);
		printf("escriba numero 3 de la loteria: ");
		scanf("%d",&loteria.num3);
		printf("escriba numero 4 de la loteria: ");
		scanf("%d",&loteria.num4);
		printf("escriba numero 5 de la loteria: ");
		scanf("%d",&loteria.num5);
		printf("escriba numero 6 de la loteria: ");
		scanf("%d",&loteria.num6);
		printf("escriba numero 7 de la loteria: ");
		scanf("%d",&loteria.num7);
		printf("escriba numero 8 de la loteria: ");
		scanf("%d",&loteria.num8);
		printf("escriba numero 9 de la loteria: ");
		scanf("%d",&loteria.num9);
		printf("escriba numero 10 de la loteria: ");
		scanf("%d",&loteria.num10);
		printf("escriba numero 11 de la loteria: ");
		scanf("%d",&loteria.num11);
		printf("escriba numero 12 de la loteria: ");
		scanf("%d",&loteria.num12);
		printf("escriba numero 13 de la loteria: ");
		scanf("%d",&loteria.num13);
		printf("escriba numero 14 de la loteria: ");
		scanf("%d",&loteria.num14);
		
		ptr=fopen(archivo,"w");
		fprintf(ptr," %s;%d;%d;%d;%d;%d;%d;%d;%d;%d;%d;%d;%d;%d;%d",fechayhora,loteria.num1,loteria.num2,loteria.num3,loteria.num4,loteria.num5,loteria.num6,loteria.num7,loteria.num8,loteria.num9,loteria.num10,loteria.num11,loteria.num12,loteria.num13,loteria.num14);
		fclose(ptr);
	
}
int main()
{
	int n,m=0,opcion,x,i;
    char archivo [50];
    while (m==0)
  {
    system("color E4");
    system("cls");
    printf("\t\tQno :\n\n");
    printf("1) Creacion de archivo\n");
    printf("2)salir\n");
    printf("ingrese una opcion: ");
    scanf("%d",&opcion);
    if(opcion==1)
    {
      crear_archivo();
      system("pause");
    }
    if(opcion==8)
    {
      m=1;
    }
  }
}


