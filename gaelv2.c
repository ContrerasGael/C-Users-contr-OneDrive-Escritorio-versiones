/*ejercicio 02/06/23
  desarrollar un programa que solicite una calificacion obtenida entre 1 y 10 y evalue si es mayor a 6 mande un mesaje de aprobado
  Nombre: Gael Contreras Gonzalez*/
  
  #include <stdio.h>
  
  int main(){
  	int calificacion;
  	
  	printf ("Ingrese la calificacion (entre 1 y 10): ");
  	scanf ("%d", &calificacion);
  	
  	if (calificacion > 6 ){
  		printf ("Aprobado\n");
  		
	  }else {
	  	 printf("Reprobado.\n");
	  }
	  
	  return 0;
  }
  
