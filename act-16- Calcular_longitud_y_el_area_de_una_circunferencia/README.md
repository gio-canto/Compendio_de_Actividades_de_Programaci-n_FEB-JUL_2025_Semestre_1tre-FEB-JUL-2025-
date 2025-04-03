# 🟠 Actividad 16 – Cálculo de Longitud y Área de una Circunferencia

Este programa calcula la **longitud** y el **área** de una circunferencia a partir del **radio ingresado por el usuario**, utilizando las fórmulas geométricas básicas y la constante matemática π (PI) incluida en la biblioteca `cmath`.

---

## 📥 Entrada

- Valor del radio de la circunferencia (`double`)

> 🧾 El valor se ingresa desde el teclado y se almacena como número decimal para mejorar la precisión de los cálculos.

---

## 🔁 Proceso

Se utilizan las fórmulas geométricas clásicas:

- **Longitud**:  
  ```
  L = 2 × π × radio
  ```

- **Área**:  
  ```
  A = π × radio²
  ```

> 🧠 Se emplea la constante `M_PI` de la biblioteca `cmath`, que proporciona un valor preciso de π (aproximadamente 3.141592...).

---

## 📤 Salida

- Longitud de la circunferencia en unidades lineales
- Área de la circunferencia en unidades cuadradas

Se utiliza `setprecision(2)` para presentar los resultados con dos decimales, lo cual es útil en contextos prácticos como física o ingeniería básica.

---

## 📚 Justificación

El algoritmo **“radioh.cpp”** fortalece las habilidades de:

- Aplicar fórmulas geométricas usando código
- Utilizar bibliotecas matemáticas estándar
- Trabajar con constantes como `M_PI` para evitar errores de redondeo
- Mostrar resultados con formato profesional

---

### 🧮 ¿Por qué usar `M_PI`?

El uso de `M_PI` como constante:
1. **Evita errores** de aproximación por escribir manualmente valores como 3.14 o 3.1416.
2. **Aumenta la legibilidad y la precisión** del código.
3. **Permite mejoras futuras**, ya que es parte de una biblioteca confiable (`cmath`).

---

### 🧪 ¿Qué pasa si no se usa `M_PI`?

Si se escribe manualmente:

```cpp
longitud = 2 * 3.14 * radio;
area = 3.14 * radio * radio;
```

Esto puede funcionar, pero **reduce la precisión** y genera problemas si se cambia el valor de π en diferentes partes del código.

---

### 🌐 En otros lenguajes:

- **Python**: `math.pi`
- **JavaScript**: `Math.PI`
- **PSeInt**: puede usarse directamente como `PI`

> 🧩 Conocer las bibliotecas estándar de cada lenguaje mejora la calidad y eficiencia del código.

---

## ✅ Cambios realizados y razones

| Cambio | Descripción | Justificación |
|--------|-------------|---------------|
| Uso de `M_PI` | Constante definida en `cmath` | Aumenta precisión y evita redundancias |
| `pow(radio, 2)` | Para elevar al cuadrado el radio | Reutiliza funciones matemáticas predefinidas |
| Resultados con `setprecision(2)` | Dos decimales | Mejora presentación del resultado |
| Separadores visuales | Líneas `=====` y `-----` | Mejora la legibilidad y estética del programa |
