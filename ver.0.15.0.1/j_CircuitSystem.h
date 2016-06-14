#pragma once
namespace j{
	class CircuitSystem{
		public:
		void create<ConsumerComponent>(BlockPos const&,BlockSource *,signed char);
		void create<TransporterComponent>(BlockPos const&,BlockSource *,signed char);
		void removeComponents(BlockPos const&);
		void setStrength(BlockPos const&,int);
	}
};
