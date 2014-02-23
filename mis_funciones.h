#pragma once
#include "common.h"

//ESTAS SON LAS FUNCIONES QUE USAREMOS EN LOGIC

void Calcular_Tiempo(World& world);

void Mover_Naves_Enemigas(World& world);

void Mover_Mi_Bala(World& world);

void Disparar_No_Continuo(World& world);

void Eliminar_Mis_Balas(World& world);

void Disparos_Primeros_Enemigos(World& world);

void Disparos_Segundos_Enemigos(World& world);

void Disparos_Terceros_Enemigos(World& world);

void Colision_Mi_Bala_Primeros_Enemigos(World& world);

void Colision_Mi_Bala_Segundos_Enemigos(World& world);

void Colision_Mi_Bala_Terceros_Enemigos(World& world);

void Colision_Primeros_Enemigos_Balas_Mi_Nave(World& world);

void Colision_Segundos_Enemigos_Balas_Mi_Nave(World& world);

void Colision_Terceros_Enemigos_Balas_Mi_Nave(World& world);

void Colision_Primeros_Enemigos_Balas_Escudos(World& world);

void Colision_Segundos_Enemigos_Balas_Escudos(World& world);

void Colision_Terceros_Enemigos_Balas_Escudos(World& world);

void Colision_Mi_Bala_Escudos(World& world);

bool Colision(Rectangulo rect1, Rectangulo rect2);

Rectangulo Obtener_Rectangulo(Escudo a);

Rectangulo Obtener_Rectangulo(Disparo a);

Rectangulo Obtener_Rectangulo(Nave_enemiga a);

Rectangulo Obtener_Rectangulo(Nave a);

Rectangulo Obtener_Rectangulo(Disparo_enemigo a);

//ESTAS SON LAS FUNCIONES QUE USAREMOS EN PAINT

void Pintar_Estrellas(const World& world, vector <int> estrellas);

void Pintar_Boxes(const World& world);

void Pintar_Tiempo(const World& world);

void Pintar_FPS(const World& world);

void Pintar_Vidas(const World& world);

void Pintar_Mi_Nave(const World& world, Nave a);

void Pintar_Un_Escudo(const World& world, Escudo a);

void Pintar_Escudos(const World& world);

void Pintar_Nave1(const World& world, Nave_enemiga a);

void Pintar_Nave2(const World& world, Nave_enemiga a);

void Pintar_Nave3(const World& world, Nave_enemiga a);

void Pintar_Enemigos1(const World& world);

void Pintar_Enemigos2(const World& world);

void Pintar_Enemigos3(const World& world);

void Pintar_Mis_Balas(const World& world);

void Pintar_Primeros_Enemigos_Balas(const World& world);

void Pintar_Segundos_Enemigos_Balas(const World& world);

void Pintar_Terceros_Enemigos_Balas(const World& world);

void You_Win(const World& world);

void Game_Over(const World& world);
