#pragma once
class TickNextTickData{
	public:
		TickNextTickData(BlockPos const&,BlockID,Tick const&);
		TickNextTickData(BlockPos const&,BlockID,Tick const&);
		void operator<(TickNextTickData const&);
		void operator==(TickNextTickData const&);
		void operator>(TickNextTickData const&);
		void operator>(TickNextTickData const&);
};
