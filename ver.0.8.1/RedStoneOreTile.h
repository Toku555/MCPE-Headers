#pragma once
class RedStoneOreTile{
	public:
		RedStoneOreTile(int,std::string const&,bool);
		void animateTick(Level *,int,int,int,Random *);
		void attack(Level *,int,int,int,Player *);
		void getResource(int,Random *);
		void getResourceCount(Random *);
		void getTickDelay(void);
		void interact(Level *,int,int,int);
		void poofParticles(Level *,int,int,int);
		void stepOn(Level *,int,int,int,Entity *);
		void tick(Level *,int,int,int,Random *);
		void use(Level *,int,int,int,Player *);
		void ~RedStoneOreTile();
		void ~RedStoneOreTile();
};
