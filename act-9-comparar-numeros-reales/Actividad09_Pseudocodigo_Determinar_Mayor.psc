Algoritmo Determinar_Mayor
    Escribir "Ingrese el primer n�mero:"
    Leer num1
    Escribir "Ingrese el segundo n�mero:"
    Leer num2
	
    Si num1 > num2 Entonces
        mayor <- num1
    Sino
        Si num2 > num1 Entonces
            mayor <- num2
        Sino
            Escribir "Los n�meros son iguales."
        FinSi
    FinSi
	
    Si num1 <> num2 Entonces
        Escribir "El n�mero mayor es: ", mayor
    FinSi
FinAlgoritmo
