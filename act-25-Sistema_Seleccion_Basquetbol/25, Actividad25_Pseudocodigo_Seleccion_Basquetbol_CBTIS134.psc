Algoritmo Seleccion_Basquetbol_CBTIS134
    Escribir "Sistema automatizado de selección deportiva del CBTIS 134"
    Escribir "Sistema de selección de Basquetbol Femenil"
    Esperar 1 Segundos
    Borrar Pantalla
    Definir sele Como Entero
    Definir num_alumnas Como Entero
    num_alumnas <- 10 // En caso de cambiar la cantidad de alumnas, cambiar el dígito
    Para i <- 1 Hasta num_alumnas Hacer
        Escribir "Favor de indicar los datos solicitados"
        Repetir
            Escribir "Nombre de la jugadora:"
            Leer nom
        Hasta Que nom <> ""
        Repetir
            Escribir "Especialidad de la jugadora:"
            Leer espe
        Hasta Que espe <> ""
        Repetir
            Escribir "Semestre de la jugadora (1-6):"
            Leer semestre
        Hasta Que semestre >= 1 y semestre <= 6
        Repetir
            Escribir "Estatura de la jugadora en metros (ejemplo: 1.70):"
            Leer esta
        Hasta Que esta > 0
        Si esta >= 1.65 Entonces
            Repetir
                Escribir "Peso de la jugadora en kilogramos:"
                Leer pe
            Hasta Que pe > 0
            Si pe <= 90 Entonces
                sele <- sele + 1
                Escribir "La jugadora ", nom, " de la especialidad ", espe, " cumple con los requisitos para formar parte de la selección."
                Escribir "----------------------------------"
            Sino
                Escribir "Estimada ", nom, ", usted no cumple con los requisitos para jugar."
                Escribir "Motivo: su peso excede el límite de 90 kg."
                Escribir "----------------------------------"
            Fin Si
        Sino
            Escribir "Estimada ", nom, ", usted no cumple con los requisitos para jugar."
            Escribir "Motivo: su estatura es menor a 1.65 metros."
            Escribir "----------------------------------"
        Fin Si
    Fin Para
    Escribir "La cantidad de alumnas seleccionadas es: ", sele
FinAlgoritmo
