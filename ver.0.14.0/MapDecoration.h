#pragma once
class MapDecoration{
	public:
		MapDecoration(MapDecoration::Type,signed char,signed char,signed char);
		void equals(MapDecoration const&);
		void getImg(void);
		void getRot(void);
		void getX(void);
		void getY(void);
		void hashCode(void);
		void setImg(MapDecoration::Type);
		void setRot(signed char);
		void setX(signed char);
		void setY(signed char);
};
