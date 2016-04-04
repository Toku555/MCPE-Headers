#pragma once
class BedBlock{
	public:
		BedBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void findStandUpPosition(BlockSource &,BlockPos const&,int,BlockPos&);
		void getResource(Random &,int,int);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getTessellatedUVs(void);
		void getTexture(signed char,int);
		void isHeadPiece(int);
		void isInteractiveBlock(void);
		void isOccupied(int);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void setOccupied(BlockSource &,BlockPos const&,bool);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void use(Player &,BlockPos const&);
		void ~BedBlock();
		void ~BedBlock();
};
