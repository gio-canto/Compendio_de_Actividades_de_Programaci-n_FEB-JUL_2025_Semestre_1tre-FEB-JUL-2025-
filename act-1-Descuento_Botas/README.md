# 👢 Actividad 1 – Cálculo de Descuento en la Compra de Botas

Este es el primer programa del curso. Su propósito es **introducir al estudiante** en el uso de operaciones aritméticas simples, variables tipo `float` y presentación de resultados con formato.

El programa calcula el precio final de una bota con **34% de descuento** aplicado automáticamente sobre un precio fijo.

---

## 📥 Entrada

- El precio de la bota (predefinido como `$2000.00`)
- La cantidad (1 unidad, ya establecida)

> ✅ En esta etapa del curso, los valores están **asignados directamente** para simplificar el aprendizaje y centrarse en la lógica de los cálculos.

---

## 🔁 Proceso

1. Se calcula el **subtotal** multiplicando el precio por la cantidad.
2. Se calcula el **descuento**, aplicando el 34% al precio.
3. Se obtiene el **total a pagar**, restando el descuento al subtotal.

---

## 📤 Salida

- Subtotal
- Descuento aplicado
- Total a pagar

La salida se presenta con dos decimales (`setprecision(2)`), simulando un pequeño recibo de compra.

---

## 📚 Justificación

La actividad **“Descuento_Botas”** es una práctica básica que permite:

- Entender la lógica del modelo **Entrada – Proceso – Salida**.
- Aprender a declarar e inicializar variables de tipo decimal (`float`).
- Utilizar operaciones matemáticas sencillas (multiplicación y porcentaje).
- Formatear la salida con `setprecision(2)` para representar montos monetarios.

> 💡 Aunque la entrada está fijada, esta estructura sirve como base para programas más complejos, como los que reciben datos del usuario o procesan múltiples productos.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Variables inicializadas | Precio y cantidad definidos en el código | Facilita la comprensión inicial del algoritmo |
| Porcentaje aplicado directamente | Descuento calculado con `(precio × 34) / 100` | Introduce el concepto de porcentaje |
| Uso de `setprecision(2)` | Control de salida decimal | Refuerza la presentación clara de precios |
| Separadores visuales | Líneas `--------------------` | Mejora la estética del resultado en consola |
