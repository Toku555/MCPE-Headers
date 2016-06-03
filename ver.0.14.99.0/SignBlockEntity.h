#pragma once
class SignBlockEntity{
	public:
		SignBlockEntity(BlockPos const&);
		SignBlockEntity(BlockPos const&);
		void getMessage(int);
		void getMessage(int);
		void getSelectedLine(void);
		void getSelectedLine(void);
		void getShadowRadius(BlockSource &);
		void getShadowRadius(BlockSource &);
		void getUpdatePacket(BlockSource &);
		void getUpdatePacket(BlockSource &);
		void isEditable(void);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void onUpdatePacket(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setEditable(bool);
		void setMessage(std::string const&,int);
		void setMessage(std::string const&,int);
		void setSelectedLine(int);
		void setSelectedLine(int);
		void ~SignBlockEntity();
		void ~SignBlockEntity();
		void ~SignBlockEntity();
		void ~SignBlockEntity();
};
