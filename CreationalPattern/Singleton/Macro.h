#pragma once
#define DEFINITION_SINGLE(Type) Type* Type::_instance = nullptr;
#define DECLARE_SINGLE(Type)\
		private:\
			static Type * _instance;\
			Type();\
			~Type();\
		public:\
			static Type* Instance()\
			{\
				if(_instance == 0)\
				{\
					_instance = new Type;\
				}\
				return _instance;\
			}\
			void Release()\
			{\
				if(_instance)\
				{\
					delete _instance;\
					_instance = nullptr;\
				}\
			}\
			Type(const Type&) = delete;\
			Type(const Type&&) = delete;\
			Type& operator=(const Type&) = delete;\
			Type& operator=(const Type&&) = delete;