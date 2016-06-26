#pragma once
class Painting{
	public:
		Painting(Level *);
		Painting(Level *,int,int,int,int);
		Painting(Level *,int,int,int,int,std::string const&);
		void addAdditonalSaveData(CompoundTag *);
		void dropItem(void);
		void getEntityTypeId(void);
		void getHeight(void);
		void getShadowRadius(void);
		void getWidth(void);
		void isPickable(void);
		void readAdditionalSaveData(CompoundTag *);
		void setRandomMotive(int);
		void ~Painting();
		void ~Painting();
};
