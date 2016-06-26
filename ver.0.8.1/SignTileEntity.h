#pragma once
class SignTileEntity{
	public:
		SignTileEntity(void);
		void getShadowRadius(void);
		void getUpdatePacket(void);
		void isEditable(void);
		void load(CompoundTag *);
		void onUpdatePacket(CompoundTag *);
		void save(CompoundTag *);
		void setEditable(bool);
		void setLevelAndPos(Level *,int,int,int);
		void shouldSave(void);
		void ~SignTileEntity();
		void ~SignTileEntity();
};
