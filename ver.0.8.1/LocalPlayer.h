#pragma once
class LocalPlayer{
	public:
		LocalPlayer(Minecraft *,Level *,User *,int,bool);
		void _init(void);
		void actuallyHurt(int);
		void addAdditonalSaveData(CompoundTag *);
		void aiStep(void);
		void animateRespawn(void);
		void calculateFlight(float,float,float);
		void causeFallDamage(float);
		void closeContainer(void);
		void displayClientMessage(std::string const&);
		void drop(ItemInstance const*,bool);
		void getFieldOfViewModifier(void);
		void hurtTo(int);
		void isLocalPlayer(void);
		void isSneaking(void);
		void isSolidTile(int,int,int);
		void move(float,float,float);
		void openContainer(ChestTileEntity *);
		void openFurnace(FurnaceTileEntity *);
		void openTextEdit(TileEntity *);
		void readAdditionalSaveData(CompoundTag *);
		void refreshContainer(BaseContainerMenu *,std::vector<ItemInstance,std::allocator<ItemInstance>> const&);
		void releaseAllKeys(void);
		void reset(void);
		void respawn(void);
		void ride(Entity *);
		void sendPosition(void);
		void setKey(int,bool);
		void slotChanged(BaseContainerMenu *,int,ItemInstance const&,bool);
		void startCrafting(int,int,int,int);
		void startSleepInBed(int,int,int);
		void startStonecutting(int,int,int);
		void stopSleepInBed(bool,bool,bool);
		void swing(void);
		void take(Entity *,int);
		void tick(void);
		void updateAi(void);
		void updateArmorTypeHash(void);
		void ~LocalPlayer();
		void ~LocalPlayer();
};
