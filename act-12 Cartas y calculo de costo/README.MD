# ✉️ Actividad 12 – Cálculo de Costos de Envío de Cartas

Este programa calcula el **costo de envío de una carta o paquete** en función de su peso en **onzas**, usando una **tarifa fija de $0.25 USD** para la primera onza y **$0.04 USD por cada onza adicional**.

---

## 📥 Entrada

- Peso de la carta o paquete en onzas (`float`)

> ⚠️ Si el usuario introduce un peso igual o menor a 0, el programa muestra un mensaje de error y termina.

---

## 🔁 Proceso

Se utiliza una estructura condicional para calcular el costo:

- Si el peso es exactamente **1 onza**, se cobra $0.25 USD.
- Si el peso es **mayor a 1**, se suma $0.04 por cada onza adicional:
  ```
  costo = (onzas - 1) * 0.04 + 0.25
  ```

---

## 📤 Salida

- Peso total ingresado
- Costo total del envío en formato monetario con 2 decimales
- Mensaje de agradecimiento y estética tipo factura

---

## 📚 Justificación

El algoritmo **“cartas.cpp”** mejora el estilo y eficiencia respecto a versiones anteriores gracias a:

- Una **estructura condicional clara** que evita cálculos innecesarios
- Un **mensaje de validación anticipada** que evita errores en tiempo de ejecución
- Un formato de salida tipo **POS** que mejora la legibilidad

Además:

- Usa `fixed` y `setprecision(2)` para mostrar montos con exactitud monetaria
- Utiliza comentarios en el código para facilitar futuras modificaciones de tarifas

---

## 🧠 Observaciones adicionales

- El diseño modular permite **ajustar fácilmente los precios**, solo cambiando los valores en las líneas correspondientes.
- Se incluye una validación de peso **para evitar valores inválidos** como negativos o cero.
- El programa finaliza de forma ordenada si hay error, retornando `1`.

---

## ✅ Cambios y buenas prácticas destacadas

| Mejora | Descripción | Justificación |
|--------|-------------|---------------|
| Validación de entrada | `if (onzas <= 0)` | Evita cálculos con datos inválidos |
| `fixed` + `setprecision(2)` | Formato monetario | Claridad profesional en la salida |
| Fórmula optimizada | `(onzas - 1) * 0.04 + 0.25` | Menor uso de condicionales complejas |
| Estilo POS | Simula factura con separadores | Mejora estética y comprensión |
| Comentarios para edición futura | Valores de tarifa señalados | Facilita personalización por el usuario |

---
