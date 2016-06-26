#pragma once
class Mushroom{
	public:
		Mushroom(int,std::string const&);
		void canSurvive(Level *,int,int,int);
		void mayPlace(Level *,int,int,int,uchar);
		void mayPlaceOn(int);
		void tick(Level *,int,int,int,Random *);
		void ~Mushroom();
		void ~Mushroom();
};
