namespace System
{
	/** \brief This is the base object for every type. */
	class Object
	{
		public:
		
			/** \brief constructor taking no param */
			Object() { };
			
			/** \brief Getter-only. Reference counter size of this object. */
			Int rc_size;
			
			/** \brief Getter-only. Type name of the object. */
			Object rc_class;
			
			/** \brief Getter-only. Reference count of this object. */
			Int rc_count;
			
			/** \brief Getter-only. Weak reference count of this object. */
			Int weak_count;
			
			/** \brief Class (type) object for this object. */
			Class class_id;
			
			/** \brief Returns whether an object is of a specific class/type. */
			Bool isInstanceOf(Class classType);
			
			/** \brief Gets a deep copy of this object. */
			Object getDeepCopy();
			
			/** \brief Unk */
			void setDeepCopy(Object obj);
			
			/** \brief Dumps all info about an object. 
			\details Debug version only (else stripped). */
			String dump();
			
			Object getObjectAttribute(string path);
			
			void setObjectAttribute(string path, Object value);
			
			/** \brief Returns whether this object has a primitive interface */
			Bool hasPrimitiveInterface();
			
			/** \brief Casts this object to Bool. */
			Bool toBool();
			
			/** \brief Casts this object to Byte. */
			Byte toByte();
			
			/** \brief Casts this object to Short. */
			Short toShort();
			
			/** \brief Casts this object to Int. */
			Int toInt();
			
			/** \brief Casts this object to Long. */
			Long toLong();
			
			/** \brief Casts this object to UByte. */
			UByte toUByte();
			
			/** \brief Casts this object to UShort. */
			UShort toUShort();
			
			/** \brief Casts this object to UInt. */
			UInt toUInt();
			
			/** \brief Casts this object to ULong. */
			ULong toULong();
			
			/** \brief Casts this object to Float. */
			Float toFloat();
			
			/** \brief Casts this object to Double. */
			Double toDouble();
			
			/** \brief Casts this object to String. */
			String toString();

			/** \brief Casts this object to Symbol. */
			Symbol toSymbol();
			
			/** \brief Returns whether this object has an Array interface. */
			Bool hasArrayInterface();
			
			/** \brief Gets the Array item count for this object. */
			Int getArrayCount();
			
			/** \brief Sets the Array item count for this object. */
			void setArrayCount();
			
			/** \brief Gets an Array item for this object. */
			Object getArrayElement(Object arg0);
			
			/** \brief Sets the Array item for this object. */
			void setArrayElement(Object arg0, Object arg1);
			
			/** \brief Returns whether this object has a Map interface. */
			Bool hasMapInterface();
			
			/** \brief Returns the count of items in the map. */
			int getMapCount();
			
			/** \brief Returns whether the Map has a specific object key.
			Bool hasMapElement(Object arg0);
			
			/** \brief Sets a Map element (key, value). */
			void setMapElement(Object arg0, Object arg1);
			
			/** \brief Gets a Map element by key. */
			Object getMapElement(Object arg0);
			
			/** \brief Returns whether this object has a generator interface */
			void hasGeneratorInterface();
			
			/** \brief Returns generator (?) 
			\details FunctionObject seems to allow it */
			Iterator generator();
			
			/** \brief Returns whether this object has an iterator */
			void hasIteratorInterface();

			/** \brief Gets the iterator for this object */
			Iterator iterator();

			/** \brief Returns whether this object is a variable */
			void hasVariableInterface();

			/** \brief Returns whether this object has a function interface */
			void hasFunctionInterface();
			
			/** \brief Calls this object as a function 
			\details Object must have function interface.
			Using () on the object also works.
			\returns Return value */
			Object call();
			
			/** \brief Returns whether this object has a byte data interface */
			Bool hasByteDataInterface();

			/** \brief Returns the ByteData size for this object */
			Int getByteDataCount();

			/** \brief Sets the ByteData size for this object */
			void setByteDataCount(Int count);

			/** \brief Returns the ByteData capacity for this object */
			Int getByteDataCapacity();

			/** \brief Sets the ByteData capacity for this object */
			void setByteDataCapacity(Int capacity);

			/** \brief Gets the underlaying ByteData */
			ByteData getByteData();

			/** \brief Sets the underlaying ByteData */
			void setByteData(ByteData bytedata);

			/** \brief Returns whether this object has an object selector interface */
			void hasObjectSelectorInterface();
			
			/** \brief Gets the get for this object if it has a get interface. */
			void self();

			void getArchiveTree();

			void setArchiveTree();
			
			/** \brief Serializes this object.
			\details Serializes it as a PDStruct buffer */
			ByteData serialize();
			
			/** \brief Deserializes this object. 
			\details From PDStruct buffer */
			void deserialize(ByteData serializedData);
			
			/** \brief Returns whether a certain object is defined within this object. 
			\brief This object must have a map interface. */
			void defined(Object obj);
			
			/** \brief Finds all the elements in this object that matches the predicates
			\returns Array of results 
			\code
			var obj = "aaabbbcccbbbaaa";
			return obj.find_all((e) => e == "c"); // [(String)("c"),(String)("c"),(String)("c")]
			\endcode */
			Array find_all(FunctionObject func);
			
			/** \brief Applies callback to all elements in this object */
			void each_all(FunctionObject func);

			/** \brief Maps all the elements in this object 
			\returns Array of all the selected elements 
			\code 
			var obj = "map";
			return obj.map_all((e) => e); // [(String)("m"),(String)("a"),(String)("p")]
			\endcode */
			Array map_all(FunctionObject<Object> func);
			
			/** \brief Returns whether this object is not equal to another. */
			Bool operator!=() {};
			
			/** \brief Returns whether this object is equal to another. */
			Bool operator==() {};
	}
}