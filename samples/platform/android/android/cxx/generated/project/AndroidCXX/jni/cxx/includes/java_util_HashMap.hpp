/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
		
		
		
 			
 			
		
		
 			
 			


#ifndef _java_util_HashMap
#define _java_util_HashMap















#include <java_util_Map.hpp>
#include <java_util_Collection.hpp>
#include <java_lang_Object.hpp>
#include <java_util_Set.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_util_HashMap
{
public:
 java_lang_Object get(java_lang_Object& arg0);
 java_lang_Object put(java_lang_Object& arg0);
 java_util_Collection values();
 java_lang_Object clone();
 void clear();
 bool isEmpty();
 int size();
 java_util_Set entrySet();
 void putAll(java_util_Map& arg0);
 java_lang_Object remove(java_lang_Object& arg0);
 java_util_Set keySet();
 bool containsValue(java_lang_Object& arg0);
 bool containsKey(java_lang_Object& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_HashMap