Algoritmo sin_titulo
	//En un terminal de buses, dos buses con destino a la ciudad de Valdivia, transportan a 35
	//pasajeros cada bus, el valor del pasaje para cada bus es diferente y es definido por el 
	//dueño del bus. ¿Cuál es la recaudación obtenida para cada bus?
	
	Definir t1, t2, tT1, tT2 Como Real;
	Definir p Como Entero;
	
	p=35;
	
	Escribir "Ingrese la tarifa del primer bus";
	leer t1
	
	Escribir "Ingrese la tarifa del segundo bus";
	leer t2
	
	
	tT1 = t1*p;
	
	tT2 = t2*p;
	
	Escribir "El primer bus recauda: ", tT1;
	Escribir "El segundo bus recauda: ", tT2;
	
FinAlgoritmo
