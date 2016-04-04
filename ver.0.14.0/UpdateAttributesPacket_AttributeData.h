#pragma once
namespace UpdateAttributesPacket{
	class AttributeData{
		public:
		void AttributeData(AttributeInstance const&);
		void AttributeData(void);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		UpdateAttributesPacket(Mob const&,std::vector<AttributeInstanceHandle,std::allocator<AttributeInstanceHandle>> const&);
		UpdateAttributesPacket(void);
		void getAttributeData(void);
		void getEntityId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~UpdateAttributesPacket();
		void ~UpdateAttributesPacket();
	}
};
