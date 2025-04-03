# 🔢 Actividad 9 – Comparación de Números Reales

Este programa solicita al usuario **dos números reales** (es decir, números con decimales) y determina cuál de ellos es el mayor. Si ambos valores son iguales, se informa mediante un mensaje personalizado.

A diferencia de la **Actividad 7**, que trabajaba únicamente con números enteros (`int`), esta versión permite comparar valores con punto decimal, como `3.14`, `-7.5`, `0.0`, etc.

---

## 📥 Entrada

- Primer número real (`float`)
- Segundo número real (`float`)

> ✏️ La entrada se realiza a través de `cin`, permitiendo valores con decimales para una mayor precisión en la comparación.

---

## 🔁 Proceso

- Se comparan los dos valores utilizando estructuras condicionales (`if`, `else if`, `else`).
- Si el primer número es mayor, se muestra como resultado.
- Si el segundo número es mayor, se muestra como resultado.
- Si ambos son iguales, se notifica con un mensaje específico.

> 🧠 Esta estructura condicional garantiza que todos los escenarios posibles (mayor, menor o igual) queden cubiertos de manera lógica y clara.

---

## 📤 Salida

- Un mensaje indicando cuál número es el mayor.
- O bien, un mensaje informando que ambos números son iguales.

---

## 📚 Justificación (Actividad 9.6)

La actividad **“Comparación de Dos Números para Determinar el Mayor”** tiene como finalidad que el estudiante desarrolle un algoritmo funcional que reciba dos valores numéricos reales y evalúe cuál es el mayor. Esta actividad es clave para:

- Fortalecer el uso de **estructuras condicionales** en programación.
- Comprender la **manipulación de variables** tipo `float`.
- Aplicar la **lógica de decisiones** a través de comparaciones.

El algoritmo implementado sigue una lógica secuencial clara: primero solicita los dos valores, luego realiza la comparación utilizando operadores relacionales (`>`, `<`, `==`), y finalmente muestra el resultado correspondiente.

> 💡 Esta práctica resulta fundamental en múltiples contextos del desarrollo de software, desde validaciones básicas hasta procesos de decisión en sistemas más complejos.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Uso de `float` | Se cambió de `int` a `float` | Permite mayor flexibilidad en la entrada de datos |
| Inclusión de igualdad | Se agregó verificación de igualdad explícita | Mejora el control lógico del programa |
| Separación clara de bloques | Entrada, comparación y salida bien diferenciadas | Mejora la organización y lectura del código |
| Sistema de pausa | Uso de `system("pause")` | Facilita la visualización del resultado en consola |
