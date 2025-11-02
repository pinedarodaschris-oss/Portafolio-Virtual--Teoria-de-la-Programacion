# Ejercicios
---
## Ejercicio 1

> Entrada: Se probaran los tipos de datos que se pueden usar en C.  
> Proceso: Inicialización de variables y definición de constantes.  
> Salida: Mensajes por pantalla y valores almacenados en variables (ej. printf). 
 
| Entrada                                                               | Proceso                                   | Salida                                                            |
| --------------------------------------------------------------------- | ----------------------------------------- | ----------------------------------------------------------------- |
| valor1=5, valor2=7, sexo='m', nomCom="Christopher Pineda", IVA15=0.15 | Se inicializan las variables y constantes | No genera cálculo, solo inicializa y permite mostrar por pantalla |


[Practica 1](./Actividades en C/miPrimerPrograma.c)
---
## Ejercicio 2

> Entrada: Impresión de mensaje.   
> Proceso: Ejecuta un printf("Hola mundo").   
> Salida: Muestra el mensaje "Hola mundo".  

| Entrada | Proceso              | Salida     |
| ------- | -------------------- | ---------- |
| -       | printf("Hola mundo") | Hola mundo |


[Practica 2](./holaMundo.c)
---
## Ejercicio 3

> Entrada: Se ingresaran 2 numeros para sumarlos.  
> Proceso: Se suman los dos números sTotal = pNum + sNum.  
> Salida: Se muestra la suma de los números.  

| Entrada (pNum) | Entrada (sNum) | Proceso (sTotal=pNum+sNum) | Salida: sTotal |
| -------------- | -------------- | -------------------------- | -------------- |
| 5              | 7              | 5 + 7                      | 12             |
| 10             | 15             | 10 + 15                    | 25             |
| 3.5            | 4.5            | 3.5 + 4.5                  | 8              |

[Practica 3](./sumaDosNumeros.c)
---
## Ejercicio 4

> Entrada: Se realizaran 3 maneras para ingresar caracteres en algoritmos C.  
> Proceso: Se guarda el nombre en una variable tipo cadena.  
> Salida: Se imprime el nombre completo del usuario.  

| Entrada (nombre) | Proceso           | Salida                                  |
| ---------------- | ----------------- | --------------------------------------- |
| "Ana Pérez"      | Guardar en cadena | "Su nombre completo es: Ana Pérez"      |
| "Juan López"     | Guardar en cadena | "Su nombre completo es: Juan López"     |
| "Christopher P." | Guardar en cadena | "Su nombre completo es: Christopher P." |


[Practica 4](./segundoPrograma.c)
---
## Ejercicio 5

> Entrada: Nesecitamos programar un conversor de metros a milimetros, centimetros y kilometros.   
> Proceso: Conversión de metros a milímetros, centímetros y kilómetros: ml = mt*1000, cm = mt*100, km = mt/1000.   
> Salida: Se muestran los valores convertidos.  

| Entrada (mt) | Proceso                   | Salida (ml, cm, km, mt) |
| ------------ | ------------------------- | ----------------------- |
| 1            | ml=1000, cm=100, km=0.001 | 1000, 100, 0.001, 1     |
| 5            | ml=5000, cm=500, km=0.005 | 5000, 500, 0.005, 5     |
| 0.75         | ml=750, cm=75, km=0.00075 | 750, 75, 0.00075, 0.75  |


[Practica 5](./ejercicio1.c)
---
## Ejercicio 6
> Entrada: Se requiere sacar la aceleracion.  
> Proceso: Se calcula la aceleración: a = (vF - vO)/t.  
> Salida: Se imprime el valor de la aceleración.  

| Entrada (vO) | Entrada (vF) | Entrada (t) | Proceso (a=(vF-vO)/t) | Salida: a |
| ------------ | ------------ | ----------- | --------------------- | --------- |
| 0            | 20           | 4           | (20-0)/4              | 5         |
| 10           | 30           | 5           | (30-10)/5             | 4         |
| 5            | 25           | 2           | (25-5)/2              | 10        |


[Practica 6](./ejercicio2.c)
---
## Ejercicio 7

