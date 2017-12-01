#include <stdio.h>
#include <windows.h>
void gotoxy (int x,int y)
{
	HANDLE hcon; hcon = GetStdHandle (STD_OUTPUT_HANDLE) ; COORD dwPos; dwPos.X = x; dwPos.Y = y; SetConsoleCursorPosition (hcon,dwPos);
}
int main()
{
	gotoxy(35,5); printf("UNIVERSIDAD LATINA DE PANAMA");
	gotoxy(35,7); printf("MATERIA : MODELOS DE PROGRAMACION");
	gotoxy(35,9); printf("PARCIAL CONVERSOR DE MONEDA");
    gotoxy(35,12); printf("NOMBRE DE ESTUDIANTE: HASAN PATEL");
int opcion;
float valor;
	gotoxy(35,13); printf("El valor de su compra es de: ");
	scanf("%f", &valor);
	
	gotoxy(35,15); printf("MONEDA           	CODIGO");
	gotoxy(35,16); printf("Euro                	   1");
	gotoxy(35,17); printf("Yen                     2");
	gotoxy(35,18); printf("Libra Esterlina         3");
	gotoxy(35,19); printf("Dolar Canadiense        4");

	gotoxy(35,22); printf("Eliga la moneda con la cual quiere pagar: ");
	scanf("%d", &opcion);
	switch(opcion)
	{
		case 1:
			
				valor=valor*0.95;
				gotoxy(35,26); printf("El total de su compra es: %.2f euros",valor );
				break;
		case 2:
				valor=valor*114.50;
				gotoxy(35,26); printf("El total de su compra es: %.2f yen", valor);
				break;
		case 3:
				valor=valor*0.82;
				gotoxy(35,26); printf("El total de su compra es: %.2f libras esterlinas", valor);
				break;
		case 4: 
				valor=valor*1.35;
				gotoxy(35,26); printf("El total de su compra es: %.2f dolares canadienses", valor);
				break;
	}
	return 0;
}
