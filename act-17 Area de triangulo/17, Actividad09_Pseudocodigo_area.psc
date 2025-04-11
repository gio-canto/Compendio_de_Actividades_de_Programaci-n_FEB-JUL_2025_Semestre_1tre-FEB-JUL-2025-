Algoritmo area
    Escribir "Ingrese la longitud del lado a:"
    Leer a
    Escribir "Ingrese la longitud del lado b:"
    Leer b
    Escribir "Ingrese la longitud del lado c:"
    Leer c
	
    Si (a + b > c) Y (a + c > b) Y (b + c > a) Entonces
        s <- (a + b + c) / 2
        are <- Raiz(s * (s - a) * (s - b) * (s - c))
        Escribir "El área del triángulo con lados ", a, ", ", b, " y ", c, " es: ", are, " unidades cuadradas."
    Sino
        Escribir "Error: Los valores ingresados no forman un triángulo válido."
    FinSi
FinAlgoritmo
