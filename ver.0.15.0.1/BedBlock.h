#pragma once
class BedBlock{
	public:
		BedBlock(std::string const&,int);
		BedBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void findStandUpPosition(BlockSource &,BlockPos const&,int,BlockPos&);
		void findStandUpPosition(BlockSource &,BlockPos const&,int,BlockPos&);
		void getMappedFace(signed char,int);
		void getMappedFace(signed char,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getVariant(int);
		void getVariant(int);
		void isHeadPiece(int);
		void isHeadPiece(int);
		void isInteractiveBlock(void);
		void isInteractiveBlock(void);
		void isOccupied(int);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void setOccupied(BlockSource &,BlockPos const&,bool);
		void setOccupied(BlockSource &,BlockPos const&,bool);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~BedBlock();
		void ~BedBlock();
};
