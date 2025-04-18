# 📘 Guía de Ayuda para Principiantes en Programación C++

Este documento sirve como referencia rápida para estudiantes que están comenzando con la programación en C++, basada en las actividades vistas hasta ahora. Aquí encontrarás comandos útiles, buenas prácticas de estilo, fórmulas matemáticas aplicadas, estructuras comunes, un modelo de inicio y un FAQ con dudas frecuentes.

---

## 🧾 Glosario de Comandos y Funciones Básicas

| Comando / Función | Uso / Descripción |
|-------------------|-------------------|
| `#include <iostream>` | Permite usar `cin`, `cout` y entrada/salida estándar |
| `#include <iomanip>` | Permite controlar formato de salida como `setprecision()` y `setw()` |
| `#include <cmath>` | Habilita funciones matemáticas como `pow()`, `abs()`, `M_PI` |
| `using namespace std;` | Permite omitir `std::` al usar `cout`, `cin`, etc. |
| `cout <<` | Muestra texto en pantalla |
| `cin >>` | Captura datos del teclado |
| `endl` | Salto de línea (igual que `\n` pero más formal en `cout`) |
| `system("pause")` | Pausa el programa al final (solo en Windows) |
| `fixed` | Muestra decimales fijos con `setprecision()` |
| `setprecision(n)` | Controla la cantidad de decimales a mostrar |
| `setw(n)` | Ajusta el ancho del campo de salida, útil para alinear columnas |
| `abs(x)` | Devuelve el valor absoluto de un número |
| `pow(a, b)` | Eleva a una potencia: `a^b` |
| `M_PI` | Valor de π, disponible desde `<cmath>` |
| `sqrt(x)` | Devuelve la raíz cuadrada de `x` (requiere `<cmath>`) |

---

## 🎯 Recordatorios para Principiantes

- **Siempre declara tus variables antes de usarlas**.
- **Usa punto decimal** en números reales (ej. `3.0` en lugar de `3`).
- **Incluye solo las librerías que necesitas**.
- Evita declarar variables que no usas.
- Dale nombres claros a tus variables (`sueldo`, `promedio`, `radio`, etc.).
- La consola **no lee espacios con `cin`** al capturar texto; usa `getline()` si quieres cadenas largas.
- **Acomoda tu código con sangrías y comentarios**, para que sea más fácil de leer y entender.
- Es mejor **probar seguido y en partes** que escribir todo de una vez.

---

## 🎨 Estilo de Presentación (Visual y Profesional)

- Utiliza **líneas decorativas**: `=====`, `-----`, `********`
- Incluye **encabezados centrados o destacados** al inicio
- Presenta salidas con formato tipo **POS** o **oficio escolar**
- Usa `setprecision(2)` y `fixed` para **valores monetarios o físicos**
- Muestra unidades: `cm`, `cm²`, `°C`, `K`, `MXN`, `USD`, etc.
- Alinea las columnas con `setw()` si es posible

---

## 🧮 Fórmulas Matemáticas Relevantes

| Nombre | Fórmula | Uso |
|--------|---------|-----|
| Promedio | (a + b + c) / 3 | Promedios escolares |
| Área triángulo | (base * altura) / 2 | Geometría |
| Área circunferencia | π * r² | Física/Matemáticas |
| Longitud circunferencia | 2 * π * r | Geometría |
| Fahrenheit | (C * 9/5) + 32 | Conversión de temperatura |
| Kelvin | C + 273.15 | Conversión de temperatura |
| Suma de N enteros | N * (N + 1) / 2 | Series numéricas |

---
## 🔡 Manipulación de Caracteres (Mayúsculas, Minúsculas y Más)

Estas funciones permiten trabajar con letras individuales, muy útiles al validar entradas, comparar caracteres o normalizar datos.

| Función | Uso / Descripción |
|--------|--------------------|
| `tolower(c)` | Convierte un carácter `c` a minúscula (`'A'` → `'a'`) |
| `toupper(c)` | Convierte un carácter `c` a mayúscula (`'a'` → `'A'`) |
| `isupper(c)` | Devuelve `true` si `c` es mayúscula |
| `islower(c)` | Devuelve `true` si `c` es minúscula |
| `isalpha(c)` | Devuelve `true` si `c` es una letra (a-z o A-Z) |
| `isdigit(c)` | Devuelve `true` si `c` es un número (0-9) |

📌 Todas estas funciones requieren la librería `<cctype>`.

