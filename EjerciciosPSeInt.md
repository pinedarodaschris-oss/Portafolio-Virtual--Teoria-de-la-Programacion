# Ejercicios
---
## Ejercicios 1:

> Entrada: Se nesecita crear un programa que ayude a sumar 2 numeros, y analisamos las posibles soluciones.  
> Proceso: Una vez ingresados los valores, sumamos y guardamos el resultado en otra varible  .  
> Salida: Mostramos el resultado mediante el comando Escribir.  
### Pruebas de escritorio
| Entrada (a) | Entrada (b) | Proceso (Resultado=Numero1+Numero2) |  Salida: Result |
|----------------|-----------------|--------------------------|---------------|
| 2              | 4               | Result = 2 + 4               |       6       | 
| 5              | 21              | Result = 5 + 21              |      26       |
| 10             | 2               | Result = 10 +2               |      12       |


[Practica 1](./ActividadesEnPSeInt/Suma_de_dos_digitos.psc)
---
## Ejercicios 2:

> Entrada: Se nos solicita sacar la longitud cicurferenciaa de un triangulo y su area, para eso le pediremos al usuario ingresar el radio del triangulo.  
> Proceso: Se utilizaran las siguientes formulas para sacar los resultados "longitud = (2*PI*radio)/2"
>  y "area = PI*radio^2".  
> Salida: Se le mostrara mediante comandos los resultados de la longitud y el area.  
### Pruebas de escritorio
| Entrada (r) | Proceso (l= (2*PI*r)/2) | Proceso (a = PI*r^2) |  Salida: l |  Salida: a |
|----------------|-----------------|--------------------------|---------------|---------------|
|        7       |       l=(2*PI*7)/2          |      a = PI*7^2          |     21.9       |      153.9        |
|        3       |       l=(2*PI*3)/2          |      a = PI*3^2          |      9.4       |       28.2        |
|       15       |       l=(2*PI*15)/2         |     a = PI*15^2          |     47.1       |      706.8        |


[Practica 2](./ActividadesEnPSeInt/A_LC_Triangulo.psc)
---
## Ejercicios 3:

> Entrada: Se nos pide programar un algoritmo que calcule el area de un triangulo por medio de la altura y laa base, las cuales ingresara el usuario
> Proceso: se usara la siguiente formula "ar = (al*ba)/2;"
> Salida: Se mostrara el rresultado final con un mensaje 
### Pruebas de escritorio
| Entrada (al) | Entrada (ba) | Proceso (ar = (al*ba)/2;) |  Salida: Result |
|----------------|-----------------|--------------------------|---------------|
|      10        |        8         |        ar = (10*8)/2;        |     40        | 
|      15        |       40         |        ar = (15*40)/2;        |   300        |
|      7        |        15        |        ar = (7*15)/2;        |      52.5      |



[Practica 3](./ActividadesEnPSeInt/Area_Triangulo.psc)
---
## Ejercicios 4:

> Entrada: Se requiere programar un algoritmo que ayude a cuanto recaudan dos buses que estan tranportando 35 pasajeros y van al mismo destino, el usuario debera de ingresar las tarifas de cada bus.  
> Proceso: Se debe multiprical la tarifa de cada bus por los pasajeros y se guardaran en sus respectivas variables.  
> Salida: Se mostrara mediante un mensaje lo que recolectaron los buses 
### Pruebas de escritorio
| Entrada (t1) | Entrada (t2) | Proceso (tT1 = t1*p) | Proceso (tT2 = t2*p) |  Salida: tT1 |  Salida: tT2 |
|----------------|-----------------|--------------------------|--------------------------|---------------|---------------|
|       10       |        7        |      tT1 = 10*35          |    tT2 = 7*35         |      350       |     245         | 
|        9       |        14       |      tT1 = 9*35          |    tT2 = 14*35         |      315       |     490         | 
|       20      |         25       |      tT1 = 20*35          |    tT2 = 25*35         |     700        |    875          | 



