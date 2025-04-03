# 📝 Actividad 5 – Cálculo de Promedio Final (Formato de Oficio)

Este programa tiene como objetivo calcular el **promedio final de un alumno** a partir de tres calificaciones parciales. Lo interesante es que presenta el resultado en un **formato tipo oficio escolar**, simulando un documento oficial emitido por el Departamento de Servicios Escolares.

---

## 📥 Entrada

- Nombre del maestro
- Nombre de la asignatura
- Nombre del alumno
- Promedio del primer parcial
- Promedio del segundo parcial
- Promedio del tercer parcial

> ✏️ Todos los datos se ingresan desde teclado y se almacenan en variables de tipo `char[]` y `float`.

---

## 🔁 Proceso

1. Se capturan los nombres y las calificaciones.
2. Se suman los tres parciales.
3. Se calcula el **promedio final** como:
   ```
   promedio_final = (p_1 + p_2 + p_3) / 3
   ```
4. Se evalúa si el alumno acreditó la materia:
   - Si el promedio es menor a 6.0 → NO ACREDITÓ
   - Si es mayor o igual a 6.0 → ACREDITÓ

---

## 📤 Salida

La salida simula un **oficio escolar formal**, con:

- Encabezado institucional
- Redacción profesional
- Evaluación del promedio
- Mensaje de acreditación
- Firma del departamento

---

## 🧾 ¿Qué es el formato tipo oficio?

Un **oficio** es un documento formal que comunica información oficial dentro de instituciones públicas o privadas. En este caso, el programa:

- Usa encabezados institucionales (como "Departamento de Escolares")
- Redacta en tercera persona
- Usa frases administrativas ("Favor de confirmar dicha información...")
- Finaliza con "Atentamente" y una firma institucional

> 🎓 Este enfoque ayuda a los estudiantes a **contextualizar la programación en entornos reales**, como reportes escolares o administrativos.

---

## 📚 Justificación

La actividad **“prom.cpp”** fortalece múltiples competencias:

- Cálculo de promedios
- Evaluación condicional (`if`)
- Entrada y salida de cadenas y números
- Simulación de documentos administrativos
- Aplicación del modelo **Entrada – Proceso – Salida**

> 💡 Es una de las primeras oportunidades en el curso para **combinar lógica matemática con narrativa formal y presentación textual profesional**.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Estructura tipo oficio | Texto largo y formal | Simula un entorno real de uso escolar |
| Uso de `if` para acreditación | Evaluación del promedio | Introduce control condicional simple |
| Inclusión de nombres | Maestro, materia, alumno | Personaliza el mensaje |
| Promedio con `float` | Precisión decimal | Mejora la exactitud del resultado |
