Algoritmo sacar
    Escribir "Ingrese la base del triángulo:"
    Leer b_t
    Escribir "Ingrese la altura del triángulo:"
    Leer a_t
	
    a_t <- (b_t * a_t) / 2
    p_t <- b_t * 3
	
    Escribir "Ingrese la base mayor del trapecio:"
    Leer bma_ta
    Escribir "Ingrese la base menor del trapecio:"
    Leer bm_ta
    Escribir "Ingrese la altura del trapecio:"
    Leer a_ta
    Escribir "Ingrese el primer lado no paralelo:"
    Leer npp
    Escribir "Ingrese el segundo lado no paralelo:"
    Leer nppp
	
    Escribir "Espere un momento, su solicitud está siendo procesada ..."
    Esperar 3 Segundos
	
    a_ta <- (bma_ta + bm_ta) * a_ta / 2
    p_ta <- bma_ta + bm_ta + npp + nppp
	
    Escribir "El área del trapecio es igual a: ", a_ta, " cm2"
    Escribir "El perímetro del trapecio es igual a: ", p_ta, " cm"
    Escribir "El área del triángulo es igual a: ", a_t, " cm2"
    Escribir "El perímetro del triángulo es igual a: ", p_t, " cm"
    Escribir "Gracias por usar este sistema, me está doliendo la espalda :)"
    Escribir "© 2025 Cbtis 134 Gio Canto 2-B Programación"
FinAlgoritmo
