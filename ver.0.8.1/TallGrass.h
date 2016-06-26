#pragma once
class TallGrass{
	public:
		TallGrass(int,std::string const&);
		void getCarriedTexture(int,int);
		void getColor(LevelSource *,int,int,int);
		void getColor(int);
		void getDescriptionId(ItemInstance const*);
		void getResource(int,Random *);
		void getTexture(int,int);
		void playerDestroy(Level *,Player *,int,int,int,int);
		void ~TallGrass();
		void ~TallGrass();
};
