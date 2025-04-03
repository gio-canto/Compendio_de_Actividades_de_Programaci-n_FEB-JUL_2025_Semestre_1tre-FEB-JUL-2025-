# 💸 Actividad 53 – Cálculo de Descuento en una Compra

Este programa calcula un **8% de descuento** aplicado sobre el total de una compra e imprime un recibo con formato profesional que incluye el subtotal, el descuento y el total a pagar.

---

## 📥 Entrada

- Monto total de la compra (`float`)

> 🧾 El valor se introduce desde teclado y puede incluir centavos, por lo que se usa el tipo de dato `float`.

---

## 🧮 Proceso

1. Se recibe el monto total de la compra.
2. Se calcula el **descuento del 8%**: `descuento = total_compra * 0.08`
3. Se calcula el **total a pagar** restando el descuento: `total_pagar = total_compra - descuento`

> ✅ Esta operación refuerza el manejo de porcentajes y operaciones aritméticas simples.

---

## 🧾 Salida

- Subtotal original de la compra
- Monto del descuento
- Total a pagar

Todo esto se presenta en un formato profesional tipo recibo, con columnas alineadas mediante `setw()` para una estética clara y legible.

---

## ✨ Estética de salida: uso de `setw()` y `setprecision(2)`

- `setw(n)` alinea los valores a la derecha o izquierda para formar columnas.
- `setprecision(2)` asegura que los valores monetarios se muestren con dos decimales, como en facturas reales.

> 💡 Esta combinación brinda una **presentación profesional y amigable**, ideal para contextos comerciales y didácticos.

---

## 📚 Justificación

El algoritmo **“Descuento_Compra”** permite aplicar directamente un porcentaje de descuento a una cantidad monetaria, lo cual es muy común en aplicaciones de facturación o cajas registradoras.

Este ejercicio fortalece habilidades esenciales:

- Cálculo de porcentajes
- Precisión en valores decimales
- Formato de salida con estilo comercial
- Aplicación del modelo Entrada – Proceso – Salida

> 📈 A lo largo del semestre, se ha progresado en el uso práctico de operaciones matemáticas aplicadas a contextos reales, como este cálculo de descuentos.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Aplicación del 8% | Se calcula con `0.08` | Representa el porcentaje de descuento |
| Restar al total | `total_compra - descuento` | Calcula el total neto a pagar |
| Estética con `setw()` | Alineación profesional en columnas | Mejora la presentación visual del recibo |
| Precisión decimal | `setprecision(2)` | Presenta valores como en un entorno comercial real |
