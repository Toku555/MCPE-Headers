#pragma once
class ServerPlayer{
	public:
		ServerPlayer(Minecraft *,Level *);
		void aiStep(void);
		void closeContainer(void);
		void completeUsingItem(void);
		void disconnect(void);
		void displayClientMessage(std::string const&);
		void doCloseContainer(void);
		void hasResource(int);
		void hurtArmor(int);
		void nextContainerCounter(void);
		void openContainer(ChestTileEntity *);
		void openFurnace(FurnaceTileEntity *);
		void refreshContainer(BaseContainerMenu *,std::vector<ItemInstance,std::allocator<ItemInstance>> const&);
		void ride(Entity *);
		void setContainerData(BaseContainerMenu *,int,int);
		void setContainerMenu(BaseContainerMenu *);
		void setPlayerInput(float,float,bool,bool);
		void slotChanged(BaseContainerMenu *,int,ItemInstance const&,bool);
		void stopSleepInBed(bool,bool,bool);
		void take(Entity *,int);
		void tick(void);
		void ~ServerPlayer();
		void ~ServerPlayer();
};
