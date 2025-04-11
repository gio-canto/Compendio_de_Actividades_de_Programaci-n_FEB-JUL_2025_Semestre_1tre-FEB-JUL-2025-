# 🔺 Actividad 17 – Cálculo del Área de un Triángulo con la Fórmula de Herón

Este programa calcula el **área de un triángulo** a partir de las longitudes de sus tres lados utilizando la **fórmula de Herón**, luego de verificar que estos valores **forman un triángulo válido**.

---

## 📥 Entrada

- Lado a
- Lado b
- Lado c

> Todos los valores se capturan como tipo `float`.

---

## 📐 Verificación de validez: Desigualdad Triangular

Antes de calcular el área, se comprueba que los tres lados puedan formar un triángulo con la siguiente regla:

```
a + b > c
a + c > b
b + c > a
```

Si no se cumple esta condición, el programa emite un mensaje de error y finaliza.

---

## 🔁 Proceso

Se aplica la **fórmula de Herón**:

1. Calcular el semiperímetro:
```
s = (a + b + c) / 2
```

2. Aplicar la fórmula:
```
área = sqrt(s * (s - a) * (s - b) * (s - c))
```

> Se utiliza la función `sqrt()` del encabezado `<cmath>`.

---

## 📤 Salida

- Área del triángulo, si los lados son válidos
- Mensaje de error si los lados no forman un triángulo

Los resultados se presentan con dos decimales (`setprecision(2)`).

---

## 📚 Justificación

Este algoritmo aplica conocimientos de:

- Validación de datos con condicionales
- Cálculo geométrico intermedio (Herón)
- Funciones matemáticas (`sqrt`)
- Formato profesional con `fixed` y `setprecision`

> 🔎 La validación anticipada mejora la robustez del código, evitando errores matemáticos como raíces negativas.

---

---

## ✅ Mejores Prácticas Aplicadas

| Mejora | Descripción | Justificación |
|--------|-------------|---------------|
| Validación antes de cálculo | Verifica que se pueda formar un triángulo | Previene errores en ejecución |
| Fórmula de Herón | Cálculo eficiente del área | Precisión para cualquier tipo de triángulo |
| Uso de `sqrt()` | Función estándar en C++ | Evita implementación manual |
| `setprecision(2)` | Formato monetario o científico | Mejora presentación y claridad |
| Estructura clara | Entrada → Validación → Cálculo → Salida | Facilita comprensión y mantenimiento |

---

Este programa representa una mejora significativa en la complejidad de los algoritmos trabajados, demostrando **buenas prácticas estructurales y uso adecuado de matemáticas intermedias**ñ