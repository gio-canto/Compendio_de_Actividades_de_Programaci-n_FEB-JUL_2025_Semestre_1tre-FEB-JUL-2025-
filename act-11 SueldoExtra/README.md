# 💼 Actividad 11 – Cálculo de Sueldo con Comisiones

Este programa calcula el **sueldo mensual total de un empleado**, sumando su **sueldo base** y una **comisión del 10%** sobre tres ventas realizadas durante el mes. Este ejercicio integra habilidades de entrada de datos, cálculo porcentual, acumulación de comisiones y presentación profesional de resultados.

---

## 📥 Entrada

- Sueldo base del empleado
- Monto de la primera venta
- Monto de la segunda venta
- Monto de la tercera venta

> 💡 Todos los datos son capturados desde el teclado como valores `float` para mantener precisión monetaria.

---

## 🔁 Proceso

1. Se define una **tasa de comisión fija** del 10% (`0.10`).
2. Se calcula el total de las ventas del mes.
3. Se obtiene el monto de la comisión:
   ```
   total_comisiones = (venta1 + venta2 + venta3) * 0.10
   ```
4. Se suma al sueldo base para calcular el **sueldo total**:
   ```
   sueldo_final = sueldo + total_comisiones
   ```

---

## 📤 Salida

- Sueldo base
- Monto de la comisión total
- Sueldo total a recibir

Los resultados se presentan en consola con una estética formal y clara, alineados con separadores (`================================`) y mensajes descriptivos.

---

## 📚 Justificación

El algoritmo **“SueldoExtra”** contribuye al aprendizaje de:

- Operaciones con porcentajes
- Acumulación de valores
- Uso de variables `float` para manejar cifras monetarias
- Modelo **Entrada – Proceso – Salida**
- Formato claro de resultados y presentación de informes

> 🧠 A lo largo del curso se han ido incorporando mejores prácticas como el uso de **constantes**, **validaciones** y **estructuración visual del código**, lo cual se refleja en esta actividad.

---

## 🧩 Progresión del curso

En comparación con actividades anteriores, este programa:

- Mejora la organización del código
- Refuerza el uso de constantes lógicas (como la tasa de comisión)
- Simula una situación laboral real (nómina + bono de ventas)
- Muestra resultados con **formato profesional** y precisión (`setprecision(2)`)

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Tasa de comisión del 10% | Aplicada como constante `0.10` | Claridad y fácil mantenimiento |
| Cálculo de tres ventas | Suma y multiplicación por comisión | Refuerza acumulación y porcentajes |
| Resultados alineados con formato | Separadores visuales y etiquetas | Presentación clara y profesional |
| Precisión decimal | `fixed` y `setprecision(2)` | Asegura salida monetaria precisa |
