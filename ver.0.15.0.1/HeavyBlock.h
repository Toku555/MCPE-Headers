#pragma once
class HeavyBlock{
	public:
		HeavyBlock(std::string const&,int,Material const&);
		HeavyBlock(std::string const&,int,Material const&);
		void _findBottomSlidingBlock(BlockSource &,BlockPos const&);
		void _scheduleCheck(BlockSource &,BlockPos const&,Block *,int);
		void _scheduleCheckIfSliding(BlockSource &,BlockPos const&,Block *);
		void _scheduleCheckIfSliding(BlockSource &,BlockPos const&,Block *);
		void _tickBlocksAround2D(BlockSource &,BlockPos const&,Block *);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void checkSlide(BlockSource &,BlockPos const&);
		void checkSlide(BlockSource &,BlockPos const&);
		void falling(void);
		void falling(void);
		void getTickDelay(void);
		void isFree(BlockSource &,BlockPos const&);
		void isFree(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLand(BlockSource &,BlockPos const&);
		void onLand(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void startFalling(BlockSource &,BlockPos const&,Block *,bool);
		void startFalling(BlockSource &,BlockPos const&,Block *,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void triggerFallCheck(BlockSource &,BlockPos const&);
		void triggerFallCheck(BlockSource &,BlockPos const&);
		void ~HeavyBlock();
		void ~HeavyBlock();
};
