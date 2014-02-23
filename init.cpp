#include "init.h"
#include <fstream>
#include "Windows.h"


void init( World& world )
{
	//PlaySound(TEXT("Pokemon.wav"), NULL , SND_ASYNC | SND_FILENAME | SND_LOOP);
	
	world.hay_disparo = false;
	world.diferencial = 0;

	world.infoBox.x = 1;
	world.infoBox.y = 439;
	world.infoBox.altura = 60;
	world.infoBox.anchura = 499;
	world.infoBox.color = BLUE;

	world.gameBox.x = 1;
	world.gameBox.y = 0;
	world.gameBox.altura = 438;
	world.gameBox.anchura = 499;
	world.gameBox.color = RED;

	//AQUI ESTA EL CODIGO QUE RECOGE LOS DATOS DE LAS ESTRELLAS EN UN FICHERO, PERO COMO
	//NO ME GUSTA, LO DEJO COMENTADO Y ALMACENO LOS DATOS EN UN VECTOR
	/*ofstream estrellas;
	estrellas.open("estrellas.txt");

	if (estrellas.is_open()) {
		for (int i = 0; i <= 500; i++) {
			int t;
			t = (randomInt() * 499) / RAND_MAX;
			estrellas << rand << endl;
		}
	}
	estrellas.close();
	ifstream estrellazos;
	estrellazos.open("estrellas.txt");
	while (!estrellas.eof()) {
		int var = 0;
		estrellazos >> var;
		world.coord.push_back(var);
	}
	estrellazos.close();*/

	//ESTA HA SIDO LA MANERA CON LA QUE HE CONSEGUIDO EL TEMA DE LAS ESTRELLAS
	for (int i = 0; i <= 250; i++) {
		int m = 0;
		int t = 0;
		m = (randomInt() * 439) /RAND_MAX;
		world.coord.push_back(m);
		t = (randomInt() * 499) /RAND_MAX;
		world.coord.push_back(t);
	}
	
	world.mi_nave.x = 220;
	world.mi_nave.y = 5;
	world.mi_nave.anchura = 30;
	world.mi_nave.altura = 45;
	world.mi_nave.vidas = 5;

	world.numero_enemigos1 = 7;

	Nave_enemiga nave1_1;
		nave1_1.xinc = 50;
		nave1_1.x = 50;
		nave1_1.y = 250;
		nave1_1.anchura = 30;
		nave1_1.altura = 30;
		nave1_1.vidas = 1;
		nave1_1.existe = true;

	Nave_enemiga nave1_2;
		nave1_2.xinc = 115;
		nave1_2.x = 115;
		nave1_2.y = 250;
		nave1_2.anchura = 30;
		nave1_2.altura = 30;
		nave1_2.vidas = 1;
		nave1_2.existe = true;

	Nave_enemiga nave1_3;
		nave1_3.xinc = 175;
		nave1_3.x = 175;
		nave1_3.y = 250;
		nave1_3.anchura = 30;
		nave1_3.altura = 30;
		nave1_3.vidas = 1;
		nave1_3.existe = true;

	Nave_enemiga nave1_4;
		nave1_4.xinc = 240;	
		nave1_4.x = 240;
		nave1_4.y = 250;
		nave1_4.anchura = 30;
		nave1_4.altura = 30;
		nave1_4.vidas = 1;
		nave1_4.existe = true;

	Nave_enemiga nave1_5;
		nave1_5.xinc = 300;
		nave1_5.x = 300;
		nave1_5.y = 250;
		nave1_5.anchura = 30;
		nave1_5.altura = 30;
		nave1_5.vidas = 1;
		nave1_5.existe = true;

	Nave_enemiga nave1_6;
		nave1_6.xinc = 360;
		nave1_6.x = 360;
		nave1_6.y = 250;
		nave1_6.anchura = 30;
		nave1_6.altura = 30;
		nave1_6.vidas = 1;
		nave1_6.existe = true;

	Nave_enemiga nave1_7;
		nave1_7.xinc = 420;
		nave1_7.x = 420;
		nave1_7.y = 250;
		nave1_7.anchura = 30;
		nave1_7.altura = 30;
		nave1_7.vidas = 1;
		nave1_7.existe = true;

	world.naves1.push_back(nave1_1);
	world.naves1.push_back(nave1_2);
	world.naves1.push_back(nave1_3);
	world.naves1.push_back(nave1_4);
	world.naves1.push_back(nave1_5);
	world.naves1.push_back(nave1_6);
	world.naves1.push_back(nave1_7);

	world.numero_enemigos2 = 7;

	Nave_enemiga nave2_1;
		nave2_1.x = 50;
		nave2_1.y = 310;
		nave2_1.anchura = 30;
		nave2_1.altura = 30;
		nave2_1.vidas = 2;
		nave2_1.existe = true;

	Nave_enemiga nave2_2;
		nave2_2.x = 115;
		nave2_2.y = 310;
		nave2_2.anchura = 30;
		nave2_2.altura = 30;
		nave2_2.vidas = 2;
		nave2_2.existe = true;

	Nave_enemiga nave2_3;
		nave2_3.x = 175;
		nave2_3.y = 310;
		nave2_3.anchura = 30;
		nave2_3.altura = 30;
		nave2_3.vidas = 2;
		nave2_3.existe = true;

	Nave_enemiga nave2_4;
		nave2_4.x = 240;
		nave2_4.y = 310;
		nave2_4.anchura = 30;
		nave2_4.altura = 30;
		nave2_4.vidas = 2;
		nave2_4.existe = true;

	Nave_enemiga nave2_5;
		nave2_5.x = 300;
		nave2_5.y = 310;
		nave2_5.anchura = 30;
		nave2_5.altura = 30;
		nave2_5.vidas = 2;
		nave2_5.existe = true;

	Nave_enemiga nave2_6;
		nave2_6.x = 360;
		nave2_6.y = 310;
		nave2_6.anchura = 30;
		nave2_6.altura = 30;
		nave2_6.vidas = 2;
		nave2_6.existe = true;

	Nave_enemiga nave2_7;
		nave2_7.x = 420;
		nave2_7.y = 310;
		nave2_7.anchura = 30;
		nave2_7.altura = 30;
		nave2_7.vidas = 2;
		nave2_7.existe = true;

	world.naves2.push_back(nave2_1);
	world.naves2.push_back(nave2_2);
	world.naves2.push_back(nave2_3);
	world.naves2.push_back(nave2_4);
	world.naves2.push_back(nave2_5);
	world.naves2.push_back(nave2_6);
	world.naves2.push_back(nave2_7);

	world.numero_enemigos3 = 7;

	Nave_enemiga nave3_1;
		nave3_1.x = 50;
		nave3_1.y = 370;
		nave3_1.anchura = 30;
		nave3_1.altura = 30;
		nave3_1.vidas = 3;
		nave3_1.existe = true;

	Nave_enemiga nave3_2;
		nave3_2.x = 115;
		nave3_2.y = 370;
		nave3_2.anchura = 30;
		nave3_2.altura = 30;
		nave3_2.vidas = 3;
		nave3_2.existe = true;

	Nave_enemiga nave3_3;
		nave3_3.x = 175;
		nave3_3.y = 370;
		nave3_3.anchura = 30;
		nave3_3.altura = 30;
		nave3_3.vidas = 3;
		nave3_3.existe = true;

	Nave_enemiga nave3_4;
		nave3_4.x = 240;
		nave3_4.y = 370;
		nave3_4.anchura = 30;
		nave3_4.altura = 30;
		nave3_4.vidas = 3;
		nave3_4.existe = true;

	Nave_enemiga nave3_5;
		nave3_5.x = 300;
		nave3_5.y = 370;
		nave3_5.anchura = 30;
		nave3_5.altura = 30;
		nave3_5.vidas = 3;
		nave3_5.existe = true;

	Nave_enemiga nave3_6;
		nave3_6.x = 360;
		nave3_6.y = 370;
		nave3_6.anchura = 30;
		nave3_6.altura = 30;
		nave3_6.vidas = 3;
		nave3_6.existe = true;

	Nave_enemiga nave3_7;
		nave3_7.x = 420;
		nave3_7.y = 370;
		nave3_7.anchura = 30;
		nave3_7.altura = 30;
		nave3_7.vidas = 3;
		nave3_7.existe = true;

	world.naves3.push_back(nave3_1);
	world.naves3.push_back(nave3_2);
	world.naves3.push_back(nave3_3);
	world.naves3.push_back(nave3_4);
	world.naves3.push_back(nave3_5);
	world.naves3.push_back(nave3_6);
	world.naves3.push_back(nave3_7);

	world.dcha = true;
	world.izda = false; 

	Escudo escudo1;
		escudo1.x = 58;
		escudo1.y = 150;
		escudo1.anchura = 8;
		escudo1.altura = 15;
		escudo1.existe = true;	

	Escudo escudo2;
		escudo2.x = 66;
		escudo2.y = 150;
		escudo2.anchura = 8;
		escudo2.altura = 15;
		escudo2.existe = true;

	Escudo escudo3;
		escudo3.x = 74;
		escudo3.y = 150;
		escudo3.anchura = 8;
		escudo3.altura = 15;
		escudo3.existe = true;

	Escudo escudo4;
		escudo4.x = 82;
		escudo4.y = 150;
		escudo4.anchura = 8;
		escudo4.altura = 15;
		escudo4.existe = true;

	Escudo escudo5;
		escudo5.x = 90;
		escudo5.y = 150;
		escudo5.anchura = 8;
		escudo5.altura = 15;
		escudo5.existe = true;

	Escudo escudo6;
		escudo6.x = 58;
		escudo6.y = 135;
		escudo6.anchura = 8;
		escudo6.altura = 15;
		escudo6.existe = true;	
	
	Escudo escudo7;
		escudo7.x = 66;
		escudo7.y = 135;
		escudo7.anchura = 8;
		escudo7.altura = 15;
		escudo7.existe = true;
	
	Escudo escudo8;
		escudo8.x = 74;
		escudo8.y = 135;
		escudo8.anchura = 8;
		escudo8.altura = 15;
		escudo8.existe = true;

	Escudo escudo9;
		escudo9.x = 82;
		escudo9.y = 135;
		escudo9.anchura = 8;
		escudo9.altura = 15;
		escudo9.existe = true;

	Escudo escudo10;
		escudo10.x = 90;
		escudo10.y = 135;
		escudo10.anchura = 8;
		escudo10.altura = 15;
		escudo10.existe = true;

	Escudo escudo11;
		escudo11.x = 140;
		escudo11.y = 150;
		escudo11.anchura = 8;
		escudo11.altura = 15;
		escudo11.existe = true;	
	Escudo escudo12;
		escudo12.x = 148;
		escudo12.y = 150;
		escudo12.anchura = 8;
		escudo12.altura = 15;
		escudo12.existe = true;
	Escudo escudo13;
		escudo13.x = 156;
		escudo13.y = 150;
		escudo13.anchura = 8;
		escudo13.altura = 15;
		escudo13.existe = true;

	Escudo escudo14;
		escudo14.x = 164;
		escudo14.y = 150;
		escudo14.anchura = 8;
		escudo14.altura = 15;
		escudo14.existe = true;

	Escudo escudo15;
		escudo15.x = 172;
		escudo15.y = 150;
		escudo15.anchura = 8;
		escudo15.altura = 15;
		escudo15.existe = true;

	Escudo escudo16;
		escudo16.x = 140;
		escudo16.y = 135;
		escudo16.anchura = 8;
		escudo16.altura = 15;
		escudo16.existe = true;	
	
	Escudo escudo17;
		escudo17.x = 148;
		escudo17.y = 135;
		escudo17.anchura = 8;
		escudo17.altura = 15;
		escudo17.existe = true;
	
	Escudo escudo18;
		escudo18.x = 156;
		escudo18.y = 135;
		escudo18.anchura = 8;
		escudo18.altura = 15;
		escudo18.existe = true;

	Escudo escudo19;
		escudo19.x = 164;
		escudo19.y = 135;
		escudo19.anchura = 8;
		escudo19.altura = 15;
		escudo19.existe = true;

	Escudo escudo20;
		escudo20.x = 172;
		escudo20.y = 135;
		escudo20.anchura = 8;
		escudo20.altura = 15;
		escudo20.existe = true;

	Escudo escudo21;
		escudo21.x = 223;
		escudo21.y = 150;
		escudo21.anchura = 8;
		escudo21.altura = 15;
		escudo21.existe = true;	
	Escudo escudo22;
		escudo22.x = 231;
		escudo22.y = 150;
		escudo22.anchura = 8;
		escudo22.altura = 15;
		escudo22.existe = true;
	Escudo escudo23;
		escudo23.x = 239;
		escudo23.y = 150;
		escudo23.anchura = 8;
		escudo23.altura = 15;
		escudo23.existe = true;

	Escudo escudo24;
		escudo24.x = 247;
		escudo24.y = 150;
		escudo24.anchura = 8;
		escudo24.altura = 15;
		escudo24.existe = true;

	Escudo escudo25;
		escudo25.x = 255;
		escudo25.y = 150;
		escudo25.anchura = 8;
		escudo25.altura = 15;
		escudo25.existe = true;

	Escudo escudo26;
		escudo26.x = 223;
		escudo26.y = 135;
		escudo26.anchura = 8;
		escudo26.altura = 15;
		escudo26.existe = true;	
	
	Escudo escudo27;
		escudo27.x = 231;
		escudo27.y = 135;
		escudo27.anchura = 8;
		escudo27.altura = 15;
		escudo27.existe = true;
	
	Escudo escudo28;
		escudo28.x = 239;
		escudo28.y = 135;
		escudo28.anchura = 8;
		escudo28.altura = 15;
		escudo28.existe = true;

	Escudo escudo29;
		escudo29.x = 247;
		escudo29.y = 135;
		escudo29.anchura = 8;
		escudo29.altura = 15;
		escudo29.existe = true;

	Escudo escudo30;
		escudo30.x = 255;
		escudo30.y = 135;
		escudo30.anchura = 8;
		escudo30.altura = 15;
		escudo30.existe = true;

	Escudo escudo31;
		escudo31.x = 305;
		escudo31.y = 150;
		escudo31.anchura = 8;
		escudo31.altura = 15;
		escudo31.existe = true;	

	Escudo escudo32;

		escudo32.x = 313;
		escudo32.y = 150;
		escudo32.anchura = 8;
		escudo32.altura = 15;
		escudo32.existe = true;
	
	Escudo escudo33;
		escudo33.x = 321;
		escudo33.y = 150;
		escudo33.anchura = 8;
		escudo33.altura = 15;
		escudo33.existe = true;

	Escudo escudo34;
		escudo34.x = 329;
		escudo34.y = 150;
		escudo34.anchura = 8;
		escudo34.altura = 15;
		escudo34.existe = true;

	Escudo escudo35;
		escudo35.x = 337;
		escudo35.y = 150;
		escudo35.anchura = 8;
		escudo35.altura = 15;
		escudo35.existe = true;

	Escudo escudo36;
		escudo36.x = 305;
		escudo36.y = 135;
		escudo36.anchura = 8;
		escudo36.altura = 15;
		escudo36.existe = true;	
	
	Escudo escudo37;
		escudo37.x = 313;
		escudo37.y = 135;
		escudo37.anchura = 8;
		escudo37.altura = 15;
		escudo37.existe = true;
	
	Escudo escudo38;
		escudo38.x = 321;
		escudo38.y = 135;
		escudo38.anchura = 8;
		escudo38.altura = 15;
		escudo38.existe = true;

	Escudo escudo39;
		escudo39.x = 329;
		escudo39.y = 135;
		escudo39.anchura = 8;
		escudo39.altura = 15;
		escudo39.existe = true;

	Escudo escudo40;
		escudo40.x = 337;
		escudo40.y = 135;
		escudo40.anchura = 8;
		escudo40.altura = 15;
		escudo40.existe = true;

	Escudo escudo41;
		escudo41.x = 387;
		escudo41.y = 150;
		escudo41.anchura = 8;
		escudo41.altura = 15;
		escudo41.existe = true;	

	Escudo escudo42;
		escudo42.x = 395;
		escudo42.y = 150;
		escudo42.anchura = 8;
		escudo42.altura = 15;
		escudo42.existe = true;

	Escudo escudo43;
		escudo43.x = 403;
		escudo43.y = 150;
		escudo43.anchura = 8;
		escudo43.altura = 15;
		escudo43.existe = true;

	Escudo escudo44;
		escudo44.x = 411;
		escudo44.y = 150;
		escudo44.anchura = 8;
		escudo44.altura = 15;
		escudo44.existe = true;

	Escudo escudo45;
		escudo45.x = 419;
		escudo45.y = 150;
		escudo45.anchura = 8;
		escudo45.altura = 15;
		escudo45.existe = true;

	Escudo escudo46;
		escudo46.x = 387;
		escudo46.y = 135;
		escudo46.anchura = 8;
		escudo46.altura = 15;
		escudo46.existe = true;	
	
	Escudo escudo47;
		escudo47.x = 395;
		escudo47.y = 135;
		escudo47.anchura = 8;
		escudo47.altura = 15;
		escudo47.existe = true;
	
	Escudo escudo48;
		escudo48.x = 403;
		escudo48.y = 135;
		escudo48.anchura = 8;
		escudo48.altura = 15;
		escudo48.existe = true;

	Escudo escudo49;
		escudo49.x = 411;
		escudo49.y = 135;
		escudo49.anchura = 8;
		escudo49.altura = 15;
		escudo49.existe = true;

	Escudo escudo50;
		escudo50.x = 419;
		escudo50.y = 135;
		escudo50.anchura = 8;
		escudo50.altura = 15;
		escudo50.existe = true;

	
		
		
	world.escudos.push_back(escudo1);
	world.escudos.push_back(escudo2);
	world.escudos.push_back(escudo3);
	world.escudos.push_back(escudo4);
	world.escudos.push_back(escudo5);
	world.escudos.push_back(escudo6);
	world.escudos.push_back(escudo7);
	world.escudos.push_back(escudo8);
	world.escudos.push_back(escudo9);
	world.escudos.push_back(escudo10);
	world.escudos.push_back(escudo11);
	world.escudos.push_back(escudo12);
	world.escudos.push_back(escudo13);
	world.escudos.push_back(escudo14);
	world.escudos.push_back(escudo15);
	world.escudos.push_back(escudo16);
	world.escudos.push_back(escudo17);
	world.escudos.push_back(escudo18);
	world.escudos.push_back(escudo19);
	world.escudos.push_back(escudo20);
	world.escudos.push_back(escudo21);
	world.escudos.push_back(escudo22);
	world.escudos.push_back(escudo23);
	world.escudos.push_back(escudo24);
	world.escudos.push_back(escudo25);
	world.escudos.push_back(escudo26);
	world.escudos.push_back(escudo27);
	world.escudos.push_back(escudo28);
	world.escudos.push_back(escudo29);
	world.escudos.push_back(escudo30);
	world.escudos.push_back(escudo31);
	world.escudos.push_back(escudo32);
	world.escudos.push_back(escudo33);
	world.escudos.push_back(escudo34);
	world.escudos.push_back(escudo35);
	world.escudos.push_back(escudo36);
	world.escudos.push_back(escudo37);
	world.escudos.push_back(escudo38);
	world.escudos.push_back(escudo39);
	world.escudos.push_back(escudo40);
	world.escudos.push_back(escudo41);
	world.escudos.push_back(escudo42);
	world.escudos.push_back(escudo43);
	world.escudos.push_back(escudo44);
	world.escudos.push_back(escudo45);
	world.escudos.push_back(escudo46);
	world.escudos.push_back(escudo47);
	world.escudos.push_back(escudo48);
	world.escudos.push_back(escudo49);
	world.escudos.push_back(escudo50);
}