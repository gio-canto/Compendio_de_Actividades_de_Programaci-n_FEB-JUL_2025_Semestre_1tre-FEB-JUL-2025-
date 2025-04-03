Algoritmo DESCUENTO_COMPRA
    Escribir "Ingrese el total de la compra:"
    Leer total_compra
	
    descuento <- total_compra * 0.08
    total_pagar <- total_compra - descuento
	
    Escribir "Descuento aplicado: ", descuento
    Escribir "Total a pagar: ", total_pagar
FinAlgoritmo
