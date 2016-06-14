#pragma once
namespace j{
	class ButtonBlock{
		public:
		void _checkPressed(BlockSource &,BlockPos const&);
		void canAttachTo(BlockSource &,BlockPos const&,signed char);
	}
};
