Algoritmo CALIFICACION_FINAL_DSUPE
	
	Definir parcial1, parcial2, parcial3, examen_final, trabajo_final Como Real
	Definir promedio_parciales, calificacion_final Como Real
	
	Escribir "Ingrese la calificaci�n del primer parcial:"
	Leer parcial1
	
	Escribir "Ingrese la calificaci�n del segundo parcial:"
	Leer parcial2
	
	Escribir "Ingrese la calificaci�n del tercer parcial:"
	Leer parcial3
	
	Escribir "Ingrese la calificaci�n del examen final:"
	Leer examen_final
	
	Escribir "Ingrese la calificaci�n del trabajo final:"
	Leer trabajo_final
	
	promedio_parciales <- (parcial1 + parcial2 + parcial3) / 3
	calificacion_final <- (promedio_parciales * 0.55) + (examen_final * 0.30) + (trabajo_final * 0.15)
	
	Escribir "La calificaci�n final en DSUPE es: ", calificacion_final
	
FinAlgoritmo
