Algoritmo Sueldo
    Escribir "Sistema de bonos de la f�brica de hielo. Ingrese los datos solicitados."
    Para bono <- 1 Hasta 500 Con Paso 1 Hacer
        Escribir "Indique el nombre del colaborador:"
        Leer nom_emp
        Escribir "Ingrese la edad del colaborador:"
        Leer eda
        Escribir "Ingrese su sexo biol�gico (H = Hombre, M = Mujer):"
        Leer sex
        Escribir "Indique el sueldo:"
        Leer sue
		
        Si sex = "H" o sex = "h" o sex = "Hombre" o sex = "hombre" Entonces
            bonis <- 15
            bono_f <- (sue * bonis) / 100
            Escribir "El empleado ", nom_emp, " con una edad de ", eda, " a�os, obtendr� una bonificaci�n de ", bonis, "%."
            Escribir "Pague al colaborador: $", bono_f
        Sino
            Si sex = "M" o sex = "m" o sex = "Mujer" o sex = "mujer" Entonces
                bonis <- 20
                bono_f <- (sue * bonis) / 100
                Escribir "La empleada ", nom_emp, " con una edad de ", eda, " a�os, obtendr� una bonificaci�n de ", bonis, "%."
                Escribir "Pague a la colaboradora: $", bono_f
            Sino
                Escribir "Error: El sexo indicado no se encuentra en los par�metros preestablecidos (Error 404)."
                Escribir "El empleado ", nom_emp, " con una edad de ", eda, " a�os, no obtendr� bonificaci�n."
                Escribir "Favor de confirmar su sexo. Pague al empleado: $", sue
            Fin Si
        Fin Si
    Fin Para
FinAlgoritmo