[Practica 4](./ActividadesEnPSeInt/Recaudacuon_debuses.psc)
---
## Ejercicios 5:

> Entrada: Se requiere realizar un algoritmo que calcule el porcentaje de mujeres y hombres dado la cantidad para cada categoría.
> Proceso: Se utilizaran las formulas "tP= cH+cM;", "resulH = (cH/tP)*100" y "resulM = (cM/tP)*100" para calcular cada porsentaje
> Salida: Mediante un Mensaje se mostrara el resultado
### Pruebas de escritorio
| Entrada (cH) | Entrada (cM) | Proceso (tP=cH+cM) | Proceso (resulH = (cH/tP)*100) | Proceso (resulM = (cM/tP)*100) |  Salida: resulH |  Salida: resulH |
|----------------|-----------------|--------------------------|--------------------------|--------------------------|---------------|---------------|
|      75      |      60        |       tP=75+60         |    resulH = (75/135)*100         |     resulM = (60/135)*100       |       55.55%        |       44.44%         | 
|      85      |      25        |       tP=85+25         |    resulH = (85/110)*100       |       resulM = (25/110)*100      |       77.27%        |        22.72%        | 
|      50      |      90        |        tP=50+90        |    resulH = (50/140)*100        |      resulM = (90/140)*100       |      35.71%         |       64.28%         | 



[Practica 5](./ActividadesEnPSeInt/Porcentaje_mujeres_y_hombres.psc)
---
## Ejercicios 6:

> Entrada: Se requiere crear un programa que calcule el cambio que recibirá una persona, de acuerdo al dinero disponible y el costo del producto.
> Proceso: Se solicitará la cantidad de dinero del cliente y el precio del producto. Luego se restará el costo al dinero disponible con la fórmula rP = ct - p.
> Salida: Se mostrará el cambio restante mediante un mensaje.
### Pruebas de escritorio
| Entrada (ct) | Entrada (p) | Proceso (rP = ct - p) | Salida (rP) |
| ------------ | ----------- | --------------------- | ----------- |
| 20           | 15          | 20 - 15 = 5           | 5           |
| 50           | 45          | 50 - 45 = 5           | 5           |
| 100          | 80          | 100 - 80 = 20         | 20          |



[Practica 6](./ActividadesEnPSeInt/combio_Producto.psc)
---
## Ejercicios 7:

> Entrada: Se necesita calcular el volumen de una caja de dimensiones A, B y C ingresadas por el usuario.
> Proceso: Se multiplican las tres dimensiones aplicando la fórmula Resul = a * b * c.
> Salida: Se muestra el volumen total de la caja.
### Pruebas de escritorio
| Entrada (a) | Entrada (b) | Entrada (c) | Proceso (Resul = a*b*c) | Salida (Resul) |
| ----------- | ----------- | ----------- | ----------------------- | -------------- |
| 2           | 3           | 4           | 2 * 3 * 4 = 24          | 24             |
| 5           | 2           | 3           | 5 * 2 * 3 = 30          | 30             |
| 1.5         | 2           | 2.5         | 1.5 * 2 * 2.5 = 7.5     | 7.5            |



[Practica 7](./ActividadesEnPSeInt/Volumen_de_caja.psc)
---
## Ejercicios 8:

> Entrada: Se solicita el sueldo mensual de un asesor que trabajó tres meses.
> Proceso: Se multiplica el sueldo mensual por los 3 meses usando la fórmula sF = sA * mT.
> Salida: Se muestra el sueldo total a pagar.
### Pruebas de escritorio
| Entrada (sA) | Proceso (mT=3) | Proceso (sF = sA*mT) | Salida (sF) |
| ------------ | -------------- | -------------------- | ----------- |
| 400          | 3              | 400 * 3 = 1200       | 1200        |
| 800          | 3              | 800 * 3 = 2400       | 2400        |
| 1000         | 3              | 1000 * 3 = 3000      | 3000        |




