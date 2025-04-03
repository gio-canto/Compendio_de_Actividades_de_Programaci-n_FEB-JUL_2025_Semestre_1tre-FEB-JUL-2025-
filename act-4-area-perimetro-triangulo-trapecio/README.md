# 📐 Actividad 4 – Cálculo de Área y Perímetro (Triángulo y Trapecio)

Este programa permite calcular el **área y perímetro** de dos figuras geométricas: un **triángulo** y un **trapecio**. Está diseñado para introducir al estudiante al manejo de **fórmulas geométricas básicas** dentro de un programa en C++, trabajando con múltiples variables y entradas del usuario.

---

## 📥 Entrada

### Para el triángulo:
- Base del triángulo
- Altura del triángulo

### Para el trapecio:
- Base mayor
- Base menor
- Altura
- Dos lados no paralelos (lado1 y lado2)

> ✏️ Todos los valores se ingresan desde el teclado y se almacenan en variables tipo `float`, ya que pueden incluir decimales.

---

## 📐 Fórmulas aplicadas

### Triángulo:
- Área = (base × altura) / 2
- Perímetro = base × 3 *(asumiendo triángulo equilátero)*

### Trapecio:
- Área = ((base mayor + base menor) × altura) / 2
- Perímetro = base mayor + base menor + lado1 + lado2

> 📌 El cálculo del área y perímetro sigue los principios básicos de la geometría. En el caso del triángulo, se toma como equilátero para simplificar.

---

## 🔁 Proceso

1. Se ingresan los valores geométricos para ambas figuras.
2. Se aplican las fórmulas respectivas.
3. Se presentan los resultados con etiquetas claras y unidades.

---

## 📤 Salida

- Área y perímetro del triángulo
- Área y perímetro del trapecio

Todos los valores se muestran con unidades (`cm²` y `cm`) y con formato claro y alineado.

---

## 📚 Justificación

La actividad **“sacar.cpp”** cumple con varios objetivos pedagógicos:

- Aplicar fórmulas matemáticas en contexto de programación
- Trabajar con múltiples entradas y variables
- Reforzar el uso del modelo **Entrada – Proceso – Salida**
- Integrar razonamiento geométrico en la solución algorítmica

> 🧠 Esta actividad fortalece la lógica de resolución de problemas con base en propiedades matemáticas, y muestra cómo un algoritmo puede adaptarse a distintos contextos de cálculo.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Entrada separada por figura | Datos separados para triángulo y trapecio | Mejora la organización del código |
| Variables independientes | Variables distintas para cada figura | Evita confusión y errores de cálculo |
| Asunción de triángulo equilátero | `perímetro = base × 3` | Simplifica el cálculo para estudiantes |
| Etiquetas con unidades | `cm`, `cm²` en resultados | Refuerza claridad y contexto geométrico |
