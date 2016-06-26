#pragma once
class DeadBush{
	public:
		DeadBush(int,std::string const&);
		void getResource(int,Random *);
		void mayPlaceOn(int);
		void playerDestroy(Level *,Player *,int,int,int,int);
		void ~DeadBush();
		void ~DeadBush();
};
