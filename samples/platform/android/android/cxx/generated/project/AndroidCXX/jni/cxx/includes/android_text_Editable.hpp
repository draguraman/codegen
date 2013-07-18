/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
		
 			
		


#ifndef _android_text_Editable
#define _android_text_Editable










#include <java_lang_CharSequence.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_text_Editable
{
public:
	android_text_Editable append(java_lang_CharSequence& arg0,int& arg1,char& arg2);
	void clear();
	android_text_Editable replace(int& arg0,java_lang_CharSequence& arg1);
	android_text_Editable delete(int& arg0);
	android_text_Editable insert(int& arg0,java_lang_CharSequence& arg1);
	void clearSpans();
	void setFilters(std::vector<long>& arg0);
	std::vector<long> getFilters();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_Editable