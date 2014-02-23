#include "keyboard.h"
#include "Windows.h"

// Eventos de teclado
void keyPress( const KeyType key, World& world )
{
	//CON EL PRIMER IF HACEMOS QUE SI NO NOS QUEDAN VIDAS, NO PODEMOS MOVERNOS NI DISPARAR
	if(world.mi_nave.vidas > 0) {
		
		if(key == KEY_RIGHT) {
			if (world.mi_nave.x < 465) {
				world.mi_nave.x += 5;
			}
		}
		
		if(key == KEY_LEFT) {
			if (world.mi_nave.x > 5) {
				world.mi_nave.x -= 5;
			}
		}	

		if(key == KEY_FIRE) {
			if(world.hay_disparo == false) {
				//ESTA LINEA REPRODUCE UN SONIDO DE DISPARO DE BLASTER CUANDO DISPARAMOS
				//CON NUESTRA NAVE, PERO LA FUNCION PlaySound SOLO PERMITE REPRODUCIR UN 
				//SONIDO AL MISMO TIEMPO Y CORTA LA MUSICA DE FONDO, ASI QUE LA COMENTO 
				//Y LA DEJO POR SI ALGUIEN LA QUIERE USAR
				PlaySound(TEXT("Blaster.wav"),NULL , SND_ASYNC | SND_FILENAME);
				Disparo p;
				p.anchura = 5;
				p.altura = 10;
				p.x = world.mi_nave.x + (world.mi_nave.anchura / 2) - (p.anchura / 2);
				p.y = world.mi_nave.y + (world.mi_nave.altura + 2);
				p.existe = true;
				world.disparos.push_back(p);
				world.hay_disparo = true;
			}
		}
	}
}