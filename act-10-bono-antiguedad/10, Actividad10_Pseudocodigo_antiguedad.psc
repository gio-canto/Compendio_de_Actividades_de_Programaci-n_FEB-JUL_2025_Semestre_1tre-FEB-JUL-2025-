Algoritmo Antiguedad
    Escribir "Favor de indicar el nombre del empleado:"
    Leer nom_emp
    Escribir "Favor de indicar el sueldo original del empleado:"
    Leer sueldo
    Escribir "Favor de indicar su antigüedad en años:"
    Leer ant
	
    Si ant < 5 Entonces
        bono <- 300
    Sino
        Si ant >= 5 Y ant < 10 Entonces
            bono <- 1000
        Sino
            bono <- 2000
        FinSi
    FinSi
	
    sueldo_f <- sueldo + bono
    Escribir "El empleado ", nom_emp, " recibirá un bono de $", bono, "."
    Escribir "Pague al empleado la cantidad total de $", sueldo_f, "."
    Escribir "(c) Gio Canto"
FinAlgoritmo
