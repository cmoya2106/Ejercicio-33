//Crlos Moya y Manuel Rodriguez.
//Ejercicio 33

#include <stdio.h>
int main(){
	char seguir;
	int num, cont1 = 0;
	double x, y, acum, cont2;
	
	do
	{
		printf("\n Deseas analizar las calificaciones? (S/N) ");
		scanf("%c", &seguir);
		
		if(seguir == 'S' || seguir == 's')
		{
			cont1 = cont1 + 1;
			printf("\n Ingrese su calificacion: ");
			scanf("%i", &num);	
		
			if(num > 4)
			{
				printf("Alumno aprobado ");
				cont2 = cont2 + 1;
				acum = acum + num;
			}
			else{
				if(num <= 4)
				{
					printf("Alumno no aprobado");
				}
			}	
		}
		fflush( stdin );		
	}while(seguir == 'S' || seguir == 's');
	x = cont2 * 100/cont1;
	y = acum/cont2;
	printf("\n Porcentaje de los alumnos aprobados: %.2lf", x);
	printf("\n Promedio de los alumnos: %.2lf", y);
	return 0;
}