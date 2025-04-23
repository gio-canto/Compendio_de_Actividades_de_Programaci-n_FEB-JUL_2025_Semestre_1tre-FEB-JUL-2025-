# 🧮 Actividad 22 – Cálculo de Promedios de Estudiantes

Este programa permite capturar y calcular el **promedio individual de 34 estudiantes**, así como el **promedio general del grupo**, considerando seis asignaturas. Además, emplea un sistema de presentación de datos estilo reporte escolar.

---

## 📥 Entrada

Para cada uno de los 34 estudiantes, se solicita:

- Nombre (tipo `string`)
- Edad (`int`)
- Promedios de las siguientes materias (`float`):
  - Pensamiento Matemático I
  - Cultura Digital I
  - Materia y sus Interacciones I
  - Humanidades I
  - Ciencias Sociales
  - Recursos Socioemocionales (A = 10, No acreditado = 5)

> 📝 El nombre del estudiante se captura con `getline()` para admitir nombres con espacios. `cin.ignore()` se usa para limpiar el buffer.

---

## 🔁 Proceso

1. Se repite la entrada y cálculo **34 veces** usando un ciclo `for`.
2. Para cada estudiante:
   - Se calcula el promedio individual sumando las 6 materias y dividiendo entre 6.
   - Se acumula ese promedio en una variable (`acu`) para calcular el promedio general.
3. Al final, se calcula el promedio general dividiendo `acu` entre 34.

---

## 📤 Salida

- Promedio individual de cada estudiante
- Promedio general del grupo

Los valores se muestran con 2 decimales y organizados en secciones, simulando un **reporte tipo consola escolar**.

---

## 📚 Justificación

El algoritmo **“Promedios_Estudiantes.cpp”** refuerza:

- El uso de ciclos `for` para repetir procesos con múltiples usuarios
- La **acumulación de valores** para cálculos generales
- La **captura de texto con espacios** mediante `getline()`
- Buenas prácticas con `fixed` y `setprecision(2)` para mostrar resultados decimales

> 📊 Es un ejercicio ideal para aprender el manejo de múltiples entradas en ciclo y la presentación clara de resultados evaluativos.

---

## ✅ Buenas prácticas aplicadas

| Práctica | Descripción | Beneficio |
|----------|-------------|-----------|
| `cin.ignore()` + `getline()` | Captura de nombres completos | Evita errores de salto de línea |
| `fixed` + `setprecision(2)` | Formato decimal estándar | Claridad numérica |
| Ciclo `for` de 34 iteraciones | Automatiza el ingreso masivo | Ahorra líneas de código |
| Uso de acumulador (`acu`) | Suma todos los promedios | Permite cálculo general |
| Estructura por estudiante | Sección visual clara por alumno | Mejora la legibilidad |

---

Este programa simula un **sistema básico de evaluación escolar** automatizado por consola, útil como introducción al procesamiento de lotes de datos y cálculos en ciclos.


---

## 📘 Justificación adicional: Aplicación del ciclo "PARA"

Este algoritmo captura la información de los 34 estudiantes del grupo 2-B de Programación, incluyendo su nombre, edad y calificaciones en seis materias del primer semestre. Luego, calcula el promedio individual de cada estudiante y, finalmente, el promedio general de la clase.

### 🔁 Uso del ciclo "PARA" (`for` en C++)

Se utiliza la estructura de repetición `for` para iterar automáticamente sobre los 34 estudiantes. Esta elección evita repetir bloques de código y mejora la organización.

```cpp
for (int cont = 1; cont <= 34; cont++) {
    // Captura y procesamiento por estudiante
}
```

> 🧠 Esta estructura es ideal para recorrer conjuntos finitos de elementos de forma controlada.

---

### 🌐 Implementación de "PARA" en otros lenguajes

#### 🔹 Python

```python
for i in range(1, 35):
    # Código para cada estudiante
```

- `for` → Palabra clave que inicia el bucle.
- `i` → Variable de control.
- `range(1, 35)` → Genera los números del 1 al 34 (el segundo valor es exclusivo).

📎 Más información:  
[Python – Función range()](https://docs.python.org/3/tutorial/controlflow.html#4.3.-The%20range()-Function)

---

#### 🔹 JavaScript

```javascript
for (let i = 0; i < 34; i++) {
    // Código para cada estudiante
}
```

- `for` → Palabra clave que define el bucle.
- `let i = 0` → Inicialización.
- `i < 34` → Condición de repetición.
- `i++` → Incremento.

📎 Más información:  
[JavaScript – Operador Resto (%)](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Remainder)

---

### ✅ Ventajas del ciclo "PARA"

- **Automatiza procesos repetitivos**
- **Mejora la legibilidad y estructura del código**
- **Reduce errores humanos al copiar y pegar código manualmente**
- **Permite mantener y escalar el algoritmo fácilmente**

Cada lenguaje tiene su sintaxis particular, pero todos comparten el mismo concepto de **inicio → condición → incremento** para repetir una acción un número controlado de veces.
## ✅ Cambios y buenas prácticas destacadas (V 2)

| Mejora                          | Descripción                                                                 | Justificación                                                                 |
|---------------------------------|-----------------------------------------------------------------------------|-------------------------------------------------------------------------------|
| Limpieza de buffer de entrada   | Uso de `cin.ignore(numeric_limits<streamsize>::max(), '\n')`               | Asegura que `getline` funcione correctamente después de `cin`, evitando errores |
| Entrada con `getline`           | Se usa `getline(cin, nombre)` para permitir nombres completos               | Mejora la calidad de los datos al capturar entradas con espacios              |
| Separación de lógica            | Cálculo de promedios en línea clara y única                                | Hace el código más limpio y comprensible                                     |
| Precisión numérica              | Se usa `fixed` + `setprecision(2)` para formateo de salida                 | Mejora la presentación del resultado con formato profesional                  |
| Acumulador para promedio total  | Uso correcto de acumulador y división final                                | Permite calcular el promedio general del grupo                               |
| Estructura clara del ciclo      | Divisiones visuales (`cout`) para separar estudiantes                      | Facilita la lectura en consola durante la ejecución                           |
| Comentarios explicativos        | Comentarios detallados en variables y pasos clave      

## Problema detectado

Originalmente, el programa tenía un **problema de salto de línea en el buffer**. Este error ocurría al usar `getline()` después de `cin >>`, lo cual hacía que el nombre del segundo estudiante y subsecuentes no se capturara correctamente.

### Causa
Al usar `cin >>` para capturar datos numéricos, el carácter de salto de línea (`\n`) queda en el buffer. Al ejecutar `getline()` inmediatamente después, este lee el salto de línea pendiente como si fuera una entrada vacía.

## Solución aplicada

Se reemplazó el uso inicial de `cin.ignore();` por una limpieza efectiva del buffer justo después del último `cin` de cada iteración:

```cpp
cin.ignore(numeric_limits<streamsize>::max(), '\n');
```

Esto garantiza que el buffer quede limpio antes de la próxima lectura con `getline()` en la siguiente iteración del ciclo.

## Mejoras adicionales

- Se corrigió la lógica del ciclo `for` asegurando 34 iteraciones completas y ordenadas.
- Se mejoró el formateo de salida usando `fixed` y `setprecision(2)` para mostrar promedios con dos decimales.

## Cómo compilar

Puedes compilar el programa con cualquier compilador de C++, por ejemplo con `g++`:

```bash
g++ -o promedios act_22_promedios_estudiantes.cpp
./promedios
```

## Resultado esperado

El programa debe capturar correctamente los datos de todos los estudiantes, mostrando sus promedios individuales y el promedio general sin errores de entrada.