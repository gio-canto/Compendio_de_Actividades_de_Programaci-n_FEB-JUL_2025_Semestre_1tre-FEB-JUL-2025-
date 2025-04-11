Algoritmo Cartas
    Escribir "Servicio Postal - Bienvenido usuario"
    Escribir "Por favor, indique el peso de la carta/paquete en onzas:"
    Leer onzas
	
    Si onzas == 1 Entonces
        costo <- 0.25
    SiNo
        costo <- (onzas - 1) * 0.04 + 0.25
    FinSi
	
    Escribir "Estimado usuario, usted pagará en concepto de porte $" costo
FinAlgoritmo
