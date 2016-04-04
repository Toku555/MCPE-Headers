#pragma once
class DiodeBlock{
	public:
		DiodeBlock(std::string const&,int,bool);
		void canSurvive(BlockSource &,BlockPos const&);
		void checkTickOnNeighbor(BlockSource &,BlockPos const&,BlockID);
		void getAlternateSignal(BlockSource &,BlockPos const&,int);
		void getAlternateSignalAt(BlockSource &,BlockPos const&,int);
		void getDirectSignal(BlockSource &,BlockPos const&,int);
		void getInputSignal(BlockSource &,BlockPos const&,int);
		void getOutputSignal(BlockSource &,BlockPos const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getSignal(BlockSource &,BlockPos const&,int);
		void getTexture(signed char);
		void getTurnOffDelay(int);
		void isAlternateInput(Block &);
		void isDiode(Block &);
		void isLocked(BlockSource &,BlockPos const&,int);
		void isOn(int);
		void isSameDiode(Block &);
		void isSignalSource(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void shouldPrioritize(BlockSource &,BlockPos const&,int);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void shouldTurnOn(BlockSource &,BlockPos const&,int);
		void ~DiodeBlock();
		void ~DiodeBlock();
};