### ✍️ Ejemplo de uso:

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letra;

    cout << "Ingresa una letra: ";
    cin >> letra;

    if (isalpha(letra)) {
        cout << "Versión en mayúscula: " << char(toupper(letra)) << endl;
        cout << "Versión en minúscula: " << char(tolower(letra)) << endl;
    } else {
        cout << "No ingresaste una letra." << endl;
    }

    return 0;
}
```

🔍 Esto sirve para normalizar texto, validar formularios, o hacer que dos entradas "iguales pero distintas" (como `'a'` y `'A'`) puedan compararse correctamente.

---
## 🔀 Operadores Lógicos en C++

Los operadores lógicos permiten construir condiciones más complejas combinando múltiples expresiones booleanas.

| Operador | Nombre | Descripción | Ejemplo |
|----------|--------|-------------|---------|
| `&&` | AND (Y lógico) | Devuelve `true` solo si **ambas** condiciones son verdaderas | `(a > 0 && b < 10)` |
| `||` | OR (O lógico) | Devuelve `true` si **al menos una** condición es verdadera | `(edad >= 18 || tienePermiso)` |
| `!` | NOT (Negación) | Invierte el valor lógico de una condición | `!(x == 5)` es `true` si `x` **no** es 5 |

🔎 Úsalos en estructuras como `if`, `while` y `for` para tomar decisiones más complejas.

---
## 🧱 Modelo Base de Código en C++

```cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Declaración de variables

    // Entrada de datos

    // Cálculos

    // Salida de resultados

    system("pause");
    return 0;
}
```

---

## ❓ Preguntas Frecuentes (FAQ)

### 1. ¿Por qué usar `fixed` y `setprecision(2)` juntos?
Porque `setprecision` por sí solo limita el total de cifras, pero con `fixed` se convierte en un control de **decimales**.

### 2. ¿Cuál es la diferencia entre `float` y `double`?
Ambos almacenan números con decimales, pero `double` tiene **más precisión**.

### 3. ¿Qué pasa si no uso `abs()`?
Puedes hacer la diferencia manualmente con un `if`, pero `abs()` la garantiza en una línea.

### 4. ¿Para qué sirve `setw()`?
Para **alinear valores** en columnas, útil en recibos, tickets o reportes de notas.

### 5. ¿Debo memorizar todas las fórmulas?
No, pero es importante **entender su estructura** y saber cómo aplicarlas al traducir problemas al código.

### 6. ¿Qué es una estructura Entrada – Proceso – Salida?
Es la **base lógica** de todo programa: primero se capturan los datos, luego se procesan y finalmente se muestran los resultados.


### ⚠️ ERRORES COMUNES ESPECÍFICOS

| Error o mensaje | Causa común | Solución recomendada |
|-----------------|-------------|-----------------------|
| `expected ';' before` | Olvidaste un punto y coma al final de una instrucción | Verifica cada línea |
| `was not declared in this scope` | Usaste una variable no declarada | Declárala antes de usarla |
| `no match for operator <<` | Intentas mostrar algo incompatible con `cout` (ej. `cout << nombre[10];` sin contexto) | Asegúrate que la variable esté correctamente definida |
| `invalid operands to binary expression` | Tipos incompatibles en operaciones, como `string + int` | Convierte variables si es necesario |
| `getline()` se salta la entrada | `cin >>` anterior dejó un `\n` pendiente | Usa `cin.ignore();` antes |
| No imprime el resultado | `cout` mal escrito o variable vacía | Revisa que la variable tenga un valor asignado y `cout` esté bien escrito |
| Ciclo infinito con `while` | La condición nunca cambia o nunca se vuelve falsa | Asegúrate de actualizar la variable dentro del ciclo |
| `undefined reference to 'main'` | No hay una función `main()` | Revisa que tengas `int main()` correctamente escrito |
| `too many arguments to function` | Pasaste más datos de los que recibe una función | Asegúrate que coincidan los parámetros |
| `ambiguous overload for operator<<` | Intentas imprimir un tipo no compatible | Usa cast o convierte el tipo apropiadamente |
| `'VARIABLE' was not declared in this scope` | Variable no declarada o fuera de alcance | Declara la variable antes de usarla |
| `expected identifier before '(' token` | Condición `if` mal estructurada | Encierra toda la condición entre paréntesis `()` |
| `expected ';' before 'cout'` | Olvidaste cerrar la línea anterior con `;` | Asegúrate de terminar cada línea con punto y coma |
| `expected identifier before '(' token` | Usaste `if` con paréntesis mal colocados | Toda la condición debe ir dentro del `if`, ej. `if ((a + b > c) && ...)` |

🛠 Si recibes errores raros, **lee el mensaje completo**, y ve línea por línea.

---

## 🧠 Consejo Final

> No te memorices el código: **entiéndelo paso a paso**. Es como aprender a cocinar: primero lees, luego practicas, y al final, improvisas.

---

📁 Si deseas ver ejemplos prácticos, revisa las carpetas `act-1-descuento-botas` a `act-18-suma-promedio-tres-numeros`.

¡Sigue practicando y no tengas miedo de equivocarte!


---

## ⚠️ Errores Comunes y Cómo Solucionarlos

### ❌ 1. Uso incorrecto de `cin, nom_p;`

**Código incorrecto:**
```cpp
cin, nom_p;
```

**¿Qué hace realmente?**
- Esta línea **no hace ninguna entrada**.
- Solo evalúa dos expresiones separadas por coma. No se lee ningún dato.
- Es equivalente a escribir solo: `nom_p;` → no hace nada útil.

**Consecuencia:**
- El programa no pide el nombre del producto como se esperaba.
- Se salta también la entrada siguiente (como el costo), porque el flujo no se detiene.

---

### ❌ 2. Usar `getline()` después de `cin >>` sin limpiar el buffer

**Contexto:**
```cpp
int SKU;
cin >> SKU;
getline(cin, nom_p); // Se salta esta entrada
```

**¿Por qué se salta?**
- Después de `cin >> SKU;`, queda un **salto de línea (`\n`) pendiente** en el buffer de entrada.
- `getline()` lo captura de inmediato pensando que el usuario ya presionó Enter.

---

### ✅ Solución correcta:

```cpp
cin >> SKU;
cin.ignore();            // Limpia el salto de línea pendiente
cin.getline(nom_p, 99);  // Captura toda la línea con espacios
```

**¿Por qué `cin.ignore();`?**
- Elimina el `\n` restante en el buffer.

**¿Por qué `getline()`?**
- Permite capturar nombres con espacios como "Mango ataulfo", a diferencia de `cin >>` que solo toma una palabra.

---

### ✅ Resultado esperado

- El nombre del producto se captura correctamente.
- El costo también se recibe sin que el programa lo salte.
- El flujo del programa continúa limpio y sin errores.

---

## 🗂 Otros errores frecuentes

| `expected ';' before` | Falta un punto y coma al final de una declaración de variable o instrucción | Asegúrate de cerrar cada línea con `;` |
| `'x' was not declared in this scope` | Usaste una variable antes de declararla | Declárala al inicio del bloque `main()` o donde la necesites |
| `expected identifier before '(' token` | Error de paréntesis en estructuras como `if` | Encierra toda la condición entre un solo paréntesis `if ((cond1) && (cond2))` |
| `expected initializer before 'cout'` | Hay un error anterior que impide interpretar correctamente el `cout` | Verifica que todas las líneas anteriores estén bien cerradas |

| `expected ';' before` | Falta punto y coma al final de una declaración de variable | Agrega `;` al final de la línea |
| `was not declared in this scope` | Se usó una variable no declarada | Asegúrate de declarar todas las variables antes de usarlas |
| `expected identifier before '(' token` | Error en el uso de `if` sin encerrar toda la condición entre paréntesis | Usa paréntesis para encerrar toda la condición del `if` |




---

📁 Si deseas ver ejemplos prácticos, revisa las carpetas `act-1-descuento-botas` a `act-18-suma-promedio-tres-numeros`.

## 🧰 Plantillas básicas de estructuras en C++

A continuación, se incluyen **plantillas reutilizables** para distintas estructuras de control comunes en C++.

---

### ✅ Plantilla base de un programa en C++

```cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Declaración de variables

    // Entrada de datos

    // Proceso

    // Salida de datos

    system("pause");
    return 0;
}
```

---

### 🔁 Estructura condicional: IF - ELSE

```cpp
if (condición) {
    // Código si la condición es verdadera
} else {
    // Código si la condición es falsa
}
```

### 🔁 Estructura IF - ELSE IF - ELSE

```cpp
if (condición1) {
    // Código si condición1 es verdadera
} else if (condición2) {
    // Código si condición2 es verdadera
} else {
    // Código si ninguna condición anterior se cumple
}
```

---

### 🔁 Ciclo WHILE (Mientras)

```cpp
while (condición) {
    // Repetir este bloque mientras la condición sea verdadera
}
```

---

### 🔁 Ciclo DO WHILE (Hacer - Mientras)

```cpp
do {
    // Código que se ejecuta al menos una vez
} while (condición);
```

---

### 🔁 Ciclo FOR

```cpp
for (int i = 0; i < límite; i++) {
    // Código que se repite un número determinado de veces
}
```

---

### 🔁 Estructura SWITCH (Caso)

```cpp
switch (variable) {
    case valor1:
        // Código si variable == valor1
        break;
    case valor2:
        // Código si variable == valor2
        break;
    default:
        // Código si ningún caso anterior se cumple
        break;
}
```

---

✅ Estas estructuras te permiten **tomar decisiones, repetir bloques de código y adaptar el comportamiento de tu programa** a diferentes condiciones y entradas.

📌 Te recomendamos practicar con ellas para dominarlas y poder resolver problemas reales fácilmente.

¡Sigue practicando y no tengas miedo de equivocarte!
