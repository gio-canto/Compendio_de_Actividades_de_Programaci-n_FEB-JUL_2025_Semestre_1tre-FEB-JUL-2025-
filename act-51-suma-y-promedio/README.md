# ➕ Actividad 51 – Suma y Promedio de Tres Números

Este programa solicita tres números enteros al usuario, calcula su **suma total** y el **promedio aritmético**, y muestra ambos resultados en pantalla.

Es una actividad fundamental para practicar operaciones básicas en programación, y para comprender el uso combinado de variables de tipo `int` (enteros) y `float` (decimales).

---

## 📥 Entrada

- Tres números enteros: `a`, `b`, `c`

> 🧾 Los datos se capturan mediante `cin`, y permiten evaluar operaciones aritméticas simples.

---

## 🔁 Proceso

1. Se suman los tres números: `suma = a + b + c`
2. Se calcula el promedio: `prom = suma / 3.0`

> 🧠 El valor `3.0` se usa como **divisor decimal** para forzar el resultado como número de tipo `float`. Si se usara `3` (entero), el resultado sería también un entero, lo que limitaría la precisión del promedio.

---

## 📤 Salida

- La **suma** total de los tres números ingresados.
- El **promedio aritmético**, mostrado como número decimal (`float`), lo que permite visualizar decimales aunque el resultado no sea exacto.

---

## 📚 Justificación

La actividad **“Suma y Promedio de Tres Números”** es un ejercicio introductorio clave para dominar:

- El uso de variables de tipo `int` y `float`.
- Las operaciones matemáticas básicas: suma y división.
- La conversión implícita de tipos al dividir un entero entre un decimal.
- La lógica de entrada-proceso-salida.

> 💡 Este tipo de ejercicios es especialmente útil en contextos educativos para reforzar la lógica básica de programación y el control de tipos de datos numéricos.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| División entre `3.0` | Se usa decimal como divisor | Asegura que el promedio se exprese como `float` |
| Separación de suma y promedio | Cálculos por separado | Mejora la claridad del código y su legibilidad |
| Mensajes explicativos | Salida clara al usuario | Facilita la comprensión del resultado en consola |
| Uso de `system("pause")` | Pausa al final | Permite visualizar los resultados antes de cerrar la ventana |
