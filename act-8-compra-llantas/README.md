# 🛞 Actividad 8 – Compra de Llantas con Descuento

Este programa simula el proceso de venta en la llantera **"El Huele"**, aplicando descuentos al total de la compra según la cantidad de llantas adquiridas por el cliente. Su objetivo es ilustrar el uso de estructuras condicionales, operaciones aritméticas y salidas formateadas en un contexto comercial.

---

## 📥 Entrada

- Nombre del cliente
- Cantidad de llantas a comprar
- Precio unitario por llanta

> 🧾 Estos datos se solicitan al usuario a través del teclado, permitiendo personalizar el recibo de compra.

---

## 🔁 Proceso

1. Se multiplica la cantidad de llantas por el costo unitario para obtener el **subtotal**.
2. Según la cantidad de llantas, se aplica un **descuento escalonado**:
   - **20%** si se compran 2 llantas o menos
   - **30%** si se compran exactamente 3 llantas
   - **40%** si se compran más de 3 llantas
3. Se calcula el **total a pagar** restando el descuento al subtotal.

> 🧠 Este proceso refuerza el uso de estructuras `if`, `else if` y `else` para tomar decisiones basadas en múltiples condiciones.

---

## 💳 Estética tipo punto de venta (POS)

El programa destaca por su presentación visual que imita un ticket de compra profesional. Incluye:

- Líneas decorativas (`==========================================`)
- Alineación tabular de la información
- Uso de mayúsculas y etiquetas formales
- Mensaje de agradecimiento personalizado

> 🎯 Esto simula la experiencia de un sistema de punto de venta (POS), familiarizando al estudiante con la lógica y estética del software comercial real.

---

## 📚 Justificación (Actividad 8.9)

En esta actividad se diseñó un algoritmo que calcula automáticamente el total a pagar por un cliente aplicando descuentos variables, utilizando estructuras condicionales anidadas. La lógica condicional permite al programa decidir correctamente cuál descuento aplicar, dependiendo del número de llantas compradas.

La actividad presentó un mayor grado de complejidad en comparación con ejercicios previos, al integrar cálculos matemáticos con múltiples decisiones condicionales. Fue desarrollada en equipo por **Adame Victorino Wuendy Guadalupe, Alday Carteño Camila Marian, García Jiménez Isis Noemí** y **Gio Antonio Canto Gómez**.

> 🤝 A pesar de dificultades técnicas con los equipos, el grupo logró finalizar exitosamente el ejercicio, fortaleciendo las habilidades de programación, resolución de problemas, y trabajo colaborativo.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Inclusión de estética POS | Simulación de un ticket de compra | Hace el resultado más realista y profesional |
| Descuento escalonado | Uso de condicionales múltiples (`if-else`) | Refuerza el razonamiento lógico en decisiones |
| Formato decimal | Uso de `setprecision(2)` para precios | Alineado con estándares financieros reales |
| Agradecimiento personalizado | Mensaje final de cortesía | Mejora la experiencia del usuario en consola |