> Entrada: Coordenadas de dos puntos (x1, y1) y (x2, y2).   
> Proceso: Se calcula la distancia entre los puntos: distancia = sqrt((x2-x1)^2 + (y2-y1)^2).   
> Salida: Se muestra la distancia entre los puntos.  

| Entrada (x1,y1) | Entrada (x2,y2) | Proceso     | Salida: distancia |
| --------------- | --------------- | ----------- | ----------------- |
| (0,0)           | (3,4)           | sqrt(3²+4²) | 5.00              |
| (1,2)           | (4,6)           | sqrt(3²+4²) | 5.00              |
| (-1,-1)         | (2,3)           | sqrt(3²+4²) | 5.00              |


[Practica 7](./ejercicio3.c)
---
## Ejercicio 8

> Entrada: Se necesita separar el entero y el decimal de un numero.   
> Proceso: Se separa la parte entera pE = (int)nC y decimal pd = nC - pE.   
> Salida: Se muestran la parte entera y decimal.  
 
| Entrada (nC) | Proceso (pE=int(nC), pd=nC-pE) | Salida (pE, pd) |
| ------------ | ------------------------------ | --------------- |
| 5.75         | 5, 5.75-5                      | 5, 0.75         |
| 10.3         | 10, 10.3-10                    | 10, 0.3         |
| 7.0          | 7, 7-7                         | 7, 0.0          |


[Practica 8](./ejercicio4.c)
---
## Ejercicio 9
> Entrada: Se necesita sacar el doble y el triple de un numero.  
> Proceso: Se calcula el doble y el triple: doble = pNum*2, triple = pNum*3.   
> Salida: Se muestran el doble y el triple del número.  

| Entrada (pNum) | Proceso        | Salida (doble, triple) |
| -------------- | -------------- | ---------------------- |
| 5              | 5*2=10, 5*3=15 | 10, 15                 |
| 7              | 7*2=14, 7*3=21 | 14, 21                 |
| 2              | 2*2=4, 2*3=6   | 4, 6                   |


[Practica 9](./dobleYTripeDeNumero.c)
---
## Ejercicio 10

> Entrada: Hay que convertir pie a yardas, pulgadas, centimetros y metros.  
> Proceso: Conversiones: yr=pie/3, pg=pie*12, cm=pg*2.54, mt=cm/100.  
> Salida: Se muestran yardas, pulgadas, centímetros y metros.  

| Entrada (pie) | Proceso                               | Salida (yr, pg, cm, mt)   |
| ------------- | ------------------------------------- | ------------------------- |
| 3             | yr=1, pg=36, cm=91.44, mt=0.9144      | 1, 36, 91.44, 0.9144      |
| 6             | yr=2, pg=72, cm=182.88, mt=1.8288     | 2, 72, 182.88, 1.8288     |
| 1             | yr=0.3333, pg=12, cm=30.48, mt=0.3048 | 0.3333, 12, 30.48, 0.3048 |


[Practica 10](./conversorDeMedidasMetricas.c)
---
## Ejercicio 11

> Entrada: Hay que calcular c3 para sacar (60/100) en la nota final.  
> Proceso: Se calcula la nota mínima necesaria en c3: c3 = 3*(nF-0.3*nL)/0.7-(c1+c2).   
> Salida: Se muestra la nota mínima necesaria o se indica que ya cumple el promedio.  
  
| Entrada (c1) | Entrada (c2) | Entrada (nL) | Proceso (c3)                | Salida    |
| ------------ | ------------ | ------------ | --------------------------- | --------- |
| 50           | 55           | 60           | 3*(60-18)/0.7-(50+55)=38.57 | 38.57     |
| 70           | 80           | 90           | 3*(60-27)/0.7-(70+80)=-6.43 | Ya cumple |
| 40           | 45           | 60           | 3*(60-18)/0.7-(40+45)=86.43 | 86.43     |


[Practica 11](./EjercicioAPC2.c)
---
### 🔙 Navegación

[⬅️ Atras](./EjerciciosDePractica.md)

[⬅️ Regresar al índice](./Indice.md)
