#pragma once
class Arrow{
	public:
		Arrow(BlockSource &);
		Arrow(BlockSource &,Vec3 const&);
		Arrow(Mob &,Mob &,float,float,ItemInstance const*);
		Arrow(Mob &,float,ItemInstance const*);
		void _defineEntityData(void);
		void _init(Mob const*,ItemInstance const*);
		void _readItemEnchants(ItemInstance const&);
		void addAdditionalSaveData(CompoundTag &);
		void getBaseDamage(void);
		void getEnchantFlame(void);
		void getEnchantInfinity(void);
		void getEnchantPower(void);
		void getEnchantPunch(void);
		void getEntityTypeId(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void getShakeTime(void);
		void getSourceUniqueID(void);
		void isCritical(void);
		void lerpMotion(Vec3 const&);
		void normalTick(void);
		void playerTouch(Player &);
		void readAdditionalSaveData(CompoundTag const&);
		void setBaseDamage(float);
		void setCritical(bool);
		void setEnchantFlame(int);
		void setEnchantInfinity(int);
		void setEnchantPower(int);
		void setEnchantPunch(int);
		void shoot(Vec3 const&,float,float,Vec3 const&);
		void ~Arrow();
		void ~Arrow();
};
