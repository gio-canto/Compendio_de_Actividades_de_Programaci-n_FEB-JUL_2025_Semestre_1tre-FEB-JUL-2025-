# ➖ Actividad 13 – Cálculo de la Diferencia Absoluta

Este programa solicita dos números enteros al usuario y calcula su **diferencia absoluta**, es decir, la distancia entre ellos en valor positivo, sin importar el orden de entrada. Utiliza la función matemática `abs()` para optimizar el cálculo y reducir la complejidad del código.

---

## 📥 Entrada

- Primer número entero (`no1`)
- Segundo número entero (`no2`)

> 🧾 Ambos valores son capturados desde el teclado con tipo de dato `int`.

---

## 🔁 Proceso

1. Se ingresan los dos números enteros.
2. Se calcula la **diferencia absoluta** utilizando la función:
   ```
   diferencia = abs(no1 - no2)
   ```
3. Se imprime el resultado.

> ✅ La función `abs()` garantiza que el resultado siempre sea positivo, evitando la necesidad de estructuras condicionales para determinar cuál número es mayor.

---

## 📤 Salida

- Diferencia absoluta entre los dos números, mostrada como un número entero positivo.

---

## 📚 Justificación

El algoritmo **“Numeros_2”** demuestra un avance en la comprensión de:

- Uso de funciones predefinidas en C++
- Reducción de código mediante simplificación lógica
- Aplicación de la **diferencia absoluta**, útil en muchas áreas matemáticas y de programación

> 💡 El uso de `abs()` optimiza el programa, haciéndolo más limpio y eficiente. Si no se utilizara, sería necesario implementar una estructura `if` para decidir qué número restar de cuál.

---

### 📘 Alternativa sin `abs()`

```cpp
if (no1 > no2) {
    diferencia = no1 - no2;
} else {
    diferencia = no2 - no1;
}
```

Esta estructura es válida, pero requiere más instrucciones. El uso de `abs()` permite resolverlo con una sola línea.

---

## 🧠 Reflexión

Durante el semestre, este tipo de mejoras reflejan la evolución del estudiante en:

- Identificar funciones útiles ya disponibles en bibliotecas estándar
- Traducir experiencias previas (como en Excel) al entorno de programación
- Tomar decisiones conscientes sobre eficiencia y legibilidad del código

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Uso de `abs()` | `abs(no1 - no2)` | Garantiza resultado positivo sin condicional |
| Eliminación de `if` innecesario | Simplificación lógica | Mejora eficiencia y claridad |
| Declaración de variables con sentido | `no1`, `no2`, `diferencia` | Mejora semántica del código |
| Inclusión de comentarios explicativos | En cada bloque del código | Facilita el aprendizaje del lector |
