#pragma once
class EntityDamageByEntitySource{
	public:
		EntityDamageByEntitySource(Entity &,EntityDamageCause);
		void getDeathMessage(std::string,Entity *);
		void getEntity(void);
		void isEntitySource(void);
		void ~EntityDamageByEntitySource();
		void ~EntityDamageByEntitySource();
};
