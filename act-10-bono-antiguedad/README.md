# 🎁 Actividad 10 – Cálculo de Bono por Antigüedad

Este programa, simulado desde la **Fábrica de Dulces**, calcula el **bono por antigüedad** de un empleado en función de sus años trabajados, y presenta un desglose profesional del sueldo final en formato tipo recibo o ticket de nómina.

---

## 📥 Entrada

- Nombre del empleado
- Sueldo base
- Antigüedad (en años)

> 🧾 Estos datos son ingresados por el usuario a través del teclado, permitiendo personalizar el recibo de pago.

---

## 📊 Escala de bonos aplicada

El bono se asigna con base en la cantidad de años trabajados, utilizando una escala definida de la siguiente forma:

- Menos de 5 años → **$300.00**
- De 5 a menos de 10 años → **$1,000.00**
- 10 años o más → **$2,000.00**

> 💡 Esta lógica aplica condicionales escalonadas (`if`, `else if`, `else`) para tomar decisiones basadas en rangos.

---

## 🔁 Proceso

1. Se captura el sueldo base y la antigüedad del empleado.
2. Se determina el bono correspondiente según los años trabajados.
3. El bono se suma al sueldo base para calcular el **sueldo total**.
4. Se imprime un resumen de pago con estilo formal y alineación adecuada.

> 🧠 Este proceso permite consolidar conocimientos de entrada/salida, estructuras condicionales, operaciones aritméticas y formato profesional de impresión.

---

## 🧾 Estética de salida: uso de `setw(8)`

Para alinear correctamente los valores monetarios en la salida del programa, se utiliza la función `setw(8)` de la biblioteca `<iomanip>`. Esta función reserva **8 espacios de ancho** para imprimir los valores, asegurando que las cifras estén alineadas verticalmente a la derecha como en los recibos profesionales.

> ✅ El uso de `setw()` es fundamental para una presentación clara y uniforme, especialmente en contextos donde se requiere profesionalismo visual, como nóminas, facturas y sistemas administrativos.

---

## 📤 Salida

- Nombre del empleado
- Años de antigüedad
- Sueldo base
- Bono asignado
- Sueldo total

Todo lo anterior presentado en un formato amigable, profesional y fácil de interpretar, simulando un recibo de nómina impreso.

---

## 📚 Justificación

La actividad **“Cálculo de Bono por Antigüedad”** tiene como propósito aplicar estructuras condicionales escalonadas en un caso práctico. A través de este algoritmo, el alumno refuerza:

- El uso del tipo de datos `float` para representar sueldos y operaciones decimales.
- La toma de decisiones basadas en rangos numéricos.
- La creación de una salida estética con formato numérico preciso (`setprecision(2)`).
- La simulación de un entorno laboral real mediante la presentación de datos en estilo recibo.

> 📌 Este tipo de ejercicios no solo entrena la lógica algorítmica, sino que también promueve habilidades útiles en programación orientada a negocios, recursos humanos y sistemas administrativos.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Condicionales escalonadas | Uso de `if`, `else if`, `else` | Permite clasificar la antigüedad en rangos |
| Formato profesional de salida | Impresión tipo nómina con líneas y alineación | Simula un entorno real de nómina |
| Cálculo del sueldo total | Suma del bono al sueldo base | Aplica operaciones aritméticas simples |
| Uso de `setw(8)` | Alineación estética de montos | Mejora la presentación visual y legibilidad |
| Redacción clara y modular | Separación por bloques | Facilita la lectura y comprensión del flujo del programa |
