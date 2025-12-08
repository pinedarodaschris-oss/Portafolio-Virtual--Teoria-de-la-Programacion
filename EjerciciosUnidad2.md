


## Ejemplo de la transformacion de un lenguaje a otro
### Codigo C
<img width="680" height="863" alt="image" src="https://github.com/user-attachments/assets/d9e65224-6d19-4797-977d-4458beb41005" />

### Terminar
<img width="1232" height="458" alt="image" src="https://github.com/user-attachments/assets/5932476d-0434-47f4-a3a9-74bc1ab51987" />

---


### Codigo en Java
<img width="820" height="752" alt="image" src="https://github.com/user-attachments/assets/f78be3a0-6fc3-4472-aba9-287e5fbcbaff" />
<img width="857" height="557" alt="image" src="https://github.com/user-attachments/assets/20c76a27-0d18-448c-b194-418a0c3fe890" />

### Terminar
<img width="1362" height="507" alt="image" src="https://github.com/user-attachments/assets/29abf687-8832-4526-928d-00f1f562b22e" />

---


### Cogigo en Python
<img width="637" height="945" alt="image" src="https://github.com/user-attachments/assets/535ef1f9-0b1d-45dd-8512-63b7540c2a9e" />

### Terminar
<img width="952" height="482" alt="image" src="https://github.com/user-attachments/assets/df494609-5aac-44e0-86cc-8afd60b0c394" />

---
## Metodo de tranformacion de codigo C a Java y Python

| Categoría / Elemento          | Código C                              | Adaptación / Reemplazo en Java                                                                 | Adaptación / Reemplazo en Python                                                               |
|-------------------------------|----------------------------------------|--------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| Inicio del Programa           | Función `main()`                       | Clase `public class Nombre` y método `public static void main(String[] args)`                   | Comienza en el ámbito global (no requiere función principal).                                  |
| Declaración de Variables      | `int intent = 1;`                      | `int intento = 1;` (requiere tipos explícitos y estáticos).                                     | `intento = 1` (tipado dinámico, sin declaración previa).                                      |
| Biblioteca de E/S             | `#include <stdio.h>`                   | `import java.util.Scanner;`                                                                      | No requiere importación para `input()` y `print()`.                                            |
| Entrada del Usuario           | `scanf("%i", &numUsuario);`            | Uso de `Scanner`: `numUsuario = scanner.nextInt();`                                             | `num_usuario = int(input())`.                                                                 |
| Estructura Repetitiva         | `do { ... } while (intent <= 5);`      | Se mantiene `do { ... } while (intento <= 5);`                                                  | Se usa `while intento <= 5:`                                                                  |
| Estructuras Condicionales     | `if (...) ... else if ... else ...`    | `if (condicion) ... else if (condicion) ... else ...`                                           | `if condicion: ... elif condicion: ... else:`                                                  |
| Salida (Impresión)            | `printf("...");`                       | `System.out.println("...");`                                                                    | `print("...")`                                                                                 |
| Tipo de Cadena de Resultado   | `char * F;`                            | Uso de `String resultado = "...";`                                                              | Uso de variable string: `resultado = "..."`.                                                  |
| Manejo de Errores (Entrada)   | No incluido nativamente en el ejemplo  | `if (scanner.hasNextInt())` para validar entrada numérica.                                      | `try { ... } catch (ValueError) { ... }`                                                      |
| Uso de Apuntadores (`&`)      | Uso de `&` para obtener dirección      | No se utiliza; Java gestiona referencias automáticamente.                                      | No se utiliza.                                                                                 |

---
### 🔙 Navegación

[⬅️ Atras](./Unidad2.md)

[⬅️ Regresar al índice](./Indice.md)
