#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <iostream>

using namespace std;

typedef struct vector{
        char fecha[20];
        int Linea1[15];
};

void Hora(vector *n)
{
       time_t tiempo;
       char cad[20];
       struct tm *tmPtr;

       tiempo = time(NULL);
       tmPtr = localtime(&tiempo);
       strftime( cad, 20, "%Y-%m-%d %H:%M:%S", tmPtr );

       strncpy((*n).fecha, cad, 20);
}

void Llenar(vector *n)
{
     int aux = 0, c = 0 ;

     for(int i=0; i<15; i++)
		(*n).Linea1[i] = 0;

	 srand( time(NULL) );

	 while( c != 15 )
	 {
		aux = (rand()%25)+1;

        for( int i = 0; i < 15; i++)
		{
			if((*n).Linea1[i] == aux)
				break;

			if((*n).Linea1[i] == 0)
			{
				(*n).Linea1[i] = aux;
				c++;
				break;
			}
		}
	}
}

void Mostrar(vector *n)
{
     int i,num,dato=15;
     FILE *ptr;

     ptr = fopen("qno.csv", "a");

     cout<<""<< (*n).fecha;
     fprintf(ptr, "%s", (*n).fecha);
     for (i=0;i<dato;i++)
     {
         num=(*n).Linea1[i];
         cout<<";"<< num;
         fprintf(ptr, ";%d", num);
     }

     fprintf(ptr, "\n");

     cout<<"\n\n\n";
     fclose(ptr);
}


void ordenar(vector *n)
{
   int dato=15,i,j,A[15],aux,num;

   for (i=0;i<dato;i++)//pasa el contenido struct al vector auxiliar
   {
       num=(*n).Linea1[i];
       A[i]=num;
   }

   for(i=0;i<dato-1;i++) //ordena en el vector auxiliar
   {
       for(j=i+1;j<dato;j++)
       if(A[i]>A[j])
       {
          aux=A[i];
          A[i]=A[j];
          A[j]=aux;
       }
   }


   for (i=0;i<dato;i++)//ingresa en el struc del vector
   {
      (*n).Linea1[i]= A[i];
   }
}


int main(int argc, char *argv[])
{
    vector a;
    int i=0,dato=10;
    char* opc = argv[1];

    if (argc == 2)
    {
        if (strcmp(argv[1], "-g") == 0)
        {
            Hora(&a);
            Llenar(&a);
            Mostrar(&a);
            ordenar(&a);
            Mostrar(&a);
        }
        else if (strcmp(argv[1], "-v") == 0)
            cout << "Integrantes: " << endl;
    }
    else
    {
        cout << "ERROR...FUNCION NO ENCONTRADA" << endl;
    }

    system("pause");
}
