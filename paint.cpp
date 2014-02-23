#include "paint.h"
#include "mis_funciones.h"

void paint( const World& world ) 
{
	//TODAS LAS FUNCIONES ESTAN EXPLICADAS EN mis_funciones.cpp, AUNQUE LOS NOMBRES YA DICEN MUCHO
	Pintar_Boxes(world);
	
	Pintar_Estrellas(world, world.coord);

	Pintar_Tiempo(world);

	Pintar_FPS(world);

	Pintar_Vidas(world);

	Pintar_Mi_Nave(world, world.mi_nave);

	Pintar_Escudos(world);

	Pintar_Enemigos1(world);
	
	Pintar_Enemigos2(world);

	Pintar_Enemigos3(world);

	Pintar_Mis_Balas(world);

	Pintar_Primeros_Enemigos_Balas(world);

	Pintar_Segundos_Enemigos_Balas(world);

	Pintar_Terceros_Enemigos_Balas(world);
 
	You_Win(world);

	Game_Over(world);
}