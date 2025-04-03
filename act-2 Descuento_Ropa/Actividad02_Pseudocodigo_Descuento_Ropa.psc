Algoritmo Descuento_Ropa
	
	Definir precio_unitario, porcentaje, subtotal, cantidad_descuento, total, uno_de_cien Como Real
	Definir cantidad Como Entero
	
	Escribir "=========================================="
	Escribir "             Tienda Departamental         "
	Escribir "            TICKET DE COMPRA              "
	Escribir "=========================================="
	
	Escribir "Precio unitario de la blusa: $"
	Leer precio_unitario
	
	Escribir "Cantidad de blusas a comprar: "
	Leer cantidad
	
	Escribir "Porcentaje de descuento (%): "
	Leer porcentaje
	
	subtotal <- precio_unitario * cantidad
	uno_de_cien <- subtotal / 100
	cantidad_descuento <- uno_de_cien * porcentaje
	total <- subtotal - cantidad_descuento
	
	Escribir ""
	Escribir "------------- DETALLE DE COMPRA ----------"
	Escribir "Blusas compradas: ", cantidad
	Escribir "Precio unitario: $", precio_unitario
	Escribir "------------------------------------------"
	Escribir "SUBTOTAL:        $", subtotal
	Escribir "DESCUENTO (", porcentaje, "%): -$", cantidad_descuento
	Escribir "------------------------------------------"
	Escribir "TOTAL A PAGAR:   $", total
	Escribir "=========================================="
	Escribir "    ¡Gracias por su preferencia!          "
	Escribir "=========================================="

FinAlgoritmo
