Algoritmo CalculoBono

    Escribir "Ingrese el n�mero de horas trabajadas:"
    Leer H_TRA
	
    Escribir "Ingrese el n�mero de horas de ausencia:"
    Leer H_FAL
	
    RES <- H_TRA - (2 / 3) * H_FAL
	
    Si RES > 40 Entonces
        Bono <- 500
    SiNo
        Si RES > 30 Entonces
            Bono <- 400
        SiNo
            Si RES > 20 Entonces
                Bono <- 300
            SiNo
                Si RES > 10 Entonces
                    Bono <- 200
                SiNo
                    Bono <- 100
                FinSi
            FinSi
        FinSi
    FinSi
	
    Escribir "Horas trabajadas efectivas: ", RES
    Escribir "Gratificaci�n anual: $", Bono
FinAlgoritmo
