#pragma once
namespace j{
	class Dimension{
		public:
		void getId(void);
		void init(void);
		void isDay(void);
		void load(CompoundTag const&);
		void save(CompoundTag &);
		void sendPacketForEntity(Entity const&,Packet const&,Player const*);
		void setCeiling(bool);
		void ~Dimension();
	}
};
