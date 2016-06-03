#pragma once
class MapDecoration{
	public:
		MapDecoration(MapDecoration::Type,signed char,signed char,signed char,std::string const&);
		MapDecoration(MapDecoration::Type,signed char,signed char,signed char,std::string const&);
		void equals(MapDecoration const&);
		void getImg(void);
		void getImg(void);
		void getLabel(void);
		void getLabel(void);
		void getRot(void);
		void getRot(void);
		void getX(void);
		void getX(void);
		void getY(void);
		void getY(void);
		void hashCode(void);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setImg(MapDecoration::Type);
		void setLabel(std::string const&);
		void setRot(signed char);
		void setX(signed char);
		void setY(signed char);
};
