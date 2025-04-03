# 💱 Actividad 3 – Conversión de Divisas (MXN a USD/EUR)

Este programa permite al usuario convertir una cantidad en **pesos mexicanos (MXN)** a **dólares estadounidenses (USD)** y **euros (EUR)**, utilizando tasas de cambio ingresadas manualmente. Además, la presentación del resultado simula un **ticket de servicio**, siguiendo el llamado **estilo POS**.

---

## 📥 Entrada

- Cantidad en pesos mexicanos (MXN)
- Tasa de cambio de USD a MXN
- Tasa de cambio de EUR a MXN

> 🧾 Las tasas y la cantidad son proporcionadas por el usuario, permitiendo simular diferentes escenarios reales de conversión.

---

## 🔁 Proceso

1. Se solicita al usuario la cantidad en MXN y las dos tasas de cambio.
2. Se calculan los equivalentes:
   - `cantidad_usd = cantidad_mxn / tasa_usd_mx`
   - `cantidad_eur = cantidad_mxn / tasa_eur_mx`
3. Se imprime un desglose con los resultados.

---

## 📤 Salida

- Cantidad ingresada en MXN
- Tasa de cambio ingresada
- Equivalente en USD
- Equivalente en EUR

La salida se presenta con encabezados, líneas decorativas y columnas, simulando el formato de impresión de servicios profesionales.

---

## 🧾 ¿Qué es el estilo POS?

**POS** significa **Point of Sale** (Punto de Venta). Es el estilo de impresión que comúnmente encontramos en recibos de tiendas, supermercados, farmacias, gasolineras o casas de cambio. Su objetivo es ser **claro, compacto y fácil de leer**, con:

- Líneas decorativas (`=======`)
- Alineación de columnas (`setw()` en C++)
- Texto breve y centrado
- Formato con dos decimales (`setprecision(2)`)

> 🧠 Este estilo nace de los sistemas POS físicos utilizados en negocios desde los años 70 y 80, cuando las impresoras de matriz de punto generaban tickets en papel delgado.

**¿Por qué usamos este estilo?**

- Porque entrena al estudiante a **presentar datos de forma profesional**
- Porque se adapta al tipo de información **estructurada y monetaria**
- Porque mejora la **legibilidad** de programas que trabajan con montos, facturas o conversiones

## Referencias

Bepoz. (s.f.). *History of the POS System*. Recuperado el 3 de abril de 2025, de https://bepoz.com/blog/history-of-the-pos-system/

TechRadar. (2023). *An evolution of POS (Point of Sale) Systems*. Recuperado el 3 de abril de 2025, de https://www.techradar.com/news/the-evolution-of-pos-point-of-sale-systems

Accumula. (2022). *Past, Present, Future: The Evolution of POS Integrations*. Recuperado el 3 de abril de 2025, de https://accumula.com/blog/past-present-future-the-evolution-of-pos-integrations
---

## 📚 Justificación

El algoritmo **“tasa_de_cambio.cpp”** refuerza los siguientes aprendizajes:

- Uso de operaciones aritméticas con división
- Captura de datos flotantes (`float`)
- Aplicación práctica del modelo **Entrada – Proceso – Salida**
- Formato de salida estilo **POS**

> 📌 Este ejercicio es ideal para introducir nociones básicas de finanzas, conversión monetaria y formato comercial de impresión.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| División entre monedas | MXN dividido por tasa | Simula cálculo financiero real |
| Formato POS | Líneas, columnas, agradecimiento | Mejora estética, claridad y simula un ticket |
| Precisión decimal | `setprecision(2)` | Representación clara de divisas |
| Entrada de usuario | Tasa y cantidad variables | Aumenta realismo y flexibilidad del programa |
