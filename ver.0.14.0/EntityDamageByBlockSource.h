#pragma once
class EntityDamageByBlockSource{
	public:
		EntityDamageByBlockSource(FullBlock,EntityDamageCause);
		void getBlock(void);
		void getDeathMessage(std::string,Entity *);
		void isBlockSource(void);
		void ~EntityDamageByBlockSource();
		void ~EntityDamageByBlockSource();
};
