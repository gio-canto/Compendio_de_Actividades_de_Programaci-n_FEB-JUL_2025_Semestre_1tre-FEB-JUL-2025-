Algoritmo Promedio
    Escribir "Bienvenido al sistema de calificaciones parciales."
    Escribir "Favor de indicar la materia a evaluar:"
    Leer nom_as
    Escribir "Ingresar el nombre del maestro:"
    Leer nom_mast
    Escribir "Ingresar el nombre del evaluado:"
    Leer nom_al
	
    Escribir "Favor de indicar la calificaci�n del primer parcial:"
    Leer par_1
    Escribir "Favor de indicar la calificaci�n del segundo parcial:"
    Leer par_2
    Escribir "Favor de indicar la calificaci�n del tercer parcial:"
    Leer par_3
	
    Escribir "Por favor espere, el sistema est� procesando la informaci�n..."
    Esperar 3 Segundos
	
    pro_f <- (par_1 + par_2 + par_3) / 3
	
    Si pro_f < 6 Entonces
        Escribir "Estimado ", nom_al, " se le informa que NO ACREDIT� la materia ", nom_as, " impartida por el maestro ", nom_mast
        Escribir "Su calificaci�n final es: ", pro_f
        Escribir "Favor de confirmar dicha informaci�n. Atentamente, Servicios Escolares."
    Sino
        Escribir "Estimado ", nom_al, " se le informa que ACREDIT� la materia ", nom_as, " impartida por el maestro ", nom_mast
        Escribir "Su calificaci�n final es: ", pro_f
        Escribir "Favor de confirmar dicha informaci�n. Atentamente, Servicios Escolares."
    FinSi
FinAlgoritmo
