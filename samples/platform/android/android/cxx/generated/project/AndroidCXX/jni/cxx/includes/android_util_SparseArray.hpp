/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
 	
 		 
	
 		 
 		 

// Generated Code 

#ifndef _android_util_SparseArray
#define _android_util_SparseArray
//
// Scroll Down 
//

















#include <java_lang_Object.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_Object;

class android_util_SparseArray;

class android_util_SparseArray
{
public:
	android_util_SparseArray(const android_util_SparseArray& cc);
	android_util_SparseArray(void * proxy);
	virtual ~android_util_SparseArray();
	 java_lang_Object *  get(int& arg0,java_lang_Object& arg1);
	 void put(int& arg0,java_lang_Object& arg1);
	 void append(int& arg0,java_lang_Object& arg1);
	 android_util_SparseArray *  clone();
	 void clear();
	 int size();
	 void remove(int& arg0);
	 void _delete(int& arg0);
	 void removeAt(int& arg0);
	 int keyAt(int& arg0);
	 java_lang_Object *  valueAt(int& arg0);
	 void setValueAt(int& arg0,java_lang_Object& arg1);
	 int indexOfKey(int& arg0);
	 int indexOfValue(java_lang_Object& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_SparseArray