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

## 🧠 Justificación técnica del diseño

### 🔧 Entrada de nombres con `cin.ignore()` y `getline()`

Para capturar nombres de productos personalizados que pueden contener espacios, el programa utiliza:

```cpp
cin.ignore();
cin.getline(nom_p, 99);
```

#### ¿Por qué se usa `cin.ignore()`?
Cuando el usuario ingresa un valor con `cin >>`, el búfer queda con un carácter `\n` pendiente. Si se utiliza `getline()` inmediatamente después, este leerá ese salto de línea como si fuera la entrada del usuario, y almacenará una cadena vacía.

Usar `cin.ignore();` **elimina ese carácter pendiente del búfer**, asegurando que `getline()` funcione correctamente.

#### ¿Por qué se usa `getline()`?
A diferencia de `cin >>`, que solo captura texto hasta el primer espacio, `getline()` permite ingresar **nombres completos**, como:

- `"Mango ataulfo de exportación"`
- `"Uva roja sin semilla"`
- `"Plátano dominico maduro"`

Esto hace que el programa sea más realista y funcional para productos con nombres compuestos.

---

## 🔁 Lógica del algoritmo y estructuras condicionales

Este algoritmo hace uso del **comando `SI` (if)** de forma anidada, evaluando múltiples condiciones para decidir el flujo del programa.

### 🧱 Componentes del algoritmo:

- **Reconocimiento por SKU**: si el usuario ingresa `353`, se activa automáticamente el cálculo para "Manzana glass".
- **Cálculo de descuentos**:
  - Si la cantidad de compra es mayor a 3 kg, aplica 25% de descuento.
  - Si la cantidad es menor o igual a 3 kg pero mayor que 0, aplica 5%.
- **Modo manual**: si el SKU no es reconocido, el sistema solicita el nombre y el costo del producto para emitir un ticket personalizado.

---

## 💡 Valor educativo del programa

Este desarrollo representa una evolución significativa respecto a versiones anteriores del mismo ejercicio. Aporta los siguientes aprendizajes:

- Uso de **estructuras condicionales anidadas**.
- Interacción con identificadores únicos como el **SKU**.
- **Validación y captura de cadenas de texto** completas.
- Separación clara entre productos automatizados y personalizados.
- Simulación realista de una interfaz de venta minorista.

# 🎯 Justificación del uso de `cin.ignore()` y `getline()`

### 🧩 `cin.ignore()`

`cin.ignore()` se emplea para limpiar el búfer de entrada en situaciones donde se utiliza una mezcla de `cin >>` y `getline()`.

En este programa:
- El usuario primero ingresa el SKU con `cin >> SKU;`.
- Al presionar Enter, queda un **carácter de salto de línea (`\n`) en el búfer**.
- Si no se elimina ese carácter, el siguiente `getline()` lo leerá como una entrada vacía.

**Por lo tanto, `cin.ignore();` garantiza que el `getline()` posterior funcione correctamente.**

### 🧩 `getline()`

`getline()` se utiliza para capturar **cadenas de texto completas**, incluyendo espacios. Esto es esencial cuando se permite que el usuario escriba nombres de productos como:

- “Plátano Tabasco”
- “Uva sin semilla”
- “Mango ataulfo de exportación”

Usar `cin >>` en lugar de `getline()` **solo capturaría la primera palabra**, lo que limitaría la usabilidad del sistema.

**Por ello, se opta por `getline()` para permitir nombres de productos más descriptivos y reales.**

---

## 📌 Fragmento de código aplicado

```cpp
cout << "Indique el nombre del producto: " << endl;
cin.ignore();              // Limpieza del búfer para entrada segura
cin.getline(nom_p, 99);    // Captura del nombre completo del producto

## 📘 Lección de Programación: Entrada de Datos y Condiciones

Este proyecto no solo funciona como una simulación de punto de venta, sino también como una **lección práctica para aprender C++**. A continuación, destacamos los principales conceptos que se pueden estudiar a partir de este código:

### 1. Uso de condicionales `if`, `else if`, y `else`

Permite tomar decisiones en el flujo del programa:
```cpp
if (SKU == 353) {
    // lógica para producto registrado
} else {
    // lógica para modo manual
}
```

### 2. Condicionales anidadas

Dentro del bloque de verificación de SKU, se analiza la cantidad comprada:
```cpp
if (kilos > 3) {
    // Aplica 25% de descuento
} else if (kilos > 0) {
    // Aplica 5% de descuento
}
```

Esto permite tomar decisiones más precisas.

### 3. Entrada de cadenas con espacios

Usamos `cin.ignore()` y `getline()` para poder capturar nombres compuestos:
```cpp
cin.ignore();
cin.getline(nom_p, 99);
```
Esto enseña el correcto manejo del búfer de entrada al alternar `cin >>` y `getline()`.

### 4. Salida formateada

La función `setprecision(2)` y `fixed` nos permite mostrar los precios con dos decimales:
```cpp
cout << fixed << setprecision(2) << precio;
```

### 5. Pensamiento algorítmico

La implementación de SKU como identificador de producto, el uso de descuentos condicionales y un flujo alterno para entradas manuales hacen de este programa un excelente ejemplo de:
- Lógica de negocios
- Algoritmos simples con validaciones
- Separación de casos (automático/manual)

---

## 🎯 Recomendación didáctica

Este programa puede utilizarse como ejercicio práctico en clases de:
- Introducción a la programación en C++
- Algoritmia básica
- Aplicaciones comerciales
- Validación y entrada de datos

Además, sirve como base para futuras mejoras, como agregar una base de datos de productos, o almacenar las ventas en un archivo de texto.
