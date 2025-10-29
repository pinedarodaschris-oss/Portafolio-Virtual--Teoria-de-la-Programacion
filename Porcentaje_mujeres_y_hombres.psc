Algoritmo sin_titulo
	//Determinar el porcentaje de mujeres y de hombres dado la cantidad para cada categoría.
	
	Definir cH, cM, tP, resulH, resulM Como Real;
	
	Escribir "Ingrese la cantidad de Hombres";
	leer cH
	
	Escribir "Ingrese la catidades de Mujeres";
	leer cM
	
	
	tP= cH+cM;
	
	resulH = (cH/tP)*100;
	
	resulM = (cM/tP)*100;
	
	Escribir "El porsentaje de hombres en la habitacion es: ", resulH, "%" ;
	Escribir "El porsentaje de mujeres en la habitacion es: ", resulM, "%" ;
FinAlgoritmo
