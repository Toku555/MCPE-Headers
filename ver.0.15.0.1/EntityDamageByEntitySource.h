#pragma once
class EntityDamageByEntitySource{
	public:
		EntityDamageByEntitySource(Entity &,EntityDamageCause);
		EntityDamageByEntitySource(Entity &,EntityDamageCause);
		void getDeathMessage(std::string,Entity *);
		void getDeathMessage(std::string,Entity *);
		void getEntity(void);
		void getEntity(void);
		void isEntitySource(void);
		void isEntitySource(void);
		void ~EntityDamageByEntitySource();
		void ~EntityDamageByEntitySource();
};
