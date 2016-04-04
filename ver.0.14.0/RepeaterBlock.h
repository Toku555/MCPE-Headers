#pragma once
class RepeaterBlock{
	public:
		RepeaterBlock(std::string const&,int,bool);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void getOffBlock(void);
		void getOnBlock(void);
		void getResource(Random &,int,int);
		void getTurnOnDelay(int);
		void isAlternateInput(Block &);
		void isInteractiveBlock(void);
		void isLocked(BlockSource &,BlockPos const&,int);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void updateDelay(BlockSource &,BlockPos const&,bool);
		void use(Player &,BlockPos const&);
		void ~RepeaterBlock();
		void ~RepeaterBlock();
};