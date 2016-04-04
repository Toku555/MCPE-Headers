#pragma once
class Painting{
	public:
		Painting(BlockSource &);
		Painting(BlockSource &,BlockPos const&,int);
		Painting(BlockSource &,BlockPos const&,int,std::string const&);
		void addAdditionalSaveData(CompoundTag &);
		void dropItem(void);
		void getAddPacket(void);
		void getCurrentMotive(void);
		void getEntityTypeId(void);
		void getHeight(void);
		void getShadowRadius(void);
		void getWidth(void);
		void isPickable(void);
		void readAdditionalSaveData(CompoundTag const&);
		void setRandomMotive(int);
		void ~Painting();
		void ~Painting();
};
