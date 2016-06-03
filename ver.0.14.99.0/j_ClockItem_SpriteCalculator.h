#pragma once
namespace j{
	class ClockItem{
		public:
		void calculateFrame(BlockSource const&,Vec3 const&);
		void getFrame(void);
		void update(BlockSource const&,Vec3 const&,bool);
	}
};
