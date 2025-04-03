# 🧾 Actividad 54 – Cálculo de Calificación Final (DSUPE)

Este programa calcula la **calificación final** de la materia *DSUPE* con base en el promedio de tres parciales, el examen final y el trabajo final, aplicando un esquema de **ponderación porcentual**.

---

## 📥 Entrada

- Calificación del **primer parcial**
- Calificación del **segundo parcial**
- Calificación del **tercer parcial**
- Calificación del **examen final**
- Calificación del **trabajo final**

> 🧾 Todos los datos se capturan desde el teclado como números decimales (`float`) para mantener la precisión.

---

## 📊 Ponderación aplicada

Cada componente tiene un porcentaje asignado sobre la calificación final:

- **55%** del promedio de los tres parciales
- **30%** del examen final
- **15%** del trabajo final

> 🎯 Esta estructura representa un **promedio ponderado**, que es ampliamente utilizado en sistemas educativos y de evaluación.

---

## 🔁 Proceso

1. Se capturan las cinco calificaciones.
2. Se calcula el **promedio de los tres parciales**.
3. Se aplica la fórmula:

```
calificación_final = (prom_parciales × 0.55) + (examen_final × 0.30) + (trabajo_final × 0.15)
```

4. Se imprime el resultado con formato claro y preciso.

---

## 📤 Salida

- Promedio de los parciales (implícito en el cálculo)
- Calificación final (mostrada con decimales)

---

## 📚 Justificación

El algoritmo **“CALIFICACION_FINAL_DSUPE”** permite simular de manera precisa una evaluación real basada en porcentajes ponderados. Este ejercicio refuerza:

- El manejo de **promedios ponderados** y fórmulas compuestas.
- La correcta conversión de **enunciados matemáticos** a instrucciones algorítmicas.
- La organización clara del modelo **Entrada – Proceso – Salida**.
- El uso de **tipos de datos reales** (`float`) para mayor exactitud en los resultados.

> 📌 Actividades como esta ayudan a desarrollar una lógica precisa y estructurada para resolver problemas del mundo real mediante programación.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| División del promedio | `(parcial1 + parcial2 + parcial3) / 3` | Mejora la organización del cálculo |
| Ponderación porcentual | 55%, 30%, 15% | Refleja criterios reales de evaluación |
| Uso de `float` | Para todas las calificaciones | Garantiza exactitud con decimales |
| Mensajes de entrada y salida | Claros y guiados | Mejora la experiencia del usuario |
