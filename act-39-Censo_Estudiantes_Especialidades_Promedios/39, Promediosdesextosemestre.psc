Algoritmo POPIRPRO
	
	promsex <- 0
	alumiproseix <- 0
		
	Escribir "Sistema de censo CBTIS 134 turno vespertino"
		
	Para k <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingrese el nombre completo del alumno:"
		Leer nombre
		Escribir "Ingrese el semestre (1 a 6):"
		Leer semestre
		Escribir "Ingrese la especialidad (P=Programación, C=Contabilidad, R=Recursos Humanos):"
		Leer especialidad
		Escribir "Ingrese el promedio obtenido hasta el semestre anterior:"
		Leer promedio
		
	Si especialidad = 'P' Y semestre = 6 Entonces
		alumiproseix <- alumiproseix + 1
		promsex <- promsex + promedio
		FinSi
			
		Si semestre = 2 Y promedio >= 8 Y especialidad = 'P' Entonces
			Escribir "El alumno ", nombre, " de la especialidad de Programación  tiene promedio mayor o igual a 8."
		FinSi
	FinPara
		
	Si alumiproseix > 0 Entonces
		sexk <- promsex / alumiproseix
		Escribir "El promedio de los alumnos de Programación de sexto semestre es: ", sexk
	Sino
		Escribir "No hubo alumnos de sexto semestre de Programación registrados."
	FinSi
FinAlgoritmo
