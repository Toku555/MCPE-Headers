#pragma once
class SignBlockEntity{
	public:
		SignBlockEntity(BlockPos const&);
		void getMessage(int);
		void getSelectedLine(void);
		void getShadowRadius(BlockSource &);
		void getUpdatePacket(BlockSource &);
		void isEditable(void);
		void load(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void setEditable(bool);
		void setMessage(std::string const&,int);
		void setSelectedLine(int);
		void ~SignBlockEntity();
		void ~SignBlockEntity();
};
