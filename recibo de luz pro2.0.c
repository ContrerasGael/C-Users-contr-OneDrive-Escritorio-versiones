Algoritmo sin_titulo
	Escribir "Biienvenido a CFE"
	Escribir "cual fue el costo de su recibo de luz anterior"
	leer n
	Escribir "¿Cual fue el costo de su recibo de luz actual?"
	leer v
	TotaldeRecibo=n-v
	Si TotaldeRecibo<=1000 o TotaldeRecibo>=1 Entonces
		Escribir "la tarifa de kilowatts es de: 1.2, el total de recibo de luz es de:	", TotaldeRecibo*1.2
	SiNo
		Si TotaldeRecibo>=1001 y TotaldeRecibo<=1850 Entonces
			Escribir "la tarifa de kilowatts es de: 1.8, el total de recibo de luz es de:	", TotaldeRecibo*1.8
		SiNo
			Si TotaldeRecibo>=1851 Entonces
				Escribir "la tarifa de kilowatts es de: 2.1, el total de recibo de luz es de:	", TotaldeRecibo*2.1
			SiNo
				Si TotaldeRecibo<1 Entonces
					Escribir "ERROR"
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