[Practica 8](./ActividadesEnPSeInt/Salario_asesor.psc)
---
## Ejercicios 9:

> Entrada: Se requiere realizar un algoritmo que permita determinar si la cuenta de un usuario se encuentra activa o desactivada, según los meses transcurridos desde su último ingreso.
> Proceso: Se solicitará el nombre de usuario, la contraseña y los meses desde su último acceso. Si los meses son menores o iguales a 12, el usuario se considera activo, de lo contrario estará desactivado.
> Salida: Se mostrará un mensaje indicando si el usuario se encuentra activo o desactivado.
### Pruebas de escritorio
| Entrada                          | Proceso                             | Salida esperada                        |
| ------------------------------------ | --------------------------------------- | -------------------------------------------- |
| nC = “Carlos”<br>c = 1234<br>sE = 5  | Como 5 ≤ 12, se cumple la condición     | “Carlos su usuario se encuentra: activo”     |
| nC = “Lucía”<br>c = 9876<br>sE = 14  | Como 14 > 12, no se cumple la condición | “Lucía su usuario se encuentra: Desactivado” |
| nC = “Andrés”<br>c = 5555<br>sE = 12 | Como 12 ≤ 12, se cumple la condición    | “Andrés su usuario se encuentra: activo”     |





[Practica 9](./CuentaElectronica.psc)
---
## Ejercicios 10:

> Entrada: Se solicita ingresar tres números para calcular su promedio.
> Proceso: Se utiliza la fórmula promedio = (n1 + n2 + n3) / 3.
> Salida: Se muestra el promedio final de los tres números.
### Pruebas de escritorio
| Entrada (n1) | Entrada (n2) | Entrada (n3) | Proceso (promedio=(n1+n2+n3)/3) | Salida (promedio) |
| ------------ | ------------ | ------------ | ------------------------------- | ----------------- |
| 5            | 10           | 15           | (5+10+15)/3 = 10                | 10                |
| 8            | 7            | 9            | (8+7+9)/3 = 8                   | 8                 |
| 12           | 15           | 9            | (12+15+9)/3 = 12                | 12                |




[Practica 10](./ActividadesEnPSeInt/PromedioTresNumeros.psc)
---
## Ejercicios 11:

> Entrada: Se requiere calcular la cantidad total de dinero recibida por la venta de leche, en base a los litros producidos y el precio por galón.
> Proceso: Se convierte litros a galones con la fórmula cG = lL / 3.785 y luego se calcula tP = cG * pGL.
> Salida: Se mostrará el total en dólares.
### Pruebas de escritorio
| Entrada (lL) | Entrada (pGL) | Proceso (cG=lL/3.785) | Proceso (tP=cG*pGL) | Salida (tP) |
| ------------ | ------------- | --------------------- | ------------------- | ----------- |
| 10           | 5             | 10/3.785 = 2.64       | 2.64*5 = 13.2       | 13.2        |
| 25           | 4.5           | 25/3.785 = 6.6        | 6.6*4.5 = 29.7      | 29.7        |
| 15           | 6             | 15/3.785 = 3.96       | 3.96*6 = 23.76      | 23.76       |




[Practica 11](./ActividadesEnPSeInt/Litros_ygalones_leche.psc)
---
## Ejercicios 12:

> Entrada: Se necesita calcular el costo total para pintar una superficie.
> Proceso: Se multiplican los metros cuadrados por el precio por metro cuadrado: pT = pm * m2.
> Salida: Se muestra el total a pagar.
### Pruebas de escritorio
| Entrada (pm) | Entrada (m2) | Proceso (pT=pm*m2) | Salida (pT) |
| ------------ | ------------ | ------------------ | ----------- |
| 2.5          | 100          | 2.5 * 100 = 250    | 250         |
| 3            | 75           | 3 * 75 = 225       | 225         |
| 1.8          | 120          | 1.8 * 120 = 216    | 216         |




[Practica 12](./ActividadesEnPSeInt/Pintada_m2.psc)
---
## Ejercicios 13:

