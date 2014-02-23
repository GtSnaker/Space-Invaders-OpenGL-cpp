#include "logic.h"
#include "mis_funciones.h"
#include "Windows.h"

void logic( World& world )
{
	//TODAS LAS FUNCIONES ESTAN EXPLICADAS EN mis_funciones.cpp, AUNQUE LOS NOMBRES YA DICEN MUCHO
	Calcular_Tiempo(world);
	
	Mover_Naves_Enemigas(world);
	
	Mover_Mi_Bala(world);

	Disparar_No_Continuo(world); 

	Eliminar_Mis_Balas(world);
	
	Disparos_Primeros_Enemigos(world);

	Disparos_Segundos_Enemigos(world);

	Disparos_Terceros_Enemigos(world);
	
	Colision_Mi_Bala_Primeros_Enemigos(world);
	
	Colision_Mi_Bala_Segundos_Enemigos(world);
	
	Colision_Mi_Bala_Terceros_Enemigos(world);
	
	Colision_Primeros_Enemigos_Balas_Mi_Nave(world);

	Colision_Segundos_Enemigos_Balas_Mi_Nave(world);

	Colision_Terceros_Enemigos_Balas_Mi_Nave(world);
	
	Colision_Primeros_Enemigos_Balas_Escudos(world);

	Colision_Segundos_Enemigos_Balas_Escudos(world);

	Colision_Terceros_Enemigos_Balas_Escudos(world);
 
	//NO ME GUSTA QUE MIS PROPIAS BALAS ROMPAN MIS PROTECCIONES, ASI QUE COMENTO EL CODIGO,
	//DESCOMENTAR PARA EVALUAR LAS COLISIONES DE MIS DISPAROS CON LOS ESCUDOS
	//Colision_Mi_Bala_Escudos(world);
}
