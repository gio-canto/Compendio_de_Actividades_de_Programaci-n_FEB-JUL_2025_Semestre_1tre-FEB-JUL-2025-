Algoritmo SalarioSimple
    Definir sueldo, horas, bruto, neto Como Real
	
    Escribir "Ingrese sueldo:"
    Leer sueldo
	
    Escribir "Ingrese horas trabajadas:"
    Leer horas
	
    Si horas <= 40 Entonces
        bruto <- sueldo * horas
    SiNo
        bruto <- (40 * sueldo) + ((horas - 40) * sueldo * 1.5)
    FinSi
	
    Si bruto <= 650 Entonces
        neto <- bruto
    SiNo
        neto <- bruto - (1.5 + bruto * 0.045)
    FinSi
	
    Escribir "Salario bruto: ", bruto
    Escribir "Salario neto: ", neto
FinAlgoritmo
