Algoritmo  Actividad_1
 
	Definir precio_unitario, cantidad, subtotal, descuento, total Como Real
	
	precio_unitario <- 2000
	cantidad <- 1.00
	
	subtotal <- precio_unitario * cantidad
	descuento <- (precio_unitario * 34) / 100
	total <- subtotal - descuento

	Escribir "Subtotal: $", subtotal
	Escribir "Descuento aplicado (34%): $", descuento
	Escribir "Total a pagar: $", total

FinAlgoritmo
