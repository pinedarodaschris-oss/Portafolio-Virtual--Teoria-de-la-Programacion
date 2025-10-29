Algoritmo sin_titulo
	
	Definir pGL, lL, cG, tP Como Real;
	Definir laG Como Real;
	
	laG = 3.785;
	
	Escribir "Ingrese la catidad de litros producidos";
	leer lL;
	
	Escribir "Ingrese el pecio de un galon";
	leer pGL;
	
	cG = (1*lL)/laG;
	
	tP= cG * pGL;
	
	Escribir "La paga recibida por la venta de los galones de leche es: ", tP, " Dolares";
	
FinAlgoritmo
