# 📘 Guía de Ayuda para Principiantes en Programación C++

Este documento sirve como referencia rápida para estudiantes que están comenzando con la programación en C++, basada en las actividades vistas hasta ahora. Aquí encontrarás comandos útiles, buenas prácticas de estilo, fórmulas matemáticas aplicadas, estructuras comunes, un modelo de inicio y un FAQ con dudas frecuentes.

> No te memorices el código: **entiéndelo paso a paso**. Es como aprender a cocinar: primero lees, luego practicas, y al final, improvisas.

---

## 🧾 Glosario de Comandos y Funciones Básicas

| Comando / Función | Uso / Descripción |
|-------------------|-------------------|
| `#include <iostream>` | Permite usar `cin`, `cout` y entrada/salida estándar |
| `#include <iomanip>` | Permite controlar formato de salida como `setprecision()` y `setw()` |
| `#include <cmath>` | Habilita funciones matemáticas como `pow()`, `abs()`, `M_PI` |
| `using namespace std;` | Permite omitir `std::` al usar `cout`, `cin`, etc. |
| `#include <limits>'` | Sirve para usar los límites máximos y mínimos de tipos como int, float, etc.
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
| "(https://www.ibm.com/docs/es/i/7.5.0?topic=be-logical-operator)" | OR (O lógico) | Devuelve `true` si **al menos una** condición es verdadera | `(edad >= 18 || tienePermiso)` |
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
## 🔄 Conversión de Tipos: `static_cast<T>()`

La función `static_cast<tipo>()` permite convertir un valor de un tipo de dato a otro de forma segura y explícita.

### 🧠 ¿Por qué usar `static_cast<float>`?

En C++, si haces una división entre dos enteros, **el resultado será un entero**, incluso si lo guardas en una variable `float`. Por ejemplo:

```cpp
int a = 20, b = 178;
float porcentaje = (a / b) * 100;  // ❌ Da 0.0 en lugar de 11.24
```

Esto se debe a que `a / b` se evalúa como una división entera, que da 0.

✅ Para forzar una división en punto flotante, puedes hacer:

```cpp
float porcentaje = (static_cast<float>(a) / b) * 100;  // ✔ Da 11.24
```

### 🆚 Comparación con PSeInt
En PSeInt puedes escribir:
```pseudocode
porcentaje = (20 / 178) * 100
```
Y el resultado será decimal, porque el pseudolenguaje **no distingue entre enteros y reales** al dividir. En cambio, C++ **sí lo hace**, y eso puede generar errores si no se castea el dato.

### 🧪 Ejemplo dentro de un programa:
```cpp
// Justificación del uso de static_cast<float>:
// En este punto se calcula el porcentaje de empleados mayores de 60 años respecto al total de trabajadores.
// En C++, la división entre enteros da un resultado entero, por eso usamos static_cast para obtener decimales.
porcentaje_jubilacion = (static_cast<float>(vc_tb_jub) / 178.0f) * 100;
```

### 📌 Recomendación
Usar `static_cast<float>()` **hace tu intención clara**, **evita errores silenciosos**, y mejora la legibilidad del código.

---

## 🧠 Consejo Final

> No te memorices el código: **entiéndelo paso a paso**. Es como aprender a cocinar: primero lees, luego practicas, y al final, improvisas.
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




---

## 🧠 Consejo Final

> No te memorices el código: **entiéndelo paso a paso**. Es como aprender a cocinar: primero lees, luego practicas, y al final, improvisas.

---

📁 Si deseas ver ejemplos prácticos, revisa las carpetas `act-1-descuento-botas` a `act-18-suma-promedio-tres-numeros`.

¡Sigue practicando y no tengas miedo de equivocarte!


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


## 📝 Manejo de Espacios en Blanco y Tipos de Datos

### 📥 Captura de Datos con `cin >> ws`

`cin >> ws` es una forma de ignorar espacios en blanco antes de capturar texto. Esto es útil al capturar cadenas de texto que podrían estar precedidas por espacios no deseados.

#### ✅ Ejemplo:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    cout << "Ingresa tu nombre: ";
    cin >> ws; // Ignora espacios en blanco previos
    getline(cin, nombre);
    cout << "Hola, " << nombre << "!" << endl;
    return 0;
}
```

### 🚀 Tipos de Datos y Espacios en Blanco

| Tipo de Dato | Impacto del Espacio | Ejemplo |
|--------------|----------------------|---------|
| `int`, `float`, `double` | Ignora espacios antes del valor | `cin >> ws >> x;` |
| `char` | Captura el primer carácter, incluso si es un espacio | `cin >> ws >> letra;` |
| `string` | Captura todo, incluyendo espacios si se usa `getline()` | `getline(cin, texto);` |

### 📤 Control de Salida con `cout`

`cout` permite personalizar la salida de datos con precisión, utilizando manipuladores.

#### ✅ Ejemplos:
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor = 3.1415926535;
    cout << fixed << setprecision(4);  // Limita a 4 decimales
    cout << "Valor con 4 decimales: " << valor << endl;

    cout << setw(10) << "Alineado" << endl; // Alinea texto a la derecha
    return 0;
}
```
### 📌 Uso avanzado de `cin >> ws` con Líneas Completas

