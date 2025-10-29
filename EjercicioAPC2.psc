Algoritmo EjercicioAPC2
		
	// Declaración de variables
    Definir c1, c2, c3, nL, nF Como Real
	
    // Inicialización
    nF <- 60   // Nota final deseada
	
    // Entrada de datos
    Escribir "Ingrese la calificación 1:"
    Leer c1
	
    Escribir "Ingrese la calificación 2:"
    Leer c2
	
    Escribir "Ingrese la nota de laboratorio:"
    Leer nL
	
    // Proceso: calcular la nota mínima necesaria en C3
    c3 <- (3 * (nF - 0.3 * nL)) / 0.7 - (c1 + c2)
	
    // Resultados con condiciones
    Si c3 > 100 Entonces
        Escribir "La nota mínima necesaria es mayor a 100, lo cual es inválido."
    Sino
        Escribir "La nota mínima necesaria en C3 es: ", c3
        Escribir "En caso de salir negativa, usted ya posee las notas requeridas."
    FinSi
		
FinAlgoritmo
