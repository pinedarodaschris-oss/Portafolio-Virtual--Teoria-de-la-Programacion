Algoritmo Pineda_Rodas_Christopher_Alexander_PL1
	//Un estudiante desea calcular su Índice de Masa Corporal (IMC) para saber si su peso está dentro de lo normal
	//Definicion de las variables
	Definir Alt, peso, IMC Como Real;
	Definir NE Como Caracter;
	
	Escribir "Ingrese el nombre del estudiante";
	Leer NE;
	
	Escribir "Ingrese la Altura, tiene que ser en metros";
	Leer Alt;
	
	Escribir "Ingrese el peso, tiene que ser en Kg";
	Leer peso;
	
	//Proceso 
	IMC = peso/(Alt^2);
	
	//Resultado
	Si IMC>=18.5 Entonces
		Si IMC<=24.9 Entonces
			Escribir "El estudiante: ", NE, " tiene un peso normal, su IMC es: " IMC;
		SiNo
			Si IMC>=25 Entonces
				Si IMC<=29.9 Entonces
					Escribir "El estudiante ",NE," tiene sobrepeso, su IMC es: " IMC;
				SiNo
					Si IMC>=30 Entonces
						Escribir "El estudiante ",NE," tiene obesidad, su IMC es: " IMC;
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	SiNo
		Escribir "El estudiante ",NE," tiene muy bajo peso, su IMC es: " IMC;
	Fin Si
	
	
FinAlgoritmo
