# -C
# Congruencia de Zeller

La **congruencia de Zeller** es un algoritmo ideado por **Julius Christian Johannes Zeller** para calcular el día de la semana de cualquier fecha del calendario.

## Fórmula

La fórmula es la siguiente, considerando que todas las divisiones son divisiones enteras:

\[
\left[\frac{d + \left(\frac{13(m + 1)}{5}\right) + y + \left(\frac{y}{4}\right) - \left(\frac{y}{100}\right) + \left(\frac{y}{400}\right)}{7}\right] \mod 7
\]

Donde:

| **Símbolo** | **Descripción**                                                                                                         |
|-------------|-------------------------------------------------------------------------------------------------------------------------|
| **d**       | Es el día del mes (1 a 31).                                                                                             |
| **m**       | Es el mes, pero con la siguiente notación: marzo = 3, abril = 4, …, enero = 13, febrero = 14.                           |
| **y**       | Es el año, pero si el mes es enero o febrero, se disminuye en una unidad.                                               |
| **mod**     | Es el residuo de la división entera (el operador `%`).                                                                  |

El resultado de aplicar esta fórmula será un valor entre 0 y 6, donde:

| **Resultado** | **Día de la Semana** |
|---------------|----------------------|
| 0             | Sábado               |
| 1             | Domingo              |
| 2             | Lunes                |
| 3             | Martes               |
| 4             | Miércoles            |
| 5             | Jueves               |
| 6             | Viernes              |

## Entrada

La entrada comienza con una línea que contiene la cantidad `N` de fechas, no más de 1000. Luego siguen `N` líneas, cada una con una fecha en formato (en minúsculas):

