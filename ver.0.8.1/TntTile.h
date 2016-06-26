#pragma once
class TntTile{
	public:
		TntTile(int,std::string const&);
		void destroy(Level *,int,int,int,int);
		void getResourceCount(Random *);
		void getTexture(int);
		void neighborChanged(Level *,int,int,int,int,int,int,int);
		void use(Level *,int,int,int,Player *);
		void wasExploded(Level *,int,int,int);
		void ~TntTile();
		void ~TntTile();
};
