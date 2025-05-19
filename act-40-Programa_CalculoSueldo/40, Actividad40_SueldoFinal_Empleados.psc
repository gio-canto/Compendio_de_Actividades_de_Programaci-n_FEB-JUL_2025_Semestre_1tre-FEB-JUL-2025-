Algoritmo SUELDO_FINAL_EMPRESA
	mayores_5000 <- 0
	
    Para contador <- 1 Hasta 220 Con Paso 1 Hacer
        Escribir "Ingrese el nombre del empleado:"
        Leer nombre
		
        Escribir "Ingrese el número de empleado:"
        Leer num_empleado
		
        Escribir "Ingrese el sueldo base:"
        Leer sueldo_base
		
        Escribir "Ingrese la antigüedad en años:"
        Leer antiguedad
		
        Si antiguedad < 10 Entonces
            sueldo_final <- sueldo_base + (sueldo_base * 0.10) // Si desea cambiar el porcetanje coloque despues del . el procetanje para 100 es 1
        Sino
            sueldo_final <- sueldo_base + (sueldo_base * 0.20)
        FinSi
		
        Si sueldo_final > 5000 Entonces
            mayores_5000 <- mayores_5000 + 1
        FinSi
		
        Escribir "Nombre del empleado: ", nombre
        Escribir "Sueldo final: $", sueldo_final
        Escribir "----------------------------------"
    FinPara
	
    Escribir "Cantidad de empleados con sueldo final mayor a $5,000: ", mayores_5000
FinAlgoritmo