Cuando deseas capturar una línea completa de texto pero evitando espacios en blanco iniciales, la combinación de `cin >> ws` y `getline()` es muy útil.

#### ✅ Ejemplo:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string linea;

    cout << "Ingresa una línea completa: ";
    cin >> ws;               // Ignora espacios en blanco iniciales
    getline(cin, linea);     // Captura toda la línea

    cout << "La línea ingresada fue: " << linea << endl;
    return 0;
}
```

#### 🔎 ¿Qué ocurre aquí?
- `cin >> ws` ignora cualquier espacio en blanco inicial que el usuario pueda ingresar.
- `getline(cin, linea)` captura el resto del texto, incluyendo espacios internos y finales.

#### 🚀 Cuándo usarlo:
- Cuando necesitas capturar frases completas o líneas de texto sin preocuparte por espacios iniciales.
- En programas de entrada de texto como nombres, descripciones o comandos.
---
### 🎯 Uso Correcto de `setprecision(n)`

La función `setprecision(n)` permite controlar el número de cifras decimales que se muestran en la salida de números reales (flotantes).

#### ✅ ¿Qué es y cómo funciona?
- `setprecision(n)` controla el **número total de dígitos** (enteros y decimales) cuando no se usa `fixed`.
- Al combinarse con `fixed`, controla únicamente los **decimales** que se muestran.

#### ✅ Ejemplos prácticos:

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;

    // Sin fixed: setprecision controla el total de dígitos
    cout << "Sin fixed: " << setprecision(4) << pi << endl;

    // Con fixed: setprecision controla solo los decimales
    cout << fixed << setprecision(2);
    cout << "Con fixed: " << pi << endl;

    return 0;
}
```

#### 🔎 Salida esperada:
```
Sin fixed: 3.142
Con fixed: 3.14
```

#### 🚀 ¿Cuándo usar `setprecision(n)`?
- Cuando necesitas presentar resultados numéricos con una precisión específica, como en cálculos financieros, científicos o de ingeniería.
- Al mostrar valores monetarios o físicos (metros, kilómetros, etc.).

---

### 📘 Lección: Controlando la Precisión de Decimales

Imagina que estás programando una calculadora que debe mostrar resultados financieros, y es crucial que todos los valores se muestren siempre con **2 decimales**, como en una factura.

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double subtotal = 123.4567;
    double iva = subtotal * 0.16;
    double total = subtotal + iva;

    cout << fixed << setprecision(2);
    cout << "Subtotal: $" << subtotal << endl;
    cout << "IVA (16%): $" << iva << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
```

#### 🔎 Salida esperada:
```
Subtotal: $123.46
IVA (16%): $19.75
Total: $143.21
```

#### 🚀 ¿Qué aprendiste?
- `setprecision(n)` es una forma poderosa de controlar la presentación numérica.
- Al usarlo con `fixed`, puedes garantizar un formato consistente de decimales.
- Es esencial para programas que manejan dinero, cálculos precisos o reportes.
## 🧠 Consejo Final

> No te memorices el código: **entiéndelo paso a paso**. Es como aprender a cocinar: primero lees, luego practicas, y al final, improvisas.

### 📏 Uso Correcto de `setw(n)`

La función `setw(n)` permite controlar el ancho de campo que se utilizará para mostrar un valor en la salida. Esto es útil para **alinear textos y números en columnas**, haciendo que las salidas sean más organizadas.

#### ✅ ¿Qué es y cómo funciona?
- `setw(n)` establece el **ancho mínimo** del campo de salida.
- Si el contenido es más pequeño que el ancho especificado, se añaden **espacios a la izquierda** (alineación a la derecha).
- Si el contenido es más grande que el ancho, se muestra completo sin recortarse.

#### ✅ Ejemplo práctico basado en la línea de la ACT 24:
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nom_emp = "Juan Pérez";
    int eda = 35;
    double bonis = 15.5;

    cout << setw(5) << "El empleado " << nom_emp 
         << " con una edad de " << eda 
         << " años, obtendrá una bonificación de " << bonis << "%." << endl;

    return 0;
}
```

