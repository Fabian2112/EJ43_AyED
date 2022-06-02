Algoritmo Ej43
	Definir sede,N,NS,DNI,TT,CSue25y40,DNIMaxSue,CSue30,MaxCSue30,SedeMaxCSue30,Cempleados,MaxCempleados,SedeMaxCempleados Como Entero
	Definir Sue,MaxSue,SueSede,SueTot Como Real
	Definir BS Como Caracter
	N <- 3
	MaxCSue30 <- 0
	SueTot <- 0
	MaxSue <- 0
	MaxCempleados <- 0
	Para sede<-1 Hasta N Hacer
		SueSede <- 0
		CSue25y40 <- 0
		Cempleados <- 0
		Escribir 'Ingrese el Numero de la sede'
		Leer NS
		Escribir 'Ingrese el barrio de la sede Nro ',NS
		Leer BS
		Escribir 'Ingrese el DNI del empleado'
		Leer DNI
		Mientras DNI<>0 Hacer
			Escribir 'Ingrese Sueldo'
			Leer Sue
			Escribir 'Ingrese tipo de tarea (1-10)'
			Leer TT
			Si Entre25y40mil(Sue) Entonces
				CSue25y40 <- CSue25y40+1
			FinSi
			SueSede <- SueSede+Sue
			Cempleados <- Cempleados+1
			Si TT=1 Entonces
				Si Sue>MaxSue Entonces
					MaxSue <- Sue
					DNIMaxSue <- DNI
				FinSi
			FinSi
			Escribir 'Ingrese el DNI del empleado'
			Leer DNI
		FinMientras
		Si Cempleados>MaxCempleados Entonces
			MaxCempleados <- Cempleados
			SedeMaxCempleados <- NS
		FinSi
		Escribir 'En sede ',BS,' hay ',CSue25y40,' empleados con sueldos entre $25000 y $40000'
		Escribir 'En Sede ',BS,' hay que abonar $',SueSede,' de sueldos'
		SueTot <- SueTot+SueSede
	FinPara
	Escribir 'Sede con mayor cant de empleados es ',SedeMaxCempleados,' con ',Cempleados,' empleados'
	Escribir 'El empleado con mayor sueldo de TT=1 es DNI ',DNIMaxSue
	Escribir 'Entre todas las sedes hay que abonar $',SueTot,' en sueldos'
FinAlgoritmo

Funcion e20y40mil <- Entre25y40mil(sueldo)
	Definir e20y40mil Como Logico
	Si sueldo>=25000 Y sueldo<=40000 Entonces
		e20y40mil <- Verdadero
	SiNo
		e20y40mil <- falso
	FinSi
FinFuncion
