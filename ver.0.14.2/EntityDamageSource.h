#pragma once
class EntityDamageSource{
	public:
		EntityDamageSource(EntityDamageCause);
		void getCause(void);
		void getChildEntity(void);
		void getDeathMessage(std::string,Entity *);
		void getEntity(void);
		void isBlockSource(void);
		void isChildEntitySource(void);
		void isEntitySource(void);
		void ~EntityDamageSource();
		void ~EntityDamageSource();
};
