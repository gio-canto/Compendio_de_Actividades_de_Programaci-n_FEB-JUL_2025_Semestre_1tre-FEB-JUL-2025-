Algoritmo Llantas
    Escribir "Ingrese la cantidad de llantas a comprar:"
    Leer cant_llanta
    Escribir "Ingrese el costo de cada llanta:"
    Leer cost_llanta
	
    precio <- cant_llanta * cost_llanta
	
    Si cant_llanta <= 2 Entonces
        desc <- precio * 0.20
    Sino
        Si cant_llanta == 3 Entonces
            desc <- precio * 0.30
        Sino
            desc <- precio * 0.40
        FinSi
    FinSi
	
    precio_T <- precio - desc
    Escribir "El precio total con descuento es:", precio_T
	
FinAlgoritmo