#### 🔎 ¿Qué ocurre aquí?
- `setw(5)` aplica solo al siguiente elemento (el texto `"El empleado "`), alineándolo a la derecha con un ancho mínimo de 5 caracteres.
- Como el texto `"El empleado "` es más largo que 5, se muestra completo sin afectar la alineación.

#### ✅ Salida esperada:
```
El empleado Juan Pérez con una edad de 35 años, obtendrá una bonificación de 15.5%.
```

#### 🚀 ¿Cuándo usar `setw(n)`?
- Para alinear columnas de texto o números en reportes, tablas, recibos y menús.
- En programas que requieren una salida visualmente organizada.

---

### 📘 Lección: Alineando Columnas con `setw()`

Imagina que estás programando una lista de empleados con su nombre, edad y bonificación. Sin `setw()`, la salida se vería desorganizada.

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(15) << "Nombre" 
         << setw(10) << "Edad" 
         << setw(15) << "Bonificación" << endl;
    cout << setw(15) << "Juan Pérez" 
         << setw(10) << 35 
         << setw(15) << "15.5%" << endl;
    cout << setw(15) << "Ana Gómez" 
         << setw(10) << 28 
         << setw(15) << "10%" << endl;
    return 0;
}
```

#### 🔎 Salida esperada:
```
         Nombre       Edad    Bonificación
     Juan Pérez        35           15.5%
      Ana Gómez        28             10%
```

#### 🚀 ¿Qué aprendiste?
- `setw(n)` es ideal para alinear columnas y organizar salidas.
- Se aplica solo al siguiente valor que se muestra con `cout`.
- Es útil para reportes, tablas y cualquier salida que deba ser clara y profesional.
---
### 🚀 ¿Qué es `static_cast` en C++?

`static_cast` es una forma segura y controlada de realizar conversiones de tipos en C++, garantizando que el tipo de datos convertido sea compatible y minimizando errores.

#### ✅ ¿Qué es y cómo funciona?
- `static_cast<Tipo>(valor)` convierte un valor a un tipo específico de manera explícita.
- Es más seguro que las conversiones implícitas y evita errores comunes de tipo.
- Solo permite conversiones entre tipos compatibles, como:
  - De entero a flotante (`int` a `float`).
  - De flotante a entero (`double` a `int`).
  - De punteros relacionados (herencia).

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
using namespace std;

int main() {
    int entero = 10;
    double decimal = 3.14;

    // Conversión de entero a flotante
    double convertido = static_cast<double>(entero);
    cout << "Convertido a double: " << convertido << endl;

    // Conversión de flotante a entero (pierde decimales)
    int truncado = static_cast<int>(decimal);
    cout << "Convertido a int: " << truncado << endl;

    return 0;
}
```

#### 🔎 Salida esperada:
```
Convertido a double: 10.0
Convertido a int: 3
```

---

### 📘 Lección: ¿Por qué usar `static_cast`?

Imagina que estás desarrollando una calculadora y deseas que siempre muestre resultados decimales, incluso si los valores son enteros.

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;

    // División entera (trunca decimales)
    cout << "Division sin static_cast: " << a / b << endl;

    // División con static_cast (resultado decimal)
    cout << "Division con static_cast: " << static_cast<double>(a) / b << endl;

    return 0;
}
```

#### 🔎 Salida esperada:
```
Division sin static_cast: 2
Division con static_cast: 2.5
```

#### 🚀 ¿Qué aprendiste?
- `static_cast` es la forma recomendada para convertir tipos en C++ de manera segura.
- Evita errores de tipo y garantiza que las conversiones sean explícitas y comprensibles.
- Es ideal para cálculos que requieren precisión, como divisiones o conversiones específicas.

### 🚀 ¿Qué es `break` en Ciclos?

`break` es una instrucción que permite **salir inmediatamente de un ciclo** (`for`, `while` o `do-while`), incluso si la condición del ciclo no se ha cumplido.

#### ✅ ¿Qué es y cómo funciona?
- Interrumpe la ejecución del ciclo en el que se encuentra.
- No importa si la condición del ciclo sigue siendo verdadera, al encontrar un `break`, el ciclo se termina.
- Es útil para salir de un ciclo basado en una condición especial o al encontrar un valor específico.

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "Se encontró el valor 5, terminando el ciclo." << endl;
            break; // Sale del ciclo inmediatamente
        }
        cout << "Valor: " << i << endl;
    }
    return 0;
}
```

#### 🔎 Salida esperada:
```
Valor: 1
Valor: 2
Valor: 3
Valor: 4
Se encontró el valor 5, terminando el ciclo.
```

---

### 📘 Lección: ¿Cuándo usar `break` en un ciclo?

