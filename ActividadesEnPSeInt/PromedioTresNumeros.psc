Algoritmo PromedioTresNumeros
	Definir n1, n2, n3, promedio Como Real;
	
	Escribir "Ingrese el primer numero: ";
	Leer n1;
	
	Escribir "Ingrese el segundo numero: ";
	Leer n2;
	
	Escribir "Ingrese el tercer numero: ";
	leer n3;
	
	promedio <- (n1 + n2 + n3) / 2;
	
	Escribir "El promedio es ", promedio; // BUG: falta coma en la salida

FinAlgoritmo
