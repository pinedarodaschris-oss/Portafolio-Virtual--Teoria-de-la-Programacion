Algoritmo EjercicioAPC2
		
	// Declaraci�n de variables
    Definir c1, c2, c3, nL, nF Como Real
	
    // Inicializaci�n
    nF <- 60   // Nota final deseada
	
    // Entrada de datos
    Escribir "Ingrese la calificaci�n 1:"
    Leer c1
	
    Escribir "Ingrese la calificaci�n 2:"
    Leer c2
	
    Escribir "Ingrese la nota de laboratorio:"
    Leer nL
	
    // Proceso: calcular la nota m�nima necesaria en C3
    c3 <- (3 * (nF - 0.3 * nL)) / 0.7 - (c1 + c2)
	
    // Resultados con condiciones
    Si c3 > 100 Entonces
        Escribir "La nota m�nima necesaria es mayor a 100, lo cual es inv�lido."
    Sino
        Escribir "La nota m�nima necesaria en C3 es: ", c3
        Escribir "En caso de salir negativa, usted ya posee las notas requeridas."
    FinSi
		
FinAlgoritmo
