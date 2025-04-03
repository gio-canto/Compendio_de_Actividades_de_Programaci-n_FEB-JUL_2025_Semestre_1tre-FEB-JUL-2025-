# 👚 Actividad 2 – Cálculo de Descuento en Compra de Blusas

Este programa simula el proceso de compra en una tienda departamental, calculando el **subtotal**, el **descuento aplicado** (en porcentaje) y el **total a pagar** por varias blusas. Es un ejercicio introductorio ideal para **reforzar el uso de operaciones aritméticas básicas**, manejo de porcentajes y presentación clara de resultados.

---

## 📥 Entrada

- Precio unitario de la blusa
- Cantidad de blusas a comprar
- Porcentaje de descuento a aplicar

> 🧾 Estos datos los proporciona el usuario desde el teclado. Se usan variables de tipo `float` para precios y porcentajes, y `int` para cantidad.

---

## 🔁 Proceso

1. Se calcula el **subtotal** multiplicando el precio por la cantidad.
2. Se obtiene el **descuento en pesos** con la fórmula:
   ```
   cantidad_descuento = (subtotal / 100) * porcentaje
   ```
3. Se calcula el **total a pagar**:
   ```
   total = subtotal - cantidad_descuento
   ```

> 💡 Esta actividad ayuda a entender cómo transformar un porcentaje en una cantidad específica.

---

## 📤 Salida

- Cantidad de blusas compradas
- Precio unitario
- Subtotal
- Descuento aplicado en pesos
- Total a pagar

La salida está organizada con líneas decorativas y mensajes claros para simular un **ticket de compra profesional**.

---

## 📚 Justificación

El algoritmo **“Descuento_Ropa”** permite practicar:

- Captura de datos desde el usuario
- Cálculos con porcentajes variables
- Operaciones aritméticas combinadas
- Uso del modelo **Entrada – Proceso – Salida**
- Estética de salida usando separadores y formatos monetarios (`setprecision(2)`)

> ✅ Esta actividad es útil para desarrollar lógica comercial básica y preparar al estudiante para problemas más complejos.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Entrada de datos del usuario | Precio, cantidad y porcentaje ingresados | Aumenta la interactividad del programa |
| División clara del proceso | Subtotal, descuento y total | Favorece la comprensión paso a paso |
| Uso de `float` y `int` | Datos reales con precisión y cantidad exacta | Representa mejor los valores comerciales |
| Formato tipo ticket | Salida decorada con líneas y mensajes | Mejora la presentación visual y simula un caso real |
