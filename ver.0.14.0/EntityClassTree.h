#pragma once
class EntityClassTree{
	public:
		void getEntityTypeIdLegacy(EntityType);
		void getMobCategory(EntityType);
		void isHangingEntity(Entity const&);
		void isInstanceOf(Entity const&,EntityType);
		void isItemEntity(Entity const&);
		void isMinecart(Entity const&);
		void isMob(Entity const&);
		void isMob(EntityType);
		void isMobLegacy(EntityType);
		void isOfType(EntityType,EntityType);
		void isPlayer(Entity const&);
		void isTypeInstanceOf(EntityType,EntityType);
};
