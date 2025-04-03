Algoritmo Exchange
	
    Escribir "Bienvenido a GioExchange"
    Escribir "Escriba cantidad en moneda nacional (MXN):"
    Leer Cantidad_P
	
    Escribir "Ingrese tasa de cambio 1 USD en MXN:"
    Leer Cantidad_D
	
    Escribir "Ingrese tasa de cambio 1 EUR en MXN:"
    Leer Cantidad_E
	
    dolar <- Cantidad_P / Cantidad_D
    euro <- Cantidad_P / Cantidad_E
	
    Escribir "La tasa de cambio es: 1 USD = $", Cantidad_D, " MXN y 1 EUR = $", Cantidad_E, " MXN."
    Escribir "Por lo anterior, la cantidad a recibir es: $", dolar, " USD y $", euro, " EUR."
    Escribir "Gracias por usar los servicios de GioExchange."

FinAlgoritmo

