#pragma once
class MCOPayloadPacker{
	public:
		MCOPayloadPacker(Random &);
		void readControlPackage(char *,uint);
		void writeBitStream(long long,std::string);
		void writeControllPackage(ControllerData const&);
};
