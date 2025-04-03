Algoritmo punto_de_venta
    Escribir "Bienvenido a frutería El Gusano. Favor de indicar el SKU."
    Leer SKU
	
    Si SKU = 353 Entonces
        Escribir "Favor de indicar la cantidad de kilos."
        Leer Kilos
        P_p_k <- Kilos * 65
		
        Si Kilos > 3 Entonces
            descuento <- P_p_k * 0.25
        Sino
            descuento <- P_p_k * 0.05
        FinSi
		
        p_f <- P_p_k - descuento
		
        Escribir "Manzana Gala $65 por kilo. Usted desea ", Kilos, " kilos, equivalente a $", P_p_k
        Escribir "Por oferta, recibe un descuento de ", descuento, ", así que usted pagará $", p_f, "."
		
    Sino
        Escribir "Indique el nombre del producto."
        Leer nom_p
        Escribir "Indique el costo del producto."
        Leer cost
        Escribir nom_p, " $", cost, ". Favor de pagar la cantidad indicada."
    FinSi
FinAlgoritmo
