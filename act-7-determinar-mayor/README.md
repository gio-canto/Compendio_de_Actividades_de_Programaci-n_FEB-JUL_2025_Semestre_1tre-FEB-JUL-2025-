# 🧮 Actividad 7 – Determinar el Número Mayor

Este programa solicita al usuario ingresar dos números enteros y determina cuál de los dos es el mayor. En caso de que ambos números sean iguales, se muestra un mensaje especial indicando esta condición.

---

## 📥 Entrada

- Primer número entero (`num1`)
- Segundo número entero (`num2`)

> ✏️ Ambos valores son capturados a través del teclado usando `cin`.

---

## 🔁 Proceso

- Se comparan los dos valores utilizando estructuras condicionales (`if`, `else if`, `else`).
- Si `num1` es mayor que `num2`, se asigna `num1` como el número mayor.
- Si `num2` es mayor que `num1`, se asigna `num2` como el número mayor.
- Si ambos valores son iguales, se imprime un mensaje especial y se finaliza el programa anticipadamente con `return 0`.

> 🧠 Esta lógica permite evaluar todos los escenarios posibles usando una sola estructura de decisión, reforzando la comprensión del control de flujo.

---

## 📤 Salida

- Un mensaje en consola que indica cuál es el número mayor, o si ambos son iguales.

---

## 📚 Justificación (Actividad 7.5)

El algoritmo **“Determinar_Mayor”** emplea estructuras condicionales `if`, `else if` y `else` para realizar una comparación entre dos números ingresados por el usuario. Este enfoque permite evaluar de manera eficiente las tres posibilidades principales: si el primer número es mayor, si el segundo lo es, o si ambos son iguales.

La implementación es clara y concisa, lo que facilita su comprensión y mantenimiento. La decisión de asignar el número mayor a una variable permite separar la lógica de decisión del proceso de salida, lo cual es una buena práctica de programación.

> 🔄 **Mejora progresiva:**  
En una actividad posterior, este algoritmo podrá ampliarse para considerar otras comparaciones o estructuras anidadas, con el objetivo de reforzar el uso de estructuras de control y consolidar la lógica algorítmica del estudiante.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Redacción mejorada | Se mejoró la claridad y organización del texto | Facilita la comprensión del lector o evaluador |
| Justificación separada | Se agregó una sección formal de justificación (7.5) | Alineación con prácticas académicas estándar |
| Markdown estructurado | Uso de íconos, secciones y tablas | Mejora la presentación visual y navegación |
| Comentarios en el código | Se añadieron encabezados y comentarios descriptivos | Facilita el mantenimiento y comprensión del código |