Algoritmo SueldoExtra
    Escribir "¡Hola! Estimado empleado, por favor indique su sueldo base:"
    Leer sueldo
	
    Escribir "Ingrese el monto de su primera venta:"
    Leer venta1
	
    Escribir "Ingrese el monto de su segunda venta:"
    Leer venta2
	
    Escribir "Ingrese el monto de su tercera venta:"
    Leer venta3
	
    comision <- 0.10
    total_comisiones <- (venta1 + venta2 + venta3) * comision
    sueldo_final <- sueldo + total_comisiones
	
    Escribir "Estimado empleado:"
    Escribir "Su sueldo base es de $", sueldo
    Escribir "Usted realizó 3 ventas este mes."
    Escribir "El bono total recibido por sus ventas es de $", total_comisiones
    Escribir "Su sueldo total este mes será de $", sueldo_final
FinAlgoritmo
