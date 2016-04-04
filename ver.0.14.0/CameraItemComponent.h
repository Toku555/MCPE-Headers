#pragma once
class CameraItemComponent{
	public:
		CameraItemComponent(Item &);
		void init(Json::Value &);
		void releaseUsing(ItemInstance &,Player &,int);
		void use(ItemInstance &,Player &);
		void useOn(ItemInstance &,Player &,BlockPos const&,signed char,Vec3 const&);
};
