# ➕ Actividad 18 – Suma y Promedio de 3 Números

Este programa solicita al usuario tres números decimales, **calcula su suma** y **su promedio aritmético**, y luego muestra los resultados con formato profesional. Esta actividad fortalece el uso de **operaciones matemáticas básicas** y el modelo Entrada – Proceso – Salida.

---

## 📥 Entrada

- Primer número (`a`)
- Segundo número (`b`)
- Tercer número (`c`)

> 🧾 Los valores ingresados pueden ser enteros o decimales y se almacenan como `double` para mantener la precisión.

---

## 🔁 Proceso

Se realizan dos operaciones fundamentales:

1. **Suma de los tres números:**
   ```
   suma = a + b + c
   ```

2. **Cálculo del promedio:**
   ```
   promedio = suma / 3
   ```

> ✅ Se utiliza una fórmula simple de promedio aritmético, adecuada para cualquier conjunto de tres valores numéricos.

---

## 📤 Salida

- La suma total de los tres números
- El promedio aritmético

Ambos resultados se presentan con dos decimales gracias al uso de:
```cpp
cout << fixed;
cout.precision(2);
```

---

## 📚 Justificación

La actividad **“sum.cpp”** sirve como base para fortalecer:

- El manejo de variables tipo `double`
- La realización de operaciones aritméticas
- El control de formato en salida (`fixed` y `precision`)
- La lógica estructural Entrada – Proceso – Salida

> 🧠 Este tipo de ejercicios son ideales para principiantes, ya que consolidan habilidades esenciales que se reutilizan constantemente en programación más avanzada.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Uso de `double` | Acepta decimales | Aumenta la precisión |
| División clara del proceso | Suma y luego promedio | Facilita la comprensión lógica |
| Formato `fixed` y `precision(2)` | Control de decimales en salida | Mejora la presentación visual |
| Encabezado y separadores | Estética limpia en consola | Simula reporte profesional de resultados |
