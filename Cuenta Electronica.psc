Algoritmo sin_titulo
	//Un usuario requiere revisar su estado de cuenta en un cajero electrónico.
	
	//Se definen unas variables
	Definir nC Como Cadena;
	Definir c, sE Como Real;
	
	//Se ingresan los datos requeridos
	Escribir "Ingrese su usuario";
	leer nC
	
	Escribir "Ingrese su contraseña";
	leer c
	
	Escribir "Ingrese la ultima vez que ingreso a la cuenta (Se cuenta en meses)";
	leer sE
	
	//Se utiliza una condicional para comprovar si la cuenta se encuentra activa o desactivada
	Si sE<=12 Entonces
		Escribir nC, " su usuario se encuentra: activo ";
	SiNo
		Escribir nC, " su usuario se encuentra: Desactivado ";
	Fin Si
	
FinAlgoritmo
