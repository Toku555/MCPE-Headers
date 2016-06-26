#pragma once
class Explosion{
	public:
		Explosion(Level *,Entity *,float,float,float,float);
		void explode(void);
		void finalizeExplosion(void);
};
