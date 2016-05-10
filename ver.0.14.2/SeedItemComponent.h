#pragma once
class SeedItemComponent{
	public:
		SeedItemComponent(Item &);
		void init(Json::Value &);
		void useOn(ItemInstance &,Player &,BlockPos const&,signed char,Vec3 const&);
};
