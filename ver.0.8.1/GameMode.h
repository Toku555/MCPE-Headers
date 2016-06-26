#pragma once
class GameMode{
	public:
		GameMode(Minecraft *);
		void adjustPlayer(Player *);
		void attack(Player *,Entity *);
		void canHurtPlayer(void);
		void createPlayer(Level *);
		void destroyBlock(int,int,int,int);
		void getPickRange(void);
		void handleCloseInventory(int,Player *);
		void handleInventoryMouseClick(int,int,int,Player *);
		void initAbilities(Abilities &);
		void initLevel(Level *);
		void initPlayer(Player *);
		void interact(Player *,Entity *);
		void isCreativeType(void);
		void isSurvivalType(void);
		void releaseUsingItem(Player *);
		void render(float);
		void startDestroyBlock(int,int,int,int);
		void stopDestroyBlock(void);
		void tick(void);
		void useItem(Player *,Level *,ItemInstance *);
		void useItemOn(Player *,Level *,ItemInstance *,int,int,int,int,Vec3 const&);
		void ~GameMode();
		void ~GameMode();
};
