#pragma once
class BatchKey{
	public:
		BatchKey(UIBatchType,int,int,std::string const&,std::string const&,std::string const&,BatchClippingState const&);
		BatchKey(int,float,BatchClippingState const&);
		BatchKey(int,float,std::string const&,Color const&,BatchClippingState const&);
		void operator==(BatchKey const&);
};
