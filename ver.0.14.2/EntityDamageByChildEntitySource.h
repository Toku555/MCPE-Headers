#pragma once
class EntityDamageByChildEntitySource{
	public:
		EntityDamageByChildEntitySource(Entity &,Entity &,EntityDamageCause);
		void getChildEntity(void);
		void getDeathMessage(std::string,Entity *);
		void isChildEntitySource(void);
		void ~EntityDamageByChildEntitySource();
		void ~EntityDamageByChildEntitySource();
};
