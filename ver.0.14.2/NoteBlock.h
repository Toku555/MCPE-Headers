#pragma once
class NoteBlock{
	public:
		NoteBlock(std::string const&,int);
		void attack(Player *,BlockPos const&);
		void getInstrument(int);
		void isInteractiveBlock(void);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void triggerEvent(BlockSource &,BlockPos const&,int,int);
		void use(Player &,BlockPos const&);
		void ~NoteBlock();
		void ~NoteBlock();
};
