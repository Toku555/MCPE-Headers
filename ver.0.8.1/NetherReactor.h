#pragma once
class NetherReactor{
	public:
		NetherReactor(int,std::string const&,Material const*);
		void allPlayersCloseToReactor(Level *,int,int,int);
		void canSpawnStartNetherReactor(Level *,int,int,int,Player *);
		void getTexture(int,int);
		void getTileEntityType(void);
		void setPhase(Level *,int,int,int,int);
		void use(Level *,int,int,int,Player *);
		void ~NetherReactor();
		void ~NetherReactor();
};
