namespace System
{
	class Object
	{
		public:
		
			/// @brief constructor taking no param
			Object() { };
			
			/// @brief Size of the object.
			Int rc_size;
			
			/// @brief Type name of the object.
			Int rc_class;
			
			/// @brief Ref count of this object.
			Int rc_count;
			
			/// @brief Weak ref count of this object.
			Int weak_count;
			
			/// @brief Class object for this object.
			Int class_id;
			
			/// @brief Returns whether an object is of a specific class.
			Bool isInstanceOf(hClass classType);
			
			/// @brief Gets a deep copy of this object.
			Object getDeepCopy();
			
			/// @brief Unk
			void setDeepCopy();
			
			/// @brief Dumps all info about an object. Debug version only (else stripped). 
			String dump();
			
			Object getObjectAttribute(string attrName);
			
			void setObjectAttribute(string attrName, Object value);
			
			Bool hasPrimitiveInterface();
			
			/// @brief Casts this object to Bool.
			Bool toBool();
			
			/// @brief Casts this object to Byte.
			Byte toByte();
			
			/// @brief Casts this object to Short.
			Short toShort();
			
			/// @brief Casts this object to Int.
			Int toInt();
			
			/// @brief Casts this object to Long.
			Long toLong();
			
			/// @brief Casts this object to UByte.
			UByte toUByte();
			
			/// @brief Casts this object to UShort.
			UShort toUShort();
			
			/// @brief Casts this object to UInt.
			UInt toUInt();
			
			/// @brief Casts this object to ULong.
			ULong toULong();
			
			/// @brief Casts this object to Float.
			Float toFloat();
			
			/// @brief Casts this object to Double.
			Double toDouble();
			
			/// @brief Casts this object to String.
			String toString();
			Symbol toSymbol();
			
			/// @brief Returns whether this object is an array.
			Bool hasArrayInterface();
			
			/// @brief Gets the array item count for this object.
			Int getArrayCount();
			
			/// @brief Sets the array item count for this object.
			void setArrayCount();
			
			/// @brief Gets an array item for this object.
			Object getArrayElement(Object arg0);
			
			/// @brief Sets the array item for this object.
			void setArrayElement(Object arg0, Object arg1);
			
			/// @brief Returns whether this object is a map.
			Bool hasMapInterface();
			
			/// @brief Returns the count of items in the map.
			int getMapCount();
			
			/// @brief Returns whether the map has a specific object key.
			Bool hasMapElement(Object arg0);
			
			/// @brief Sets a map element (key, value).
			void setMapElement(Object arg0, Object arg1);
			
			/// @brief Gets a map element by key.
			Object getMapElement(Object arg0);
			
			/// @brief Returns whether this object has a generator interface
			void hasGeneratorInterface();
			
			/// @brief Returns generator (?)
			void generator();
			
			/// @brief Returns whether this object has an iterator
			void hasIteratorInterface();
			Iterator iterator();
			void hasVariableInterface();
			void hasFunctionInterface();
			
			/// @brief Calls this object as a function
			void call();
			
			/// @brief Returns whether this object has a byte data interface
			void hasByteDataInterface();
			void getByteDataCount();
			void setByteDataCount();
			void getByteDataCapacity();
			void setByteDataCapacity();
			ByteData getByteData();
			void setByteData(ByteData bytedata);
			void hasObjectSelectorInterface();
			
			/// @brief Gets the get for this object if it has a get interface.
			void self();
			void getArchiveTree();
			void setArchiveTree();
			
			/// @brief Serializes this object.
			ByteData serialize();
			
			/// @brief Deserializes this object.
			void deserialize(ByteData serializedData);
			
			/// @brief Returns whether a certain object is defined within this object.
			void defined(Object obj);
			
			void find_all(FunctionObject func);
			void each_all(FunctionObject func);
			void map_all(FunctionObject func);
			
			/// @brief Returns whether this object is not equal to another.
			Bool operator!=() {};
			
			/// @brief Returns whether this object is equal to another.
			Bool operator==() {};
	}
}