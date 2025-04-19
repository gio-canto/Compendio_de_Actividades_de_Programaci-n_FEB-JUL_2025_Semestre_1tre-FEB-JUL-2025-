Algoritmo suamate
    cat1 <- 0
    cat2 <- 0
    cat3 <- 0
    nulo <- 0
    Escribir "Sistema automatizado de elecciones para el cargo de alcalde de la localidad (El Amate) para el periodo X"	
    Para u <- 1 Hasta 300 Con Paso 1 Hacer
        Escribir "-----------------------------------------------------------"
        Escribir "Boleta de elecciones al cargo de presidente municipal"
        Escribir "Periodo X-X"
        Escribir "Elija el candidato de su preferencia:"
        Escribir "(1) Candidato 1"
        Escribir "(2) Candidato 2"
        Escribir "(3) Candidato 3"
        Leer cat
		
        Escribir "Indique su nombre:"
        Leer nom
		
        Escribir "Indique su sexo:"
        Leer sex
		
        Segun cat Hacer
            1:
                cat1 <- cat1 + 1
            2:
                cat2 <- cat2 + 1
            3:
                cat3 <- cat3 + 1
            De Otro Modo:
                Escribir "Su voto fue nulo"
                nulo <- nulo + 1
        Fin Segun
    Fin Para
	
    Escribir ""
    Escribir "Resultados finales:"
    Escribir "Candidato 1: ", cat1, " votos"
    Escribir "Candidato 2: ", cat2, " votos"
    Escribir "Candidato 3: ", cat3, " votos"
    Escribir "Votos nulos: ", nulo
	
    Si cat1 > cat2 Y cat1 > cat3 Entonces
        Escribir "El Candidato 1 fue el ganador con ", cat1, " votos."
    Sino
        Si cat2 > cat1 Y cat2 > cat3 Entonces
            Escribir "El Candidato 2 fue el ganador con ", cat2, " votos."
        Sino
            Si cat3 > cat1 Y cat3 > cat2 Entonces
                Escribir "El Candidato 3 fue el ganador con ", cat3, " votos."
            Sino
                Escribir "Empate o resultado no concluyente. Requiere segunda vuelta o desempate."
            Fin Si
        Fin Si
    Fin Si
	
FinAlgoritmo
