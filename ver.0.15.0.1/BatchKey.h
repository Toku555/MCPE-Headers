#pragma once
class BatchKey{
	public:
		BatchKey(BatchKey const&);
		BatchKey(BatchKey const&);
		BatchKey(UIBatchType,int,int,ResourceLocation const&,ResourceLocation const&,std::string const&,BatchClippingState const&);
		BatchKey(UIBatchType,int,int,ResourceLocation const&,ResourceLocation const&,std::string const&,BatchClippingState const&);
		BatchKey(int,float,BatchClippingState const&);
		BatchKey(int,float,BatchClippingState const&);
		BatchKey(int,float,ResourceLocation const&,Color const&,BatchClippingState const&,std::string const&);
		BatchKey(int,float,ResourceLocation const&,Color const&,BatchClippingState const&,std::string const&);
		void operator==(BatchKey const&);
		void operator==(BatchKey const&);
		void ~BatchKey();
		void ~BatchKey();
};
