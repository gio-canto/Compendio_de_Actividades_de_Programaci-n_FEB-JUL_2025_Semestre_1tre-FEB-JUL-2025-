# Actividad 6 – Punto de Venta "Frutería El Gusano"

Este programa simula un **punto de venta** para la frutería **"El Gusano"**, gestionando descuentos automáticos según el SKU del producto y la cantidad comprada. En caso de no coincidir con un producto registrado, el sistema permite el **modo manual** para registrar nombre y costo personalizado.

## 🛒 Productos disponibles

- **Manzana glass**  
  - SKU: `353`  
  - Precio por kilo: `$65.00`  
  - Descuentos:
    - **25%** si se compran **más de 3 kg**
    - **5%** si se compran **hasta 3 kg**

## 📥 Entrada de datos

- SKU del producto
- Cantidad en kilogramos
- (en modo manual) Nombre del producto y costo

## 📤 Salida

El sistema imprime un ticket con:

- Nombre del producto
- Precio unitario
- Cantidad comprada
- Subtotal
- Descuento aplicado
- Total a pagar