> Entrada: Se ingresan tres notas de un alumno con ponderaciones: 30%, 30% y 40%.
> Proceso: Se calcula cada ponderación y luego se suman:
N1 = n1 * 0.3, N2 = n2 * 0.3, N3 = n3 * 0.4, promedio = N1 + N2 + N3.
> Salida: Se muestra el promedio final ponderado.
### Pruebas de escritorio
| Entrada (n1) | Entrada (n2) | Entrada (n3) | Proceso (N1=n1*0.3) | Proceso (N2=n2*0.3) | Proceso (N3=n3*0.4) | Salida (promedio) |
| ------------ | ------------ | ------------ | ------------------- | ------------------- | ------------------- | ----------------- |
| 10           | 8            | 9            | 3                   | 2.4                 | 3.6                 | 9.0               |
| 7            | 9            | 8            | 2.1                 | 2.7                 | 3.2                 | 8.0               |
| 6            | 7            | 9            | 1.8                 | 2.1                 | 3.6                 | 7.5               |



[Practica 13](./ActividadesEnPSeInt/Porcentaje_promedio.psc)
---
## Ejercicios 14:

> Entrada: Se ingresa el nombre del estudiante, su altura (en metros) y su peso (en kg).
> Proceso: Se calcula el Índice de Masa Corporal (IMC) con la fórmula IMC = peso / (Alt^2) y se determina su estado: "IMC < 18.5 → Bajo peso", "18.5 ≤ IMC ≤ 24.9,→ Normal", "25 ≤ IMC ≤ 29.9 → Sobrepeso" y "IMC ≥ 30 → Obesidad"
> Salida: Se muestra un mensaje con el IMC y la clasificación correspondiente.
### Pruebas de escritorio
| Entrada (NE) | Entrada (Alt) | Entrada (peso) | Proceso (IMC=peso/(Alt^2)) | Clasificación | Salida                          |
| ------------ | ------------- | -------------- | -------------------------- | ------------- | ------------------------------- |
| Ana          | 1.65          | 55             | 55/(1.65²)=20.2            | Peso normal   | Ana tiene peso normal, IMC=20.2 |
| Luis         | 1.70          | 85             | 85/(1.70²)=29.4            | Sobrepeso     | Luis tiene sobrepeso, IMC=29.4  |
| Carla        | 1.60          | 45             | 45/(1.60²)=17.6            | Bajo peso     | Carla tiene bajo peso, IMC=17.6 |




[Practica 14](./ActividadesEnPSeInt/Pineda_Rodas_Christopher_Alexander_PL1.psc)
---
## Ejercicios 15:

> Entrada: Calificaciones C1, C2 y nota de laboratorio (nL).
> Proceso: Calcular nota mínima necesaria en C3 con la fórmula: c3 = (3 * (nF - 0.3 * nL)) / 0.7 - (c1 + c2)
> Donde nF = 60.
Salida: Mostrar la nota mínima requerida o advertir si es inválida (>100).
### Pruebas de escritorio
| Entrada (c1) | Entrada (c2) | Entrada (nL) | Proceso (c3=(3*(nF-0.3*nL))/0.7-(c1+c2)) | Salida                        |
| ------------ | ------------ | ------------ | ---------------------------------------- | ----------------------------- |
| 50           | 60           | 70           | (3*(60-0.3*70))/0.7-(50+60)=15.7         | Debe obtener 15.7 en C3       |
| 40           | 55           | 80           | (3*(60-0.3*80))/0.7-(40+55)=30.7         | Debe obtener 30.7 en C3       |
| 90           | 95           | 85           | (3*(60-0.3*85))/0.7-(90+95)=-80.4        | Ya posee las notas requeridas |




[Practica 15](./ActividadesEnPSeInt/EjercicioAPC2.psc)
---

### 🔙 Navegación

[⬅️ Atras](./EjerciciosDePractica.md)

[⬅️ Regresar al índice](./Indice.md)