Imagina que estás desarrollando un programa para buscar el primer número negativo en una lista de números. En lugar de seguir buscando después de encontrarlo, puedes usar `break` para detener el ciclo.

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[] = {3, 7, 1, -5, 4, 8};
    int tam = 6;

    for (int i = 0; i < tam; i++) {
        if (numeros[i] < 0) {
            cout << "Primer número negativo encontrado: " << numeros[i] << endl;
            break; // Detiene el ciclo al encontrar el primer negativo
        }
    }

    return 0;
}
```

#### 🔎 Salida esperada:
```
Primer número negativo encontrado: -5
```
🔵 break es una instrucción que interrumpe inmediatamente el ciclo (ya sea for, while o do...while) en el que está y sale de él.

En este caso, si el usuario responde con 'N' o 'n' en la primera pregunta, el programa:

No entra a capturar datos.

Rompe el ciclo de inmediato.

Sigue con las instrucciones que estén después del do...while, es decir, mostrar los resultados.

#### 🚀 ¿Qué aprendiste?
- `break` permite controlar ciclos y salir de ellos de forma anticipada.
- Es ideal para buscar valores específicos o salir de procesos repetitivos.
- Debes usarlo con cuidado para no crear errores lógicos.

## 🔤 Manipulación de Cadenas de Caracteres (Strings)

Las cadenas de caracteres (strings) en C++ se manipulan fácilmente gracias a las funciones de la clase `string`. Estas funciones permiten obtener información, modificar, comparar y transformar cadenas.

#### ✅ Funciones Básicas de Manipulación de Strings
| Función | Descripción | Ejemplo |
|----------|--------------|---------|
| `length()` | Devuelve la longitud de la cadena | `str.length()` |
| `empty()` | Verifica si la cadena está vacía | `str.empty()` |
| `clear()` | Borra todo el contenido de la cadena | `str.clear()` |
| `at(n)` | Devuelve el carácter en la posición `n` | `str.at(2)` |
| `substr(pos, len)` | Extrae una subcadena desde `pos` y de longitud `len` | `str.substr(0, 4)` |
| `append()` | Agrega texto al final de la cadena | `str.append(" texto")` |
| `insert(pos, texto)` | Inserta texto en una posición específica | `str.insert(3, "ABC")` |
| `erase(pos, len)` | Elimina parte de la cadena | `str.erase(2, 4)` |
| `replace(pos, len, texto)` | Reemplaza parte de la cadena | `str.replace(0, 4, "Nuevo")` |
| `find(texto)` | Busca texto y devuelve su posición | `str.find("Hola")` |
| `rfind(texto)` | Busca texto desde el final | `str.rfind("Hola")` |
| `compare(str2)` | Compara dos cadenas (devuelve 0 si son iguales) | `str.compare("Otro")` |

---

### 📘 Lección: Manipulando Cadenas de Texto

Imagina que estás desarrollando un programa que debe manejar nombres completos, y deseas extraer solo el nombre de pila.

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre_completo = "Juan Pérez López";
    string nombre;

    // Extraer el primer nombre (hasta el primer espacio)
    nombre = nombre_completo.substr(0, nombre_completo.find(" "));

    cout << "Nombre de pila: " << nombre << endl;
    return 0;
}
```

#### 🔎 Salida esperada:
```
Nombre de pila: Juan
```

#### 🚀 ¿Qué aprendiste?
- Puedes utilizar `substr()` y `find()` para extraer partes específicas de una cadena.
- Las funciones de string permiten manipular fácilmente el texto, ideal para nombres, descripciones o formatos de texto.

## 📘 Lección: ¿Cuándo usar el Operador Ternario?

Imagina que estás desarrollando un programa para calcular el promedio de edad de un grupo de personas. Sin el operador ternario, necesitarías un `if-else` más largo.

#### ✅ Ejemplo práctico:
```cpp
#include <iostream>
using namespace std;

int main() {
    int total_personas = 0;
    double suma_edades = 0.0;
    double promedio;

    // Simulando datos
    total_personas = 3;
    suma_edades = 75.0;

    // Uso del operador ternario para el promedio
    promedio = (total_personas > 0) ? (suma_edades / total_personas) : 0;

    cout << "Promedio de edad: " << promedio << endl;
    return 0;
}
```

#### 🔎 Salida esperada:
```
Promedio de edad: 25
```

#### 🚀 ¿Qué aprendiste?
- El operador ternario (`? :`) simplifica condiciones cortas en una sola línea.
- Es útil para cálculos que dependen de una condición, como promedios que deben evitar divisiones por cero.
- Puedes usarlo en asignaciones, salidas y cualquier lugar donde se necesite una evaluación rápida.